/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/S3TablesPaginationBase.h>
#include <aws/s3tables/S3TablesServiceClientModel.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws {
namespace S3Tables {
/**
 * <p>An Amazon S3 table represents a structured dataset consisting of tabular data
 * in <a href="https://parquet.apache.org/docs/">Apache Parquet</a> format and
 * related metadata. This data is stored inside an S3 table as a subresource. All
 * tables in a table bucket are stored in the <a
 * href="https://iceberg.apache.org/docs/latest/">Apache Iceberg</a> table format.
 * Through integration with the <a
 * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/glue/latest/dg/catalog-and-crawler.html">Amazon
 * Web Services Glue Data Catalog</a> you can interact with your tables using
 * Amazon Web Services analytics services, such as <a
 * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/athena/">Amazon
 * Athena</a> and <a
 * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/redshift/">Amazon
 * Redshift</a>. Amazon S3 manages maintenance of your tables through automatic
 * file compaction and snapshot management. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-buckets.html">Amazon
 * S3 table buckets</a>.</p>
 */
class AWS_S3TABLES_API S3TablesClient : public Aws::Client::AWSJsonClient,
                                        public Aws::Client::ClientWithAsyncTemplateMethods<S3TablesClient>,
                                        public S3TablesPaginationBase<S3TablesClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef S3TablesClientConfiguration ClientConfigurationType;
  typedef S3TablesEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  S3TablesClient(const Aws::S3Tables::S3TablesClientConfiguration& clientConfiguration = Aws::S3Tables::S3TablesClientConfiguration(),
                 std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  S3TablesClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::S3Tables::S3TablesClientConfiguration& clientConfiguration = Aws::S3Tables::S3TablesClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  S3TablesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::S3Tables::S3TablesClientConfiguration& clientConfiguration = Aws::S3Tables::S3TablesClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  S3TablesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  S3TablesClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  S3TablesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~S3TablesClient();

  /**
   * <p>Creates a namespace. A namespace is a logical grouping of tables within your
   * table bucket, which you can use to organize tables. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-namespace-create.html">Create
   * a namespace</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:CreateNamespace</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/CreateNamespace">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest& request) const;

  /**
   * A Callable wrapper for CreateNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateNamespaceRequestT = Model::CreateNamespaceRequest>
  Model::CreateNamespaceOutcomeCallable CreateNamespaceCallable(const CreateNamespaceRequestT& request) const {
    return SubmitCallable(&S3TablesClient::CreateNamespace, request);
  }

  /**
   * An Async wrapper for CreateNamespace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateNamespaceRequestT = Model::CreateNamespaceRequest>
  void CreateNamespaceAsync(const CreateNamespaceRequestT& request, const CreateNamespaceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::CreateNamespace, request, handler, context);
  }

  /**
   * <p>Creates a new table associated with the given namespace in a table bucket.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-create.html">Creating
   * an Amazon S3 table</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <ul> <li> <p>You must have the
   * <code>s3tables:CreateTable</code> permission to use this operation. </p> </li>
   * <li> <p>If you use this operation with the optional <code>metadata</code>
   * request parameter you must have the <code>s3tables:PutTableData</code>
   * permission. </p> </li> <li> <p>If you use this operation with the optional
   * <code>encryptionConfiguration</code> request parameter you must have the
   * <code>s3tables:PutTableEncryption</code> permission. </p> </li> <li> <p>If you
   * use this operation with the <code>storageClassConfiguration</code> request
   * parameter, you must have the <code>s3tables:PutTableStorageClass</code>
   * permission.</p> </li> <li> <p>To create a table with tags, you must have the
   * <code>s3tables:TagResource</code> permission in addition to
   * <code>s3tables:CreateTable</code> permission.</p> </li> </ul>
   * <p>Additionally, If you choose SSE-KMS encryption you must grant the S3 Tables
   * maintenance principal access to your KMS key. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-kms-permissions.html">Permissions
   * requirements for S3 Tables SSE-KMS encryption</a>. </p>  </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/CreateTable">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

  /**
   * A Callable wrapper for CreateTable that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateTableRequestT = Model::CreateTableRequest>
  Model::CreateTableOutcomeCallable CreateTableCallable(const CreateTableRequestT& request) const {
    return SubmitCallable(&S3TablesClient::CreateTable, request);
  }

  /**
   * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateTableRequestT = Model::CreateTableRequest>
  void CreateTableAsync(const CreateTableRequestT& request, const CreateTableResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::CreateTable, request, handler, context);
  }

  /**
   * <p>Creates a table bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-buckets-create.html">Creating
   * a table bucket</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
   * <dl> <dt>Permissions</dt> <dd> <ul> <li> <p>You must have the
   * <code>s3tables:CreateTableBucket</code> permission to use this operation. </p>
   * </li> <li> <p>If you use this operation with the optional
   * <code>encryptionConfiguration</code> parameter you must have the
   * <code>s3tables:PutTableBucketEncryption</code> permission.</p> </li> <li> <p>If
   * you use this operation with the <code>storageClassConfiguration</code> request
   * parameter, you must have the <code>s3tables:PutTableBucketStorageClass</code>
   * permission.</p> </li> <li> <p>To create a table bucket with tags, you must have
   * the <code>s3tables:TagResource</code> permission in addition to
   * <code>s3tables:CreateTableBucket</code> permission.</p> </li> </ul> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/CreateTableBucket">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTableBucketOutcome CreateTableBucket(const Model::CreateTableBucketRequest& request) const;

  /**
   * A Callable wrapper for CreateTableBucket that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateTableBucketRequestT = Model::CreateTableBucketRequest>
  Model::CreateTableBucketOutcomeCallable CreateTableBucketCallable(const CreateTableBucketRequestT& request) const {
    return SubmitCallable(&S3TablesClient::CreateTableBucket, request);
  }

  /**
   * An Async wrapper for CreateTableBucket that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateTableBucketRequestT = Model::CreateTableBucketRequest>
  void CreateTableBucketAsync(const CreateTableBucketRequestT& request, const CreateTableBucketResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::CreateTableBucket, request, handler, context);
  }

  /**
   * <p>Deletes a namespace. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-namespace-delete.html">Delete
   * a namespace</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteNamespace</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteNamespace">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;

  /**
   * A Callable wrapper for DeleteNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteNamespaceRequestT = Model::DeleteNamespaceRequest>
  Model::DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const DeleteNamespaceRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteNamespace, request);
  }

  /**
   * An Async wrapper for DeleteNamespace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteNamespaceRequestT = Model::DeleteNamespaceRequest>
  void DeleteNamespaceAsync(const DeleteNamespaceRequestT& request, const DeleteNamespaceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteNamespace, request, handler, context);
  }

  /**
   * <p>Deletes a table. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-delete.html">Deleting
   * an Amazon S3 table</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteTable</code> permission to use this operation. </p> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteTable">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

  /**
   * A Callable wrapper for DeleteTable that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteTableRequestT = Model::DeleteTableRequest>
  Model::DeleteTableOutcomeCallable DeleteTableCallable(const DeleteTableRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteTable, request);
  }

  /**
   * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteTableRequestT = Model::DeleteTableRequest>
  void DeleteTableAsync(const DeleteTableRequestT& request, const DeleteTableResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteTable, request, handler, context);
  }

  /**
   * <p>Deletes a table bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-buckets-delete.html">Deleting
   * a table bucket</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
   * <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteTableBucket</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteTableBucket">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTableBucketOutcome DeleteTableBucket(const Model::DeleteTableBucketRequest& request) const;

  /**
   * A Callable wrapper for DeleteTableBucket that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteTableBucketRequestT = Model::DeleteTableBucketRequest>
  Model::DeleteTableBucketOutcomeCallable DeleteTableBucketCallable(const DeleteTableBucketRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteTableBucket, request);
  }

  /**
   * An Async wrapper for DeleteTableBucket that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteTableBucketRequestT = Model::DeleteTableBucketRequest>
  void DeleteTableBucketAsync(const DeleteTableBucketRequestT& request, const DeleteTableBucketResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteTableBucket, request, handler, context);
  }

  /**
   * <p>Deletes the encryption configuration for a table bucket.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteTableBucketEncryption</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteTableBucketEncryption">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTableBucketEncryptionOutcome DeleteTableBucketEncryption(
      const Model::DeleteTableBucketEncryptionRequest& request) const;

  /**
   * A Callable wrapper for DeleteTableBucketEncryption that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteTableBucketEncryptionRequestT = Model::DeleteTableBucketEncryptionRequest>
  Model::DeleteTableBucketEncryptionOutcomeCallable DeleteTableBucketEncryptionCallable(
      const DeleteTableBucketEncryptionRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteTableBucketEncryption, request);
  }

  /**
   * An Async wrapper for DeleteTableBucketEncryption that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteTableBucketEncryptionRequestT = Model::DeleteTableBucketEncryptionRequest>
  void DeleteTableBucketEncryptionAsync(const DeleteTableBucketEncryptionRequestT& request,
                                        const DeleteTableBucketEncryptionResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteTableBucketEncryption, request, handler, context);
  }

  /**
   * <p>Deletes the metrics configuration for a table bucket.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteTableBucketMetricsConfiguration</code> permission to use
   * this operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteTableBucketMetricsConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTableBucketMetricsConfigurationOutcome DeleteTableBucketMetricsConfiguration(
      const Model::DeleteTableBucketMetricsConfigurationRequest& request) const;

  /**
   * A Callable wrapper for DeleteTableBucketMetricsConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DeleteTableBucketMetricsConfigurationRequestT = Model::DeleteTableBucketMetricsConfigurationRequest>
  Model::DeleteTableBucketMetricsConfigurationOutcomeCallable DeleteTableBucketMetricsConfigurationCallable(
      const DeleteTableBucketMetricsConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteTableBucketMetricsConfiguration, request);
  }

  /**
   * An Async wrapper for DeleteTableBucketMetricsConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DeleteTableBucketMetricsConfigurationRequestT = Model::DeleteTableBucketMetricsConfigurationRequest>
  void DeleteTableBucketMetricsConfigurationAsync(const DeleteTableBucketMetricsConfigurationRequestT& request,
                                                  const DeleteTableBucketMetricsConfigurationResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteTableBucketMetricsConfiguration, request, handler, context);
  }

  /**
   * <p>Deletes a table bucket policy. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-bucket-policy.html#table-bucket-policy-delete">Deleting
   * a table bucket policy</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteTableBucketPolicy</code> permission to use this operation.
   * </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteTableBucketPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTableBucketPolicyOutcome DeleteTableBucketPolicy(const Model::DeleteTableBucketPolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteTableBucketPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteTableBucketPolicyRequestT = Model::DeleteTableBucketPolicyRequest>
  Model::DeleteTableBucketPolicyOutcomeCallable DeleteTableBucketPolicyCallable(const DeleteTableBucketPolicyRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteTableBucketPolicy, request);
  }

  /**
   * An Async wrapper for DeleteTableBucketPolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteTableBucketPolicyRequestT = Model::DeleteTableBucketPolicyRequest>
  void DeleteTableBucketPolicyAsync(const DeleteTableBucketPolicyRequestT& request,
                                    const DeleteTableBucketPolicyResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteTableBucketPolicy, request, handler, context);
  }

  /**
   * <p>Deletes the replication configuration for a table bucket. After deletion, new
   * table updates will no longer be replicated to destination buckets, though
   * existing replicated tables will remain in destination buckets.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteTableBucketReplication</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteTableBucketReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTableBucketReplicationOutcome DeleteTableBucketReplication(
      const Model::DeleteTableBucketReplicationRequest& request) const;

  /**
   * A Callable wrapper for DeleteTableBucketReplication that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteTableBucketReplicationRequestT = Model::DeleteTableBucketReplicationRequest>
  Model::DeleteTableBucketReplicationOutcomeCallable DeleteTableBucketReplicationCallable(
      const DeleteTableBucketReplicationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteTableBucketReplication, request);
  }

  /**
   * An Async wrapper for DeleteTableBucketReplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteTableBucketReplicationRequestT = Model::DeleteTableBucketReplicationRequest>
  void DeleteTableBucketReplicationAsync(const DeleteTableBucketReplicationRequestT& request,
                                         const DeleteTableBucketReplicationResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteTableBucketReplication, request, handler, context);
  }

  /**
   * <p>Deletes a table policy. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-table-policy.html#table-policy-delete">Deleting
   * a table policy</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
   * <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteTablePolicy</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteTablePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTablePolicyOutcome DeleteTablePolicy(const Model::DeleteTablePolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteTablePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteTablePolicyRequestT = Model::DeleteTablePolicyRequest>
  Model::DeleteTablePolicyOutcomeCallable DeleteTablePolicyCallable(const DeleteTablePolicyRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteTablePolicy, request);
  }

  /**
   * An Async wrapper for DeleteTablePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteTablePolicyRequestT = Model::DeleteTablePolicyRequest>
  void DeleteTablePolicyAsync(const DeleteTablePolicyRequestT& request, const DeleteTablePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteTablePolicy, request, handler, context);
  }

  /**
   * <p>Deletes the replication configuration for a specific table. After deletion,
   * new updates to this table will no longer be replicated to destination tables,
   * though existing replicated copies will remain in destination buckets.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:DeleteTableReplication</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DeleteTableReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTableReplicationOutcome DeleteTableReplication(const Model::DeleteTableReplicationRequest& request) const;

  /**
   * A Callable wrapper for DeleteTableReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteTableReplicationRequestT = Model::DeleteTableReplicationRequest>
  Model::DeleteTableReplicationOutcomeCallable DeleteTableReplicationCallable(const DeleteTableReplicationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::DeleteTableReplication, request);
  }

  /**
   * An Async wrapper for DeleteTableReplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteTableReplicationRequestT = Model::DeleteTableReplicationRequest>
  void DeleteTableReplicationAsync(const DeleteTableReplicationRequestT& request,
                                   const DeleteTableReplicationResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::DeleteTableReplication, request, handler, context);
  }

  /**
   * <p>Gets details about a namespace. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-namespace.html">Table
   * namespaces</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetNamespace</code> permission to use this operation. </p> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetNamespace">AWS
   * API Reference</a></p>
   */
  virtual Model::GetNamespaceOutcome GetNamespace(const Model::GetNamespaceRequest& request) const;

  /**
   * A Callable wrapper for GetNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetNamespaceRequestT = Model::GetNamespaceRequest>
  Model::GetNamespaceOutcomeCallable GetNamespaceCallable(const GetNamespaceRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetNamespace, request);
  }

  /**
   * An Async wrapper for GetNamespace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetNamespaceRequestT = Model::GetNamespaceRequest>
  void GetNamespaceAsync(const GetNamespaceRequestT& request, const GetNamespaceResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetNamespace, request, handler, context);
  }

  /**
   * <p>Gets details about a table. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-tables.html">S3
   * Tables</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the <code>s3tables:GetTable</code>
   * permission to use this operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTable">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableOutcome GetTable(const Model::GetTableRequest& request = {}) const;

  /**
   * A Callable wrapper for GetTable that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetTableRequestT = Model::GetTableRequest>
  Model::GetTableOutcomeCallable GetTableCallable(const GetTableRequestT& request = {}) const {
    return SubmitCallable(&S3TablesClient::GetTable, request);
  }

  /**
   * An Async wrapper for GetTable that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetTableRequestT = Model::GetTableRequest>
  void GetTableAsync(const GetTableResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                     const GetTableRequestT& request = {}) const {
    return SubmitAsync(&S3TablesClient::GetTable, request, handler, context);
  }

  /**
   * <p>Gets details on a table bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-buckets-details.html">Viewing
   * details about an Amazon S3 table bucket</a> in the <i>Amazon Simple Storage
   * Service User Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableBucket</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableBucket">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableBucketOutcome GetTableBucket(const Model::GetTableBucketRequest& request) const;

  /**
   * A Callable wrapper for GetTableBucket that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetTableBucketRequestT = Model::GetTableBucketRequest>
  Model::GetTableBucketOutcomeCallable GetTableBucketCallable(const GetTableBucketRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableBucket, request);
  }

  /**
   * An Async wrapper for GetTableBucket that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetTableBucketRequestT = Model::GetTableBucketRequest>
  void GetTableBucketAsync(const GetTableBucketRequestT& request, const GetTableBucketResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableBucket, request, handler, context);
  }

  /**
   * <p>Gets the encryption configuration for a table bucket.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableBucketEncryption</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableBucketEncryption">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableBucketEncryptionOutcome GetTableBucketEncryption(const Model::GetTableBucketEncryptionRequest& request) const;

  /**
   * A Callable wrapper for GetTableBucketEncryption that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTableBucketEncryptionRequestT = Model::GetTableBucketEncryptionRequest>
  Model::GetTableBucketEncryptionOutcomeCallable GetTableBucketEncryptionCallable(const GetTableBucketEncryptionRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableBucketEncryption, request);
  }

  /**
   * An Async wrapper for GetTableBucketEncryption that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTableBucketEncryptionRequestT = Model::GetTableBucketEncryptionRequest>
  void GetTableBucketEncryptionAsync(const GetTableBucketEncryptionRequestT& request,
                                     const GetTableBucketEncryptionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableBucketEncryption, request, handler, context);
  }

  /**
   * <p>Gets details about a maintenance configuration for a given table bucket. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-table-buckets-maintenance.html">Amazon
   * S3 table bucket maintenance</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableBucketMaintenanceConfiguration</code> permission to use
   * this operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableBucketMaintenanceConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableBucketMaintenanceConfigurationOutcome GetTableBucketMaintenanceConfiguration(
      const Model::GetTableBucketMaintenanceConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetTableBucketMaintenanceConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetTableBucketMaintenanceConfigurationRequestT = Model::GetTableBucketMaintenanceConfigurationRequest>
  Model::GetTableBucketMaintenanceConfigurationOutcomeCallable GetTableBucketMaintenanceConfigurationCallable(
      const GetTableBucketMaintenanceConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableBucketMaintenanceConfiguration, request);
  }

  /**
   * An Async wrapper for GetTableBucketMaintenanceConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetTableBucketMaintenanceConfigurationRequestT = Model::GetTableBucketMaintenanceConfigurationRequest>
  void GetTableBucketMaintenanceConfigurationAsync(const GetTableBucketMaintenanceConfigurationRequestT& request,
                                                   const GetTableBucketMaintenanceConfigurationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableBucketMaintenanceConfiguration, request, handler, context);
  }

  /**
   * <p>Gets the metrics configuration for a table bucket.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableBucketMetricsConfiguration</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableBucketMetricsConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableBucketMetricsConfigurationOutcome GetTableBucketMetricsConfiguration(
      const Model::GetTableBucketMetricsConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetTableBucketMetricsConfiguration that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename GetTableBucketMetricsConfigurationRequestT = Model::GetTableBucketMetricsConfigurationRequest>
  Model::GetTableBucketMetricsConfigurationOutcomeCallable GetTableBucketMetricsConfigurationCallable(
      const GetTableBucketMetricsConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableBucketMetricsConfiguration, request);
  }

  /**
   * An Async wrapper for GetTableBucketMetricsConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetTableBucketMetricsConfigurationRequestT = Model::GetTableBucketMetricsConfigurationRequest>
  void GetTableBucketMetricsConfigurationAsync(const GetTableBucketMetricsConfigurationRequestT& request,
                                               const GetTableBucketMetricsConfigurationResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableBucketMetricsConfiguration, request, handler, context);
  }

  /**
   * <p>Gets details about a table bucket policy. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-bucket-policy.html#table-bucket-policy-get">Viewing
   * a table bucket policy</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableBucketPolicy</code> permission to use this operation.
   * </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableBucketPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableBucketPolicyOutcome GetTableBucketPolicy(const Model::GetTableBucketPolicyRequest& request) const;

  /**
   * A Callable wrapper for GetTableBucketPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTableBucketPolicyRequestT = Model::GetTableBucketPolicyRequest>
  Model::GetTableBucketPolicyOutcomeCallable GetTableBucketPolicyCallable(const GetTableBucketPolicyRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableBucketPolicy, request);
  }

  /**
   * An Async wrapper for GetTableBucketPolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTableBucketPolicyRequestT = Model::GetTableBucketPolicyRequest>
  void GetTableBucketPolicyAsync(const GetTableBucketPolicyRequestT& request, const GetTableBucketPolicyResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableBucketPolicy, request, handler, context);
  }

  /**
   * <p>Retrieves the replication configuration for a table bucket.This operation
   * returns the IAM role, <code>versionToken</code>, and replication rules that
   * define how tables in this bucket are replicated to other buckets.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableBucketReplication</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableBucketReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableBucketReplicationOutcome GetTableBucketReplication(const Model::GetTableBucketReplicationRequest& request) const;

  /**
   * A Callable wrapper for GetTableBucketReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTableBucketReplicationRequestT = Model::GetTableBucketReplicationRequest>
  Model::GetTableBucketReplicationOutcomeCallable GetTableBucketReplicationCallable(
      const GetTableBucketReplicationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableBucketReplication, request);
  }

  /**
   * An Async wrapper for GetTableBucketReplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTableBucketReplicationRequestT = Model::GetTableBucketReplicationRequest>
  void GetTableBucketReplicationAsync(const GetTableBucketReplicationRequestT& request,
                                      const GetTableBucketReplicationResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableBucketReplication, request, handler, context);
  }

  /**
   * <p>Retrieves the storage class configuration for a specific table. This allows
   * you to view the storage class settings that apply to an individual table, which
   * may differ from the table bucket's default configuration.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableBucketStorageClass</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableBucketStorageClass">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableBucketStorageClassOutcome GetTableBucketStorageClass(
      const Model::GetTableBucketStorageClassRequest& request) const;

  /**
   * A Callable wrapper for GetTableBucketStorageClass that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetTableBucketStorageClassRequestT = Model::GetTableBucketStorageClassRequest>
  Model::GetTableBucketStorageClassOutcomeCallable GetTableBucketStorageClassCallable(
      const GetTableBucketStorageClassRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableBucketStorageClass, request);
  }

  /**
   * An Async wrapper for GetTableBucketStorageClass that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTableBucketStorageClassRequestT = Model::GetTableBucketStorageClassRequest>
  void GetTableBucketStorageClassAsync(const GetTableBucketStorageClassRequestT& request,
                                       const GetTableBucketStorageClassResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableBucketStorageClass, request, handler, context);
  }

  /**
   * <p>Gets the encryption configuration for a table.</p> <dl> <dt>Permissions</dt>
   * <dd> <p>You must have the <code>s3tables:GetTableEncryption</code> permission to
   * use this operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableEncryption">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableEncryptionOutcome GetTableEncryption(const Model::GetTableEncryptionRequest& request) const;

  /**
   * A Callable wrapper for GetTableEncryption that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTableEncryptionRequestT = Model::GetTableEncryptionRequest>
  Model::GetTableEncryptionOutcomeCallable GetTableEncryptionCallable(const GetTableEncryptionRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableEncryption, request);
  }

  /**
   * An Async wrapper for GetTableEncryption that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetTableEncryptionRequestT = Model::GetTableEncryptionRequest>
  void GetTableEncryptionAsync(const GetTableEncryptionRequestT& request, const GetTableEncryptionResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableEncryption, request, handler, context);
  }

  /**
   * <p>Gets details about the maintenance configuration of a table. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-maintenance.html">S3
   * Tables maintenance</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <ul> <li> <p>You must have the
   * <code>s3tables:GetTableMaintenanceConfiguration</code> permission to use this
   * operation. </p> </li> <li> <p>You must have the
   * <code>s3tables:GetTableData</code> permission to use set the compaction strategy
   * to <code>sort</code> or <code>zorder</code>.</p> </li> </ul> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableMaintenanceConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableMaintenanceConfigurationOutcome GetTableMaintenanceConfiguration(
      const Model::GetTableMaintenanceConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetTableMaintenanceConfiguration that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename GetTableMaintenanceConfigurationRequestT = Model::GetTableMaintenanceConfigurationRequest>
  Model::GetTableMaintenanceConfigurationOutcomeCallable GetTableMaintenanceConfigurationCallable(
      const GetTableMaintenanceConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableMaintenanceConfiguration, request);
  }

  /**
   * An Async wrapper for GetTableMaintenanceConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetTableMaintenanceConfigurationRequestT = Model::GetTableMaintenanceConfigurationRequest>
  void GetTableMaintenanceConfigurationAsync(const GetTableMaintenanceConfigurationRequestT& request,
                                             const GetTableMaintenanceConfigurationResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableMaintenanceConfiguration, request, handler, context);
  }

  /**
   * <p>Gets the status of a maintenance job for a table. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-maintenance.html">S3
   * Tables maintenance</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableMaintenanceJobStatus</code> permission to use this
   * operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableMaintenanceJobStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableMaintenanceJobStatusOutcome GetTableMaintenanceJobStatus(
      const Model::GetTableMaintenanceJobStatusRequest& request) const;

  /**
   * A Callable wrapper for GetTableMaintenanceJobStatus that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetTableMaintenanceJobStatusRequestT = Model::GetTableMaintenanceJobStatusRequest>
  Model::GetTableMaintenanceJobStatusOutcomeCallable GetTableMaintenanceJobStatusCallable(
      const GetTableMaintenanceJobStatusRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableMaintenanceJobStatus, request);
  }

  /**
   * An Async wrapper for GetTableMaintenanceJobStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTableMaintenanceJobStatusRequestT = Model::GetTableMaintenanceJobStatusRequest>
  void GetTableMaintenanceJobStatusAsync(const GetTableMaintenanceJobStatusRequestT& request,
                                         const GetTableMaintenanceJobStatusResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableMaintenanceJobStatus, request, handler, context);
  }

  /**
   * <p>Gets the location of the table metadata.</p> <dl> <dt>Permissions</dt> <dd>
   * <p>You must have the <code>s3tables:GetTableMetadataLocation</code> permission
   * to use this operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableMetadataLocation">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableMetadataLocationOutcome GetTableMetadataLocation(const Model::GetTableMetadataLocationRequest& request) const;

  /**
   * A Callable wrapper for GetTableMetadataLocation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTableMetadataLocationRequestT = Model::GetTableMetadataLocationRequest>
  Model::GetTableMetadataLocationOutcomeCallable GetTableMetadataLocationCallable(const GetTableMetadataLocationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableMetadataLocation, request);
  }

  /**
   * An Async wrapper for GetTableMetadataLocation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTableMetadataLocationRequestT = Model::GetTableMetadataLocationRequest>
  void GetTableMetadataLocationAsync(const GetTableMetadataLocationRequestT& request,
                                     const GetTableMetadataLocationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableMetadataLocation, request, handler, context);
  }

  /**
   * <p>Gets details about a table policy. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-table-policy.html#table-policy-get">Viewing
   * a table policy</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
   * <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTablePolicy</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTablePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTablePolicyOutcome GetTablePolicy(const Model::GetTablePolicyRequest& request) const;

  /**
   * A Callable wrapper for GetTablePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetTablePolicyRequestT = Model::GetTablePolicyRequest>
  Model::GetTablePolicyOutcomeCallable GetTablePolicyCallable(const GetTablePolicyRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTablePolicy, request);
  }

  /**
   * An Async wrapper for GetTablePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetTablePolicyRequestT = Model::GetTablePolicyRequest>
  void GetTablePolicyAsync(const GetTablePolicyRequestT& request, const GetTablePolicyResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTablePolicy, request, handler, context);
  }

  /**
   * <p>Retrieves the expiration configuration settings for records in a table, and
   * the status of the configuration. If the status of the configuration is
   * <code>enabled</code>, records expire and are automatically removed from the
   * table after the specified number of days.</p> <dl> <dt>Permissions</dt> <dd>
   * <p>You must have the <code>s3tables:GetTableRecordExpirationConfiguration</code>
   * permission to use this operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableRecordExpirationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableRecordExpirationConfigurationOutcome GetTableRecordExpirationConfiguration(
      const Model::GetTableRecordExpirationConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetTableRecordExpirationConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetTableRecordExpirationConfigurationRequestT = Model::GetTableRecordExpirationConfigurationRequest>
  Model::GetTableRecordExpirationConfigurationOutcomeCallable GetTableRecordExpirationConfigurationCallable(
      const GetTableRecordExpirationConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableRecordExpirationConfiguration, request);
  }

  /**
   * An Async wrapper for GetTableRecordExpirationConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetTableRecordExpirationConfigurationRequestT = Model::GetTableRecordExpirationConfigurationRequest>
  void GetTableRecordExpirationConfigurationAsync(const GetTableRecordExpirationConfigurationRequestT& request,
                                                  const GetTableRecordExpirationConfigurationResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableRecordExpirationConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves the status, metrics, and details of the latest record expiration
   * job for a table. This includes when the job ran, and whether it succeeded or
   * failed. If the job ran successfully, this also includes statistics about the
   * records that were removed.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have
   * the <code>s3tables:GetTableRecordExpirationJobStatus</code> permission to use
   * this operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableRecordExpirationJobStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableRecordExpirationJobStatusOutcome GetTableRecordExpirationJobStatus(
      const Model::GetTableRecordExpirationJobStatusRequest& request) const;

  /**
   * A Callable wrapper for GetTableRecordExpirationJobStatus that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename GetTableRecordExpirationJobStatusRequestT = Model::GetTableRecordExpirationJobStatusRequest>
  Model::GetTableRecordExpirationJobStatusOutcomeCallable GetTableRecordExpirationJobStatusCallable(
      const GetTableRecordExpirationJobStatusRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableRecordExpirationJobStatus, request);
  }

  /**
   * An Async wrapper for GetTableRecordExpirationJobStatus that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetTableRecordExpirationJobStatusRequestT = Model::GetTableRecordExpirationJobStatusRequest>
  void GetTableRecordExpirationJobStatusAsync(const GetTableRecordExpirationJobStatusRequestT& request,
                                              const GetTableRecordExpirationJobStatusResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableRecordExpirationJobStatus, request, handler, context);
  }

  /**
   * <p>Retrieves the replication configuration for a specific table.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableReplication</code> permission to use this operation.</p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableReplicationOutcome GetTableReplication(const Model::GetTableReplicationRequest& request) const;

  /**
   * A Callable wrapper for GetTableReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTableReplicationRequestT = Model::GetTableReplicationRequest>
  Model::GetTableReplicationOutcomeCallable GetTableReplicationCallable(const GetTableReplicationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableReplication, request);
  }

  /**
   * An Async wrapper for GetTableReplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetTableReplicationRequestT = Model::GetTableReplicationRequest>
  void GetTableReplicationAsync(const GetTableReplicationRequestT& request, const GetTableReplicationResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableReplication, request, handler, context);
  }

  /**
   * <p>Retrieves the replication status for a table, including the status of
   * replication to each destination. This operation provides visibility into
   * replication health and progress.</p> <dl> <dt>Permissions</dt> <dd> <p>You must
   * have the <code>s3tables:GetTableReplicationStatus</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableReplicationStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableReplicationStatusOutcome GetTableReplicationStatus(const Model::GetTableReplicationStatusRequest& request) const;

  /**
   * A Callable wrapper for GetTableReplicationStatus that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTableReplicationStatusRequestT = Model::GetTableReplicationStatusRequest>
  Model::GetTableReplicationStatusOutcomeCallable GetTableReplicationStatusCallable(
      const GetTableReplicationStatusRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableReplicationStatus, request);
  }

  /**
   * An Async wrapper for GetTableReplicationStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTableReplicationStatusRequestT = Model::GetTableReplicationStatusRequest>
  void GetTableReplicationStatusAsync(const GetTableReplicationStatusRequestT& request,
                                      const GetTableReplicationStatusResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableReplicationStatus, request, handler, context);
  }

  /**
   * <p>Retrieves the storage class configuration for a specific table. This allows
   * you to view the storage class settings that apply to an individual table, which
   * may differ from the table bucket's default configuration.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:GetTableStorageClass</code> permission to use this operation.</p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/GetTableStorageClass">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTableStorageClassOutcome GetTableStorageClass(const Model::GetTableStorageClassRequest& request) const;

  /**
   * A Callable wrapper for GetTableStorageClass that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTableStorageClassRequestT = Model::GetTableStorageClassRequest>
  Model::GetTableStorageClassOutcomeCallable GetTableStorageClassCallable(const GetTableStorageClassRequestT& request) const {
    return SubmitCallable(&S3TablesClient::GetTableStorageClass, request);
  }

  /**
   * An Async wrapper for GetTableStorageClass that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTableStorageClassRequestT = Model::GetTableStorageClassRequest>
  void GetTableStorageClassAsync(const GetTableStorageClassRequestT& request, const GetTableStorageClassResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::GetTableStorageClass, request, handler, context);
  }

  /**
   * <p>Lists the namespaces within a table bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-namespace.html">Table
   * namespaces</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:ListNamespaces</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ListNamespaces">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;

  /**
   * A Callable wrapper for ListNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListNamespacesRequestT = Model::ListNamespacesRequest>
  Model::ListNamespacesOutcomeCallable ListNamespacesCallable(const ListNamespacesRequestT& request) const {
    return SubmitCallable(&S3TablesClient::ListNamespaces, request);
  }

  /**
   * An Async wrapper for ListNamespaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListNamespacesRequestT = Model::ListNamespacesRequest>
  void ListNamespacesAsync(const ListNamespacesRequestT& request, const ListNamespacesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::ListNamespaces, request, handler, context);
  }

  /**
   * <p>Lists table buckets for your account. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-buckets.html">S3
   * Table buckets</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
   * <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:ListTableBuckets</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ListTableBuckets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTableBucketsOutcome ListTableBuckets(const Model::ListTableBucketsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListTableBuckets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTableBucketsRequestT = Model::ListTableBucketsRequest>
  Model::ListTableBucketsOutcomeCallable ListTableBucketsCallable(const ListTableBucketsRequestT& request = {}) const {
    return SubmitCallable(&S3TablesClient::ListTableBuckets, request);
  }

  /**
   * An Async wrapper for ListTableBuckets that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTableBucketsRequestT = Model::ListTableBucketsRequest>
  void ListTableBucketsAsync(const ListTableBucketsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListTableBucketsRequestT& request = {}) const {
    return SubmitAsync(&S3TablesClient::ListTableBuckets, request, handler, context);
  }

  /**
   * <p>List tables in the given table bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-tables.html">S3
   * Tables</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the <code>s3tables:ListTables</code>
   * permission to use this operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ListTables">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

  /**
   * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListTablesRequestT = Model::ListTablesRequest>
  Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request) const {
    return SubmitCallable(&S3TablesClient::ListTables, request);
  }

  /**
   * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListTablesRequestT = Model::ListTablesRequest>
  void ListTablesAsync(const ListTablesRequestT& request, const ListTablesResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::ListTables, request, handler, context);
  }

  /**
   * <p>Lists all of the tags applied to a specified Amazon S3 Tables resource. Each
   * tag is a label consisting of a key and value pair. Tags can help you organize,
   * track costs for, and control access to resources. </p>  <p>For a list of
   * S3 resources that support tagging, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging.html#manage-tags">Managing
   * tags for Amazon S3 resources</a>.</p>  <dl> <dt>Permissions</dt> <dd>
   * <p>For tables and table buckets, you must have the
   * <code>s3tables:ListTagsForResource</code> permission to use this operation.</p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&S3TablesClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Sets the encryption configuration for a table bucket.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:PutTableBucketEncryption</code> permission to use this
   * operation.</p>  <p>If you choose SSE-KMS encryption you must grant the S3
   * Tables maintenance principal access to your KMS key. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-kms-permissions.html">Permissions
   * requirements for S3 Tables SSE-KMS encryption</a> in the <i>Amazon Simple
   * Storage Service User Guide</i>.</p>  </dd> </dl><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableBucketEncryption">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableBucketEncryptionOutcome PutTableBucketEncryption(const Model::PutTableBucketEncryptionRequest& request) const;

  /**
   * A Callable wrapper for PutTableBucketEncryption that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutTableBucketEncryptionRequestT = Model::PutTableBucketEncryptionRequest>
  Model::PutTableBucketEncryptionOutcomeCallable PutTableBucketEncryptionCallable(const PutTableBucketEncryptionRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableBucketEncryption, request);
  }

  /**
   * An Async wrapper for PutTableBucketEncryption that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutTableBucketEncryptionRequestT = Model::PutTableBucketEncryptionRequest>
  void PutTableBucketEncryptionAsync(const PutTableBucketEncryptionRequestT& request,
                                     const PutTableBucketEncryptionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableBucketEncryption, request, handler, context);
  }

  /**
   * <p>Creates a new maintenance configuration or replaces an existing maintenance
   * configuration for a table bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-table-buckets-maintenance.html">Amazon
   * S3 table bucket maintenance</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:PutTableBucketMaintenanceConfiguration</code> permission to use
   * this operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableBucketMaintenanceConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableBucketMaintenanceConfigurationOutcome PutTableBucketMaintenanceConfiguration(
      const Model::PutTableBucketMaintenanceConfigurationRequest& request) const;

  /**
   * A Callable wrapper for PutTableBucketMaintenanceConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename PutTableBucketMaintenanceConfigurationRequestT = Model::PutTableBucketMaintenanceConfigurationRequest>
  Model::PutTableBucketMaintenanceConfigurationOutcomeCallable PutTableBucketMaintenanceConfigurationCallable(
      const PutTableBucketMaintenanceConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableBucketMaintenanceConfiguration, request);
  }

  /**
   * An Async wrapper for PutTableBucketMaintenanceConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename PutTableBucketMaintenanceConfigurationRequestT = Model::PutTableBucketMaintenanceConfigurationRequest>
  void PutTableBucketMaintenanceConfigurationAsync(const PutTableBucketMaintenanceConfigurationRequestT& request,
                                                   const PutTableBucketMaintenanceConfigurationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableBucketMaintenanceConfiguration, request, handler, context);
  }

  /**
   * <p>Sets the metrics configuration for a table bucket.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:PutTableBucketMetricsConfiguration</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableBucketMetricsConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableBucketMetricsConfigurationOutcome PutTableBucketMetricsConfiguration(
      const Model::PutTableBucketMetricsConfigurationRequest& request) const;

  /**
   * A Callable wrapper for PutTableBucketMetricsConfiguration that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename PutTableBucketMetricsConfigurationRequestT = Model::PutTableBucketMetricsConfigurationRequest>
  Model::PutTableBucketMetricsConfigurationOutcomeCallable PutTableBucketMetricsConfigurationCallable(
      const PutTableBucketMetricsConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableBucketMetricsConfiguration, request);
  }

  /**
   * An Async wrapper for PutTableBucketMetricsConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename PutTableBucketMetricsConfigurationRequestT = Model::PutTableBucketMetricsConfigurationRequest>
  void PutTableBucketMetricsConfigurationAsync(const PutTableBucketMetricsConfigurationRequestT& request,
                                               const PutTableBucketMetricsConfigurationResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableBucketMetricsConfiguration, request, handler, context);
  }

  /**
   * <p>Creates a new table bucket policy or replaces an existing table bucket policy
   * for a table bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-bucket-policy.html#table-bucket-policy-add">Adding
   * a table bucket policy</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:PutTableBucketPolicy</code> permission to use this operation.
   * </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableBucketPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableBucketPolicyOutcome PutTableBucketPolicy(const Model::PutTableBucketPolicyRequest& request) const;

  /**
   * A Callable wrapper for PutTableBucketPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutTableBucketPolicyRequestT = Model::PutTableBucketPolicyRequest>
  Model::PutTableBucketPolicyOutcomeCallable PutTableBucketPolicyCallable(const PutTableBucketPolicyRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableBucketPolicy, request);
  }

  /**
   * An Async wrapper for PutTableBucketPolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutTableBucketPolicyRequestT = Model::PutTableBucketPolicyRequest>
  void PutTableBucketPolicyAsync(const PutTableBucketPolicyRequestT& request, const PutTableBucketPolicyResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableBucketPolicy, request, handler, context);
  }

  /**
   * <p>Creates or updates the replication configuration for a table bucket. This
   * operation defines how tables in the source bucket are replicated to destination
   * buckets. Replication helps ensure data availability and disaster recovery across
   * regions or accounts.</p> <dl> <dt>Permissions</dt> <dd> <ul> <li> <p>You must
   * have the <code>s3tables:PutTableBucketReplication</code> permission to use this
   * operation. The IAM role specified in the configuration must have permissions to
   * read from the source bucket and write permissions to all destination
   * buckets.</p> </li> <li> <p>You must also have the following permissions:</p>
   * <ul> <li> <p> <code>s3tables:GetTable</code> permission on the source table.</p>
   * </li> <li> <p> <code>s3tables:ListTables</code> permission on the bucket
   * containing the table.</p> </li> <li> <p> <code>s3tables:CreateTable</code>
   * permission for the destination.</p> </li> <li> <p>
   * <code>s3tables:CreateNamespace</code> permission for the destination.</p> </li>
   * <li> <p> <code>s3tables:GetTableMaintenanceConfig</code> permission for the
   * source bucket.</p> </li> <li> <p>
   * <code>s3tables:PutTableMaintenanceConfig</code> permission for the destination
   * bucket.</p> </li> </ul> </li> <li> <p>You must have <code>iam:PassRole</code>
   * permission with condition allowing roles to be passed to
   * <code>replication.s3tables.amazonaws.com</code>.</p> </li> </ul> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableBucketReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableBucketReplicationOutcome PutTableBucketReplication(const Model::PutTableBucketReplicationRequest& request) const;

  /**
   * A Callable wrapper for PutTableBucketReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutTableBucketReplicationRequestT = Model::PutTableBucketReplicationRequest>
  Model::PutTableBucketReplicationOutcomeCallable PutTableBucketReplicationCallable(
      const PutTableBucketReplicationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableBucketReplication, request);
  }

  /**
   * An Async wrapper for PutTableBucketReplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutTableBucketReplicationRequestT = Model::PutTableBucketReplicationRequest>
  void PutTableBucketReplicationAsync(const PutTableBucketReplicationRequestT& request,
                                      const PutTableBucketReplicationResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableBucketReplication, request, handler, context);
  }

  /**
   * <p>Sets or updates the storage class configuration for a table bucket. This
   * configuration serves as the default storage class for all new tables created in
   * the bucket, allowing you to optimize storage costs at the bucket level.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:PutTableBucketStorageClass</code> permission to use this
   * operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableBucketStorageClass">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableBucketStorageClassOutcome PutTableBucketStorageClass(
      const Model::PutTableBucketStorageClassRequest& request) const;

  /**
   * A Callable wrapper for PutTableBucketStorageClass that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename PutTableBucketStorageClassRequestT = Model::PutTableBucketStorageClassRequest>
  Model::PutTableBucketStorageClassOutcomeCallable PutTableBucketStorageClassCallable(
      const PutTableBucketStorageClassRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableBucketStorageClass, request);
  }

  /**
   * An Async wrapper for PutTableBucketStorageClass that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutTableBucketStorageClassRequestT = Model::PutTableBucketStorageClassRequest>
  void PutTableBucketStorageClassAsync(const PutTableBucketStorageClassRequestT& request,
                                       const PutTableBucketStorageClassResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableBucketStorageClass, request, handler, context);
  }

  /**
   * <p>Creates a new maintenance configuration or replaces an existing maintenance
   * configuration for a table. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-maintenance.html">S3
   * Tables maintenance</a> in the <i>Amazon Simple Storage Service User
   * Guide</i>.</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:PutTableMaintenanceConfiguration</code> permission to use this
   * operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableMaintenanceConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableMaintenanceConfigurationOutcome PutTableMaintenanceConfiguration(
      const Model::PutTableMaintenanceConfigurationRequest& request) const;

  /**
   * A Callable wrapper for PutTableMaintenanceConfiguration that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename PutTableMaintenanceConfigurationRequestT = Model::PutTableMaintenanceConfigurationRequest>
  Model::PutTableMaintenanceConfigurationOutcomeCallable PutTableMaintenanceConfigurationCallable(
      const PutTableMaintenanceConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableMaintenanceConfiguration, request);
  }

  /**
   * An Async wrapper for PutTableMaintenanceConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename PutTableMaintenanceConfigurationRequestT = Model::PutTableMaintenanceConfigurationRequest>
  void PutTableMaintenanceConfigurationAsync(const PutTableMaintenanceConfigurationRequestT& request,
                                             const PutTableMaintenanceConfigurationResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableMaintenanceConfiguration, request, handler, context);
  }

  /**
   * <p>Creates a new table policy or replaces an existing table policy for a table.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-table-policy.html#table-policy-add">Adding
   * a table policy</a> in the <i>Amazon Simple Storage Service User Guide</i>. </p>
   * <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:PutTablePolicy</code> permission to use this operation. </p>
   * </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTablePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTablePolicyOutcome PutTablePolicy(const Model::PutTablePolicyRequest& request) const;

  /**
   * A Callable wrapper for PutTablePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename PutTablePolicyRequestT = Model::PutTablePolicyRequest>
  Model::PutTablePolicyOutcomeCallable PutTablePolicyCallable(const PutTablePolicyRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTablePolicy, request);
  }

  /**
   * An Async wrapper for PutTablePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename PutTablePolicyRequestT = Model::PutTablePolicyRequest>
  void PutTablePolicyAsync(const PutTablePolicyRequestT& request, const PutTablePolicyResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTablePolicy, request, handler, context);
  }

  /**
   * <p>Creates or updates the expiration configuration settings for records in a
   * table, including the status of the configuration. If you enable record
   * expiration for a table, records expire and are automatically removed from the
   * table after the number of days that you specify.</p> <dl> <dt>Permissions</dt>
   * <dd> <p>You must have the
   * <code>s3tables:PutTableRecordExpirationConfiguration</code> permission to use
   * this operation.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableRecordExpirationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableRecordExpirationConfigurationOutcome PutTableRecordExpirationConfiguration(
      const Model::PutTableRecordExpirationConfigurationRequest& request) const;

  /**
   * A Callable wrapper for PutTableRecordExpirationConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename PutTableRecordExpirationConfigurationRequestT = Model::PutTableRecordExpirationConfigurationRequest>
  Model::PutTableRecordExpirationConfigurationOutcomeCallable PutTableRecordExpirationConfigurationCallable(
      const PutTableRecordExpirationConfigurationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableRecordExpirationConfiguration, request);
  }

  /**
   * An Async wrapper for PutTableRecordExpirationConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename PutTableRecordExpirationConfigurationRequestT = Model::PutTableRecordExpirationConfigurationRequest>
  void PutTableRecordExpirationConfigurationAsync(const PutTableRecordExpirationConfigurationRequestT& request,
                                                  const PutTableRecordExpirationConfigurationResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableRecordExpirationConfiguration, request, handler, context);
  }

  /**
   * <p>Creates or updates the replication configuration for a specific table. This
   * operation allows you to define table-level replication independently of
   * bucket-level replication, providing granular control over which tables are
   * replicated and where.</p> <dl> <dt>Permissions</dt> <dd> <ul> <li> <p>You must
   * have the <code>s3tables:PutTableReplication</code> permission to use this
   * operation. The IAM role specified in the configuration must have permissions to
   * read from the source table and write to all destination tables.</p> </li> <li>
   * <p>You must also have the following permissions:</p> <ul> <li> <p>
   * <code>s3tables:GetTable</code> permission on the source table being
   * replicated.</p> </li> <li> <p> <code>s3tables:CreateTable</code> permission for
   * the destination.</p> </li> <li> <p> <code>s3tables:CreateNamespace</code>
   * permission for the destination.</p> </li> <li> <p>
   * <code>s3tables:GetTableMaintenanceConfig</code> permission for the source
   * table.</p> </li> <li> <p> <code>s3tables:PutTableMaintenanceConfig</code>
   * permission for the destination table.</p> </li> </ul> </li> <li> <p>You must
   * have <code>iam:PassRole</code> permission with condition allowing roles to be
   * passed to <code>replication.s3tables.amazonaws.com</code>.</p> </li> </ul> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PutTableReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTableReplicationOutcome PutTableReplication(const Model::PutTableReplicationRequest& request) const;

  /**
   * A Callable wrapper for PutTableReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutTableReplicationRequestT = Model::PutTableReplicationRequest>
  Model::PutTableReplicationOutcomeCallable PutTableReplicationCallable(const PutTableReplicationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::PutTableReplication, request);
  }

  /**
   * An Async wrapper for PutTableReplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutTableReplicationRequestT = Model::PutTableReplicationRequest>
  void PutTableReplicationAsync(const PutTableReplicationRequestT& request, const PutTableReplicationResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::PutTableReplication, request, handler, context);
  }

  /**
   * <p>Renames a table or a namespace. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-tables.html">S3
   * Tables</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p> <dl>
   * <dt>Permissions</dt> <dd> <p>You must have the <code>s3tables:RenameTable</code>
   * permission to use this operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/RenameTable">AWS
   * API Reference</a></p>
   */
  virtual Model::RenameTableOutcome RenameTable(const Model::RenameTableRequest& request) const;

  /**
   * A Callable wrapper for RenameTable that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RenameTableRequestT = Model::RenameTableRequest>
  Model::RenameTableOutcomeCallable RenameTableCallable(const RenameTableRequestT& request) const {
    return SubmitCallable(&S3TablesClient::RenameTable, request);
  }

  /**
   * An Async wrapper for RenameTable that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RenameTableRequestT = Model::RenameTableRequest>
  void RenameTableAsync(const RenameTableRequestT& request, const RenameTableResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::RenameTable, request, handler, context);
  }

  /**
   * <p>Applies one or more user-defined tags to an Amazon S3 Tables resource or
   * updates existing tags. Each tag is a label consisting of a key and value pair.
   * Tags can help you organize, track costs for, and control access to your
   * resources. You can add up to 50 tags for each S3 resource. </p>  <p>For a
   * list of S3 resources that support tagging, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging.html#manage-tags">Managing
   * tags for Amazon S3 resources</a>.</p>  <dl> <dt>Permissions</dt> <dd>
   * <p>For tables and table buckets, you must have the
   * <code>s3tables:TagResource</code> permission to use this operation.</p> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&S3TablesClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes the specified user-defined tags from an Amazon S3 Tables resource.
   * You can pass one or more tag keys. </p>  <p>For a list of S3 resources
   * that support tagging, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging.html#manage-tags">Managing
   * tags for Amazon S3 resources</a>.</p>  <dl> <dt>Permissions</dt> <dd>
   * <p>For tables and table buckets, you must have the
   * <code>s3tables:UntagResource</code> permission to use this operation.</p> </dd>
   * </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&S3TablesClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the metadata location for a table. The metadata location of a table
   * must be an S3 URI that begins with the table's warehouse location. The metadata
   * location for an Apache Iceberg table must end with <code>.metadata.json</code>,
   * or if the metadata file is Gzip-compressed, <code>.metadata.json.gz</code>.</p>
   * <dl> <dt>Permissions</dt> <dd> <p>You must have the
   * <code>s3tables:UpdateTableMetadataLocation</code> permission to use this
   * operation. </p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/UpdateTableMetadataLocation">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateTableMetadataLocationOutcome UpdateTableMetadataLocation(
      const Model::UpdateTableMetadataLocationRequest& request) const;

  /**
   * A Callable wrapper for UpdateTableMetadataLocation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateTableMetadataLocationRequestT = Model::UpdateTableMetadataLocationRequest>
  Model::UpdateTableMetadataLocationOutcomeCallable UpdateTableMetadataLocationCallable(
      const UpdateTableMetadataLocationRequestT& request) const {
    return SubmitCallable(&S3TablesClient::UpdateTableMetadataLocation, request);
  }

  /**
   * An Async wrapper for UpdateTableMetadataLocation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateTableMetadataLocationRequestT = Model::UpdateTableMetadataLocationRequest>
  void UpdateTableMetadataLocationAsync(const UpdateTableMetadataLocationRequestT& request,
                                        const UpdateTableMetadataLocationResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3TablesClient::UpdateTableMetadataLocation, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<S3TablesEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<S3TablesClient>;
  void init(const S3TablesClientConfiguration& clientConfiguration);

  S3TablesClientConfiguration m_clientConfiguration;
  std::shared_ptr<S3TablesEndpointProviderBase> m_endpointProvider;
};

}  // namespace S3Tables
}  // namespace Aws
