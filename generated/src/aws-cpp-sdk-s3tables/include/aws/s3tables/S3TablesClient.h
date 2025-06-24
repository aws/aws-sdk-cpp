/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/S3TablesServiceClientModel.h>

namespace Aws
{
namespace S3Tables
{
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
  class AWS_S3TABLES_API S3TablesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<S3TablesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef S3TablesClientConfiguration ClientConfigurationType;
      typedef S3TablesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3TablesClient(const Aws::S3Tables::S3TablesClientConfiguration& clientConfiguration = Aws::S3Tables::S3TablesClientConfiguration(),
                       std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3TablesClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider = nullptr,
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
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3TablesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3TablesClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

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
        template<typename CreateNamespaceRequestT = Model::CreateNamespaceRequest>
        Model::CreateNamespaceOutcomeCallable CreateNamespaceCallable(const CreateNamespaceRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::CreateNamespace, request);
        }

        /**
         * An Async wrapper for CreateNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNamespaceRequestT = Model::CreateNamespaceRequest>
        void CreateNamespaceAsync(const CreateNamespaceRequestT& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
         * <code>s3tables:PutTableEncryption</code> permission. </p> </li> </ul> 
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
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        Model::CreateTableOutcomeCallable CreateTableCallable(const CreateTableRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::CreateTable, request);
        }

        /**
         * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        void CreateTableAsync(const CreateTableRequestT& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
         * <code>s3tables:PutTableBucketEncryption</code> permission.</p> </li> </ul> </dd>
         * </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/CreateTableBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableBucketOutcome CreateTableBucket(const Model::CreateTableBucketRequest& request) const;

        /**
         * A Callable wrapper for CreateTableBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTableBucketRequestT = Model::CreateTableBucketRequest>
        Model::CreateTableBucketOutcomeCallable CreateTableBucketCallable(const CreateTableBucketRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::CreateTableBucket, request);
        }

        /**
         * An Async wrapper for CreateTableBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTableBucketRequestT = Model::CreateTableBucketRequest>
        void CreateTableBucketAsync(const CreateTableBucketRequestT& request, const CreateTableBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        template<typename DeleteNamespaceRequestT = Model::DeleteNamespaceRequest>
        Model::DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const DeleteNamespaceRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::DeleteNamespace, request);
        }

        /**
         * An Async wrapper for DeleteNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNamespaceRequestT = Model::DeleteNamespaceRequest>
        void DeleteNamespaceAsync(const DeleteNamespaceRequestT& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        Model::DeleteTableOutcomeCallable DeleteTableCallable(const DeleteTableRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::DeleteTable, request);
        }

        /**
         * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        void DeleteTableAsync(const DeleteTableRequestT& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
         * A Callable wrapper for DeleteTableBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableBucketRequestT = Model::DeleteTableBucketRequest>
        Model::DeleteTableBucketOutcomeCallable DeleteTableBucketCallable(const DeleteTableBucketRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::DeleteTableBucket, request);
        }

        /**
         * An Async wrapper for DeleteTableBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableBucketRequestT = Model::DeleteTableBucketRequest>
        void DeleteTableBucketAsync(const DeleteTableBucketRequestT& request, const DeleteTableBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        virtual Model::DeleteTableBucketEncryptionOutcome DeleteTableBucketEncryption(const Model::DeleteTableBucketEncryptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteTableBucketEncryption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableBucketEncryptionRequestT = Model::DeleteTableBucketEncryptionRequest>
        Model::DeleteTableBucketEncryptionOutcomeCallable DeleteTableBucketEncryptionCallable(const DeleteTableBucketEncryptionRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::DeleteTableBucketEncryption, request);
        }

        /**
         * An Async wrapper for DeleteTableBucketEncryption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableBucketEncryptionRequestT = Model::DeleteTableBucketEncryptionRequest>
        void DeleteTableBucketEncryptionAsync(const DeleteTableBucketEncryptionRequestT& request, const DeleteTableBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::DeleteTableBucketEncryption, request, handler, context);
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
         * A Callable wrapper for DeleteTableBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableBucketPolicyRequestT = Model::DeleteTableBucketPolicyRequest>
        Model::DeleteTableBucketPolicyOutcomeCallable DeleteTableBucketPolicyCallable(const DeleteTableBucketPolicyRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::DeleteTableBucketPolicy, request);
        }

        /**
         * An Async wrapper for DeleteTableBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableBucketPolicyRequestT = Model::DeleteTableBucketPolicyRequest>
        void DeleteTableBucketPolicyAsync(const DeleteTableBucketPolicyRequestT& request, const DeleteTableBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::DeleteTableBucketPolicy, request, handler, context);
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
         * A Callable wrapper for DeleteTablePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTablePolicyRequestT = Model::DeleteTablePolicyRequest>
        Model::DeleteTablePolicyOutcomeCallable DeleteTablePolicyCallable(const DeleteTablePolicyRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::DeleteTablePolicy, request);
        }

        /**
         * An Async wrapper for DeleteTablePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTablePolicyRequestT = Model::DeleteTablePolicyRequest>
        void DeleteTablePolicyAsync(const DeleteTablePolicyRequestT& request, const DeleteTablePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::DeleteTablePolicy, request, handler, context);
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
        template<typename GetNamespaceRequestT = Model::GetNamespaceRequest>
        Model::GetNamespaceOutcomeCallable GetNamespaceCallable(const GetNamespaceRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetNamespace, request);
        }

        /**
         * An Async wrapper for GetNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNamespaceRequestT = Model::GetNamespaceRequest>
        void GetNamespaceAsync(const GetNamespaceRequestT& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        template<typename GetTableRequestT = Model::GetTableRequest>
        Model::GetTableOutcomeCallable GetTableCallable(const GetTableRequestT& request = {}) const
        {
            return SubmitCallable(&S3TablesClient::GetTable, request);
        }

        /**
         * An Async wrapper for GetTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableRequestT = Model::GetTableRequest>
        void GetTableAsync(const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetTableRequestT& request = {}) const
        {
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
        template<typename GetTableBucketRequestT = Model::GetTableBucketRequest>
        Model::GetTableBucketOutcomeCallable GetTableBucketCallable(const GetTableBucketRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTableBucket, request);
        }

        /**
         * An Async wrapper for GetTableBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableBucketRequestT = Model::GetTableBucketRequest>
        void GetTableBucketAsync(const GetTableBucketRequestT& request, const GetTableBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
         * A Callable wrapper for GetTableBucketEncryption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableBucketEncryptionRequestT = Model::GetTableBucketEncryptionRequest>
        Model::GetTableBucketEncryptionOutcomeCallable GetTableBucketEncryptionCallable(const GetTableBucketEncryptionRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTableBucketEncryption, request);
        }

        /**
         * An Async wrapper for GetTableBucketEncryption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableBucketEncryptionRequestT = Model::GetTableBucketEncryptionRequest>
        void GetTableBucketEncryptionAsync(const GetTableBucketEncryptionRequestT& request, const GetTableBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        virtual Model::GetTableBucketMaintenanceConfigurationOutcome GetTableBucketMaintenanceConfiguration(const Model::GetTableBucketMaintenanceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetTableBucketMaintenanceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableBucketMaintenanceConfigurationRequestT = Model::GetTableBucketMaintenanceConfigurationRequest>
        Model::GetTableBucketMaintenanceConfigurationOutcomeCallable GetTableBucketMaintenanceConfigurationCallable(const GetTableBucketMaintenanceConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTableBucketMaintenanceConfiguration, request);
        }

        /**
         * An Async wrapper for GetTableBucketMaintenanceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableBucketMaintenanceConfigurationRequestT = Model::GetTableBucketMaintenanceConfigurationRequest>
        void GetTableBucketMaintenanceConfigurationAsync(const GetTableBucketMaintenanceConfigurationRequestT& request, const GetTableBucketMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::GetTableBucketMaintenanceConfiguration, request, handler, context);
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
         * A Callable wrapper for GetTableBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableBucketPolicyRequestT = Model::GetTableBucketPolicyRequest>
        Model::GetTableBucketPolicyOutcomeCallable GetTableBucketPolicyCallable(const GetTableBucketPolicyRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTableBucketPolicy, request);
        }

        /**
         * An Async wrapper for GetTableBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableBucketPolicyRequestT = Model::GetTableBucketPolicyRequest>
        void GetTableBucketPolicyAsync(const GetTableBucketPolicyRequestT& request, const GetTableBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::GetTableBucketPolicy, request, handler, context);
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
         * A Callable wrapper for GetTableEncryption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableEncryptionRequestT = Model::GetTableEncryptionRequest>
        Model::GetTableEncryptionOutcomeCallable GetTableEncryptionCallable(const GetTableEncryptionRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTableEncryption, request);
        }

        /**
         * An Async wrapper for GetTableEncryption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableEncryptionRequestT = Model::GetTableEncryptionRequest>
        void GetTableEncryptionAsync(const GetTableEncryptionRequestT& request, const GetTableEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        virtual Model::GetTableMaintenanceConfigurationOutcome GetTableMaintenanceConfiguration(const Model::GetTableMaintenanceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetTableMaintenanceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableMaintenanceConfigurationRequestT = Model::GetTableMaintenanceConfigurationRequest>
        Model::GetTableMaintenanceConfigurationOutcomeCallable GetTableMaintenanceConfigurationCallable(const GetTableMaintenanceConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTableMaintenanceConfiguration, request);
        }

        /**
         * An Async wrapper for GetTableMaintenanceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableMaintenanceConfigurationRequestT = Model::GetTableMaintenanceConfigurationRequest>
        void GetTableMaintenanceConfigurationAsync(const GetTableMaintenanceConfigurationRequestT& request, const GetTableMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        virtual Model::GetTableMaintenanceJobStatusOutcome GetTableMaintenanceJobStatus(const Model::GetTableMaintenanceJobStatusRequest& request) const;

        /**
         * A Callable wrapper for GetTableMaintenanceJobStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableMaintenanceJobStatusRequestT = Model::GetTableMaintenanceJobStatusRequest>
        Model::GetTableMaintenanceJobStatusOutcomeCallable GetTableMaintenanceJobStatusCallable(const GetTableMaintenanceJobStatusRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTableMaintenanceJobStatus, request);
        }

        /**
         * An Async wrapper for GetTableMaintenanceJobStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableMaintenanceJobStatusRequestT = Model::GetTableMaintenanceJobStatusRequest>
        void GetTableMaintenanceJobStatusAsync(const GetTableMaintenanceJobStatusRequestT& request, const GetTableMaintenanceJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
         * A Callable wrapper for GetTableMetadataLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableMetadataLocationRequestT = Model::GetTableMetadataLocationRequest>
        Model::GetTableMetadataLocationOutcomeCallable GetTableMetadataLocationCallable(const GetTableMetadataLocationRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTableMetadataLocation, request);
        }

        /**
         * An Async wrapper for GetTableMetadataLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableMetadataLocationRequestT = Model::GetTableMetadataLocationRequest>
        void GetTableMetadataLocationAsync(const GetTableMetadataLocationRequestT& request, const GetTableMetadataLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        template<typename GetTablePolicyRequestT = Model::GetTablePolicyRequest>
        Model::GetTablePolicyOutcomeCallable GetTablePolicyCallable(const GetTablePolicyRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::GetTablePolicy, request);
        }

        /**
         * An Async wrapper for GetTablePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTablePolicyRequestT = Model::GetTablePolicyRequest>
        void GetTablePolicyAsync(const GetTablePolicyRequestT& request, const GetTablePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::GetTablePolicy, request, handler, context);
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
        template<typename ListNamespacesRequestT = Model::ListNamespacesRequest>
        Model::ListNamespacesOutcomeCallable ListNamespacesCallable(const ListNamespacesRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::ListNamespaces, request);
        }

        /**
         * An Async wrapper for ListNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNamespacesRequestT = Model::ListNamespacesRequest>
        void ListNamespacesAsync(const ListNamespacesRequestT& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
         * A Callable wrapper for ListTableBuckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTableBucketsRequestT = Model::ListTableBucketsRequest>
        Model::ListTableBucketsOutcomeCallable ListTableBucketsCallable(const ListTableBucketsRequestT& request = {}) const
        {
            return SubmitCallable(&S3TablesClient::ListTableBuckets, request);
        }

        /**
         * An Async wrapper for ListTableBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTableBucketsRequestT = Model::ListTableBucketsRequest>
        void ListTableBucketsAsync(const ListTableBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTableBucketsRequestT& request = {}) const
        {
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
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::ListTables, request);
        }

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        void ListTablesAsync(const ListTablesRequestT& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::ListTables, request, handler, context);
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
         * A Callable wrapper for PutTableBucketEncryption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutTableBucketEncryptionRequestT = Model::PutTableBucketEncryptionRequest>
        Model::PutTableBucketEncryptionOutcomeCallable PutTableBucketEncryptionCallable(const PutTableBucketEncryptionRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::PutTableBucketEncryption, request);
        }

        /**
         * An Async wrapper for PutTableBucketEncryption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTableBucketEncryptionRequestT = Model::PutTableBucketEncryptionRequest>
        void PutTableBucketEncryptionAsync(const PutTableBucketEncryptionRequestT& request, const PutTableBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
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
        virtual Model::PutTableBucketMaintenanceConfigurationOutcome PutTableBucketMaintenanceConfiguration(const Model::PutTableBucketMaintenanceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutTableBucketMaintenanceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutTableBucketMaintenanceConfigurationRequestT = Model::PutTableBucketMaintenanceConfigurationRequest>
        Model::PutTableBucketMaintenanceConfigurationOutcomeCallable PutTableBucketMaintenanceConfigurationCallable(const PutTableBucketMaintenanceConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::PutTableBucketMaintenanceConfiguration, request);
        }

        /**
         * An Async wrapper for PutTableBucketMaintenanceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTableBucketMaintenanceConfigurationRequestT = Model::PutTableBucketMaintenanceConfigurationRequest>
        void PutTableBucketMaintenanceConfigurationAsync(const PutTableBucketMaintenanceConfigurationRequestT& request, const PutTableBucketMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::PutTableBucketMaintenanceConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new maintenance configuration or replaces an existing table bucket
         * policy for a table bucket. For more information, see <a
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
         * A Callable wrapper for PutTableBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutTableBucketPolicyRequestT = Model::PutTableBucketPolicyRequest>
        Model::PutTableBucketPolicyOutcomeCallable PutTableBucketPolicyCallable(const PutTableBucketPolicyRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::PutTableBucketPolicy, request);
        }

        /**
         * An Async wrapper for PutTableBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTableBucketPolicyRequestT = Model::PutTableBucketPolicyRequest>
        void PutTableBucketPolicyAsync(const PutTableBucketPolicyRequestT& request, const PutTableBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::PutTableBucketPolicy, request, handler, context);
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
        virtual Model::PutTableMaintenanceConfigurationOutcome PutTableMaintenanceConfiguration(const Model::PutTableMaintenanceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutTableMaintenanceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutTableMaintenanceConfigurationRequestT = Model::PutTableMaintenanceConfigurationRequest>
        Model::PutTableMaintenanceConfigurationOutcomeCallable PutTableMaintenanceConfigurationCallable(const PutTableMaintenanceConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::PutTableMaintenanceConfiguration, request);
        }

        /**
         * An Async wrapper for PutTableMaintenanceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTableMaintenanceConfigurationRequestT = Model::PutTableMaintenanceConfigurationRequest>
        void PutTableMaintenanceConfigurationAsync(const PutTableMaintenanceConfigurationRequestT& request, const PutTableMaintenanceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::PutTableMaintenanceConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new maintenance configuration or replaces an existing table policy
         * for a table. For more information, see <a
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
        template<typename PutTablePolicyRequestT = Model::PutTablePolicyRequest>
        Model::PutTablePolicyOutcomeCallable PutTablePolicyCallable(const PutTablePolicyRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::PutTablePolicy, request);
        }

        /**
         * An Async wrapper for PutTablePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTablePolicyRequestT = Model::PutTablePolicyRequest>
        void PutTablePolicyAsync(const PutTablePolicyRequestT& request, const PutTablePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::PutTablePolicy, request, handler, context);
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
        template<typename RenameTableRequestT = Model::RenameTableRequest>
        Model::RenameTableOutcomeCallable RenameTableCallable(const RenameTableRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::RenameTable, request);
        }

        /**
         * An Async wrapper for RenameTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RenameTableRequestT = Model::RenameTableRequest>
        void RenameTableAsync(const RenameTableRequestT& request, const RenameTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::RenameTable, request, handler, context);
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
        virtual Model::UpdateTableMetadataLocationOutcome UpdateTableMetadataLocation(const Model::UpdateTableMetadataLocationRequest& request) const;

        /**
         * A Callable wrapper for UpdateTableMetadataLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTableMetadataLocationRequestT = Model::UpdateTableMetadataLocationRequest>
        Model::UpdateTableMetadataLocationOutcomeCallable UpdateTableMetadataLocationCallable(const UpdateTableMetadataLocationRequestT& request) const
        {
            return SubmitCallable(&S3TablesClient::UpdateTableMetadataLocation, request);
        }

        /**
         * An Async wrapper for UpdateTableMetadataLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableMetadataLocationRequestT = Model::UpdateTableMetadataLocationRequest>
        void UpdateTableMetadataLocationAsync(const UpdateTableMetadataLocationRequestT& request, const UpdateTableMetadataLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3TablesClient::UpdateTableMetadataLocation, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<S3TablesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<S3TablesClient>;
      void init(const S3TablesClientConfiguration& clientConfiguration);

      S3TablesClientConfiguration m_clientConfiguration;
      std::shared_ptr<S3TablesEndpointProviderBase> m_endpointProvider;
  };

} // namespace S3Tables
} // namespace Aws
