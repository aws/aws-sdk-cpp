/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/S3VectorsServiceClientModel.h>

namespace Aws
{
namespace S3Vectors
{
  /**
   * <p>Amazon S3 vector buckets are a bucket type to store and search vectors with
   * sub-second search times. They are designed to provide dedicated API operations
   * for you to interact with vectors to do similarity search. Within a vector
   * bucket, you use a vector index to organize and logically group your vector data.
   * When you make a write or read request, you direct it to a single vector index.
   * You store your vector data as vectors. A vector contains a key (a name that you
   * assign), a multi-dimensional vector, and, optionally, metadata that describes a
   * vector. The key uniquely identifies the vector in a vector index.</p>
   */
  class AWS_S3VECTORS_API S3VectorsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<S3VectorsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef S3VectorsClientConfiguration ClientConfigurationType;
      typedef S3VectorsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3VectorsClient(const Aws::S3Vectors::S3VectorsClientConfiguration& clientConfiguration = Aws::S3Vectors::S3VectorsClientConfiguration(),
                        std::shared_ptr<S3VectorsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3VectorsClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<S3VectorsEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::S3Vectors::S3VectorsClientConfiguration& clientConfiguration = Aws::S3Vectors::S3VectorsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3VectorsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<S3VectorsEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::S3Vectors::S3VectorsClientConfiguration& clientConfiguration = Aws::S3Vectors::S3VectorsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3VectorsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3VectorsClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3VectorsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~S3VectorsClient();

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Creates a vector index within a vector bucket.
         * To specify the vector bucket, you must use either the vector bucket name or the
         * vector bucket Amazon Resource Name (ARN).</p> <dl> <dt>Permissions</dt> <dd>
         * <p>You must have the <code>s3vectors:CreateIndex</code> permission to use this
         * operation. </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/CreateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest& request) const;

        /**
         * A Callable wrapper for CreateIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIndexRequestT = Model::CreateIndexRequest>
        Model::CreateIndexOutcomeCallable CreateIndexCallable(const CreateIndexRequestT& request) const
        {
            return SubmitCallable(&S3VectorsClient::CreateIndex, request);
        }

        /**
         * An Async wrapper for CreateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIndexRequestT = Model::CreateIndexRequest>
        void CreateIndexAsync(const CreateIndexRequestT& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3VectorsClient::CreateIndex, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Creates a vector bucket in the Amazon Web
         * Services Region that you want your bucket to be in. </p> <dl>
         * <dt>Permissions</dt> <dd> <p>You must have the
         * <code>s3vectors:CreateVectorBucket</code> permission to use this operation. </p>
         * </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/CreateVectorBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVectorBucketOutcome CreateVectorBucket(const Model::CreateVectorBucketRequest& request) const;

        /**
         * A Callable wrapper for CreateVectorBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVectorBucketRequestT = Model::CreateVectorBucketRequest>
        Model::CreateVectorBucketOutcomeCallable CreateVectorBucketCallable(const CreateVectorBucketRequestT& request) const
        {
            return SubmitCallable(&S3VectorsClient::CreateVectorBucket, request);
        }

        /**
         * An Async wrapper for CreateVectorBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVectorBucketRequestT = Model::CreateVectorBucketRequest>
        void CreateVectorBucketAsync(const CreateVectorBucketRequestT& request, const CreateVectorBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3VectorsClient::CreateVectorBucket, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Deletes a vector index. To specify the vector
         * index, you can either use both the vector bucket name and vector index name, or
         * use the vector index Amazon Resource Name (ARN). </p> <dl> <dt>Permissions</dt>
         * <dd> <p>You must have the <code>s3vectors:DeleteIndex</code> permission to use
         * this operation. </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/DeleteIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIndexRequestT = Model::DeleteIndexRequest>
        Model::DeleteIndexOutcomeCallable DeleteIndexCallable(const DeleteIndexRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::DeleteIndex, request);
        }

        /**
         * An Async wrapper for DeleteIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIndexRequestT = Model::DeleteIndexRequest>
        void DeleteIndexAsync(const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteIndexRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::DeleteIndex, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Deletes a vector bucket. All vector indexes in
         * the vector bucket must be deleted before the vector bucket can be deleted. To
         * perform this operation, you must use either the vector bucket name or the vector
         * bucket Amazon Resource Name (ARN). </p> <dl> <dt>Permissions</dt> <dd> <p>You
         * must have the <code>s3vectors:DeleteVectorBucket</code> permission to use this
         * operation. </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/DeleteVectorBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVectorBucketOutcome DeleteVectorBucket(const Model::DeleteVectorBucketRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteVectorBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVectorBucketRequestT = Model::DeleteVectorBucketRequest>
        Model::DeleteVectorBucketOutcomeCallable DeleteVectorBucketCallable(const DeleteVectorBucketRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::DeleteVectorBucket, request);
        }

        /**
         * An Async wrapper for DeleteVectorBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVectorBucketRequestT = Model::DeleteVectorBucketRequest>
        void DeleteVectorBucketAsync(const DeleteVectorBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteVectorBucketRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::DeleteVectorBucket, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Deletes a vector bucket policy. To specify the
         * bucket, you must use either the vector bucket name or the vector bucket Amazon
         * Resource Name (ARN).</p> <dl> <dt>Permissions</dt> <dd> <p>You must have the
         * <code>s3vectors:DeleteVectorBucketPolicy</code> permission to use this
         * operation. </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/DeleteVectorBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVectorBucketPolicyOutcome DeleteVectorBucketPolicy(const Model::DeleteVectorBucketPolicyRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteVectorBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVectorBucketPolicyRequestT = Model::DeleteVectorBucketPolicyRequest>
        Model::DeleteVectorBucketPolicyOutcomeCallable DeleteVectorBucketPolicyCallable(const DeleteVectorBucketPolicyRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::DeleteVectorBucketPolicy, request);
        }

        /**
         * An Async wrapper for DeleteVectorBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVectorBucketPolicyRequestT = Model::DeleteVectorBucketPolicyRequest>
        void DeleteVectorBucketPolicyAsync(const DeleteVectorBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteVectorBucketPolicyRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::DeleteVectorBucketPolicy, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Deletes one or more vectors in a vector index.
         * To specify the vector index, you can either use both the vector bucket name and
         * vector index name, or use the vector index Amazon Resource Name (ARN). </p> <dl>
         * <dt>Permissions</dt> <dd> <p>You must have the
         * <code>s3vectors:DeleteVectors</code> permission to use this operation. </p>
         * </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/DeleteVectors">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVectorsOutcome DeleteVectors(const Model::DeleteVectorsRequest& request) const;

        /**
         * A Callable wrapper for DeleteVectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVectorsRequestT = Model::DeleteVectorsRequest>
        Model::DeleteVectorsOutcomeCallable DeleteVectorsCallable(const DeleteVectorsRequestT& request) const
        {
            return SubmitCallable(&S3VectorsClient::DeleteVectors, request);
        }

        /**
         * An Async wrapper for DeleteVectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVectorsRequestT = Model::DeleteVectorsRequest>
        void DeleteVectorsAsync(const DeleteVectorsRequestT& request, const DeleteVectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3VectorsClient::DeleteVectors, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Returns vector index attributes. To specify
         * the vector index, you can either use both the vector bucket name and the vector
         * index name, or use the vector index Amazon Resource Name (ARN). </p> <dl>
         * <dt>Permissions</dt> <dd> <p>You must have the <code>s3vectors:GetIndex</code>
         * permission to use this operation. </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/GetIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIndexOutcome GetIndex(const Model::GetIndexRequest& request = {}) const;

        /**
         * A Callable wrapper for GetIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIndexRequestT = Model::GetIndexRequest>
        Model::GetIndexOutcomeCallable GetIndexCallable(const GetIndexRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::GetIndex, request);
        }

        /**
         * An Async wrapper for GetIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIndexRequestT = Model::GetIndexRequest>
        void GetIndexAsync(const GetIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetIndexRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::GetIndex, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Returns vector bucket attributes. To specify
         * the bucket, you must use either the vector bucket name or the vector bucket
         * Amazon Resource Name (ARN). </p> <dl> <dt>Permissions</dt> <dd> <p>You must have
         * the <code>s3vectors:GetVectorBucket</code> permission to use this operation.
         * </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/GetVectorBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVectorBucketOutcome GetVectorBucket(const Model::GetVectorBucketRequest& request = {}) const;

        /**
         * A Callable wrapper for GetVectorBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVectorBucketRequestT = Model::GetVectorBucketRequest>
        Model::GetVectorBucketOutcomeCallable GetVectorBucketCallable(const GetVectorBucketRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::GetVectorBucket, request);
        }

        /**
         * An Async wrapper for GetVectorBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVectorBucketRequestT = Model::GetVectorBucketRequest>
        void GetVectorBucketAsync(const GetVectorBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetVectorBucketRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::GetVectorBucket, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Gets details about a vector bucket policy. To
         * specify the bucket, you must use either the vector bucket name or the vector
         * bucket Amazon Resource Name (ARN). </p> <dl> <dt>Permissions</dt> <dd> <p>You
         * must have the <code>s3vectors:GetVectorBucketPolicy</code> permission to use
         * this operation. </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/GetVectorBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVectorBucketPolicyOutcome GetVectorBucketPolicy(const Model::GetVectorBucketPolicyRequest& request = {}) const;

        /**
         * A Callable wrapper for GetVectorBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVectorBucketPolicyRequestT = Model::GetVectorBucketPolicyRequest>
        Model::GetVectorBucketPolicyOutcomeCallable GetVectorBucketPolicyCallable(const GetVectorBucketPolicyRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::GetVectorBucketPolicy, request);
        }

        /**
         * An Async wrapper for GetVectorBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVectorBucketPolicyRequestT = Model::GetVectorBucketPolicyRequest>
        void GetVectorBucketPolicyAsync(const GetVectorBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetVectorBucketPolicyRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::GetVectorBucketPolicy, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Returns vector attributes. To specify the
         * vector index, you can either use both the vector bucket name and the vector
         * index name, or use the vector index Amazon Resource Name (ARN). </p> <dl>
         * <dt>Permissions</dt> <dd> <p>You must have the <code>s3vectors:GetVectors</code>
         * permission to use this operation. </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/GetVectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVectorsOutcome GetVectors(const Model::GetVectorsRequest& request) const;

        /**
         * A Callable wrapper for GetVectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVectorsRequestT = Model::GetVectorsRequest>
        Model::GetVectorsOutcomeCallable GetVectorsCallable(const GetVectorsRequestT& request) const
        {
            return SubmitCallable(&S3VectorsClient::GetVectors, request);
        }

        /**
         * An Async wrapper for GetVectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVectorsRequestT = Model::GetVectorsRequest>
        void GetVectorsAsync(const GetVectorsRequestT& request, const GetVectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3VectorsClient::GetVectors, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Returns a list of all the vector indexes
         * within the specified vector bucket. To specify the bucket, you must use either
         * the vector bucket name or the vector bucket Amazon Resource Name (ARN). </p>
         * <dl> <dt>Permissions</dt> <dd> <p>You must have the
         * <code>s3vectors:ListIndexes</code> permission to use this operation. </p> </dd>
         * </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/ListIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndexesOutcome ListIndexes(const Model::ListIndexesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListIndexes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIndexesRequestT = Model::ListIndexesRequest>
        Model::ListIndexesOutcomeCallable ListIndexesCallable(const ListIndexesRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::ListIndexes, request);
        }

        /**
         * An Async wrapper for ListIndexes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIndexesRequestT = Model::ListIndexesRequest>
        void ListIndexesAsync(const ListIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListIndexesRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::ListIndexes, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Returns a list of all the vector buckets that
         * are owned by the authenticated sender of the request.</p> <dl>
         * <dt>Permissions</dt> <dd> <p>You must have the
         * <code>s3vectors:ListVectorBuckets</code> permission to use this operation. </p>
         * </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/ListVectorBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVectorBucketsOutcome ListVectorBuckets(const Model::ListVectorBucketsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListVectorBuckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVectorBucketsRequestT = Model::ListVectorBucketsRequest>
        Model::ListVectorBucketsOutcomeCallable ListVectorBucketsCallable(const ListVectorBucketsRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::ListVectorBuckets, request);
        }

        /**
         * An Async wrapper for ListVectorBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVectorBucketsRequestT = Model::ListVectorBucketsRequest>
        void ListVectorBucketsAsync(const ListVectorBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListVectorBucketsRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::ListVectorBuckets, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>List vectors in the specified vector index. To
         * specify the vector index, you can either use both the vector bucket name and the
         * vector index name, or use the vector index Amazon Resource Name (ARN). </p> <p>
         * <code>ListVectors</code> operations proceed sequentially; however, for faster
         * performance on a large number of vectors in a vector index, applications can
         * request a parallel <code>ListVectors</code> operation by providing the
         * <code>segmentCount</code> and <code>segmentIndex</code> parameters.</p> <dl>
         * <dt>Permissions</dt> <dd> <p>You must have the
         * <code>s3vectors:ListVectors</code> permission to use this operation. Additional
         * permissions are required based on the request parameters you specify:</p> <ul>
         * <li> <p>With only <code>s3vectors:ListVectors</code> permission, you can list
         * vector keys when <code>returnData</code> and <code>returnMetadata</code> are
         * both set to false or not specified..</p> </li> <li> <p>If you set
         * <code>returnData</code> or <code>returnMetadata</code> to true, you must have
         * both <code>s3vectors:ListVectors</code> and <code>s3vectors:GetVectors</code>
         * permissions. The request fails with a <code>403 Forbidden</code> error if you
         * request vector data or metadata without the <code>s3vectors:GetVectors</code>
         * permission.</p> </li> </ul> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/ListVectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVectorsOutcome ListVectors(const Model::ListVectorsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListVectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVectorsRequestT = Model::ListVectorsRequest>
        Model::ListVectorsOutcomeCallable ListVectorsCallable(const ListVectorsRequestT& request = {}) const
        {
            return SubmitCallable(&S3VectorsClient::ListVectors, request);
        }

        /**
         * An Async wrapper for ListVectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVectorsRequestT = Model::ListVectorsRequest>
        void ListVectorsAsync(const ListVectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListVectorsRequestT& request = {}) const
        {
            return SubmitAsync(&S3VectorsClient::ListVectors, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Creates a bucket policy for a vector bucket.
         * To specify the bucket, you must use either the vector bucket name or the vector
         * bucket Amazon Resource Name (ARN). </p> <dl> <dt>Permissions</dt> <dd> <p>You
         * must have the <code>s3vectors:PutVectorBucketPolicy</code> permission to use
         * this operation. </p> </dd> </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/PutVectorBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVectorBucketPolicyOutcome PutVectorBucketPolicy(const Model::PutVectorBucketPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutVectorBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVectorBucketPolicyRequestT = Model::PutVectorBucketPolicyRequest>
        Model::PutVectorBucketPolicyOutcomeCallable PutVectorBucketPolicyCallable(const PutVectorBucketPolicyRequestT& request) const
        {
            return SubmitCallable(&S3VectorsClient::PutVectorBucketPolicy, request);
        }

        /**
         * An Async wrapper for PutVectorBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVectorBucketPolicyRequestT = Model::PutVectorBucketPolicyRequest>
        void PutVectorBucketPolicyAsync(const PutVectorBucketPolicyRequestT& request, const PutVectorBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3VectorsClient::PutVectorBucketPolicy, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Adds one or more vectors to a vector index. To
         * specify the vector index, you can either use both the vector bucket name and the
         * vector index name, or use the vector index Amazon Resource Name (ARN). </p>
         * <p>For more information about limits, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-vectors-limitations.html">Limitations
         * and restrictions</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>When
         * inserting vector data into your vector index, you must provide the vector data
         * as <code>float32</code> (32-bit floating point) values. If you pass
         * higher-precision values to an Amazon Web Services SDK, S3 Vectors converts the
         * values to 32-bit floating point before storing them, and
         * <code>GetVectors</code>, <code>ListVectors</code>, and <code>QueryVectors</code>
         * operations return the float32 values. Different Amazon Web Services SDKs may
         * have different default numeric types, so ensure your vectors are properly
         * formatted as <code>float32</code> values regardless of which SDK you're using.
         * For example, in Python, use <code>numpy.float32</code> or explicitly cast your
         * values.</p>  <dl> <dt>Permissions</dt> <dd> <p>You must have the
         * <code>s3vectors:PutVectors</code> permission to use this operation. </p> </dd>
         * </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/PutVectors">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVectorsOutcome PutVectors(const Model::PutVectorsRequest& request) const;

        /**
         * A Callable wrapper for PutVectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVectorsRequestT = Model::PutVectorsRequest>
        Model::PutVectorsOutcomeCallable PutVectorsCallable(const PutVectorsRequestT& request) const
        {
            return SubmitCallable(&S3VectorsClient::PutVectors, request);
        }

        /**
         * An Async wrapper for PutVectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVectorsRequestT = Model::PutVectorsRequest>
        void PutVectorsAsync(const PutVectorsRequestT& request, const PutVectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3VectorsClient::PutVectors, request, handler, context);
        }

        /**
         * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
         * subject to change.</p>  <p>Performs an approximate nearest neighbor
         * search query in a vector index using a query vector. By default, it returns the
         * keys of approximate nearest neighbors. You can optionally include the computed
         * distance (between the query vector and each vector in the response), the vector
         * data, and metadata of each vector in the response. </p> <p>To specify the vector
         * index, you can either use both the vector bucket name and the vector index name,
         * or use the vector index Amazon Resource Name (ARN). </p> <dl>
         * <dt>Permissions</dt> <dd> <p>You must have the
         * <code>s3vectors:QueryVectors</code> permission to use this operation. Additional
         * permissions are required based on the request parameters you specify:</p> <ul>
         * <li> <p>With only <code>s3vectors:QueryVectors</code> permission, you can
         * retrieve vector keys of approximate nearest neighbors and computed distances
         * between these vectors. This permission is sufficient only when you don't set any
         * metadata filters and don't request vector data or metadata (by keeping the
         * <code>returnMetadata</code> parameter set to <code>false</code> or not
         * specified).</p> </li> <li> <p>If you specify a metadata filter or set
         * <code>returnMetadata</code> to true, you must have both
         * <code>s3vectors:QueryVectors</code> and <code>s3vectors:GetVectors</code>
         * permissions. The request fails with a <code>403 Forbidden error</code> if you
         * request metadata filtering, vector data, or metadata without the
         * <code>s3vectors:GetVectors</code> permission.</p> </li> </ul> </dd>
         * </dl></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/QueryVectors">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryVectorsOutcome QueryVectors(const Model::QueryVectorsRequest& request) const;

        /**
         * A Callable wrapper for QueryVectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QueryVectorsRequestT = Model::QueryVectorsRequest>
        Model::QueryVectorsOutcomeCallable QueryVectorsCallable(const QueryVectorsRequestT& request) const
        {
            return SubmitCallable(&S3VectorsClient::QueryVectors, request);
        }

        /**
         * An Async wrapper for QueryVectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryVectorsRequestT = Model::QueryVectorsRequest>
        void QueryVectorsAsync(const QueryVectorsRequestT& request, const QueryVectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3VectorsClient::QueryVectors, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<S3VectorsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<S3VectorsClient>;
      void init(const S3VectorsClientConfiguration& clientConfiguration);

      S3VectorsClientConfiguration m_clientConfiguration;
      std::shared_ptr<S3VectorsEndpointProviderBase> m_endpointProvider;
  };

} // namespace S3Vectors
} // namespace Aws
