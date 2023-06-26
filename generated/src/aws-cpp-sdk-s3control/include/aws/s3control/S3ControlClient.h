/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlEndpointProvider.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/DNS.h>
#include <aws/s3control/S3ControlServiceClientModel.h>

namespace Aws
{
namespace S3Control
{

    /**
     * <p> Amazon Web Services S3 Control provides access to Amazon S3 control plane
   * actions. </p>
     */
    class AWS_S3CONTROL_API S3ControlClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<S3ControlClient>
    {
    public:
        typedef Aws::Client::AWSXMLClient BASECLASS;
        static const char* SERVICE_NAME;
        static const char* ALLOCATION_TAG;

      typedef S3ControlClientConfiguration ClientConfigurationType;
      typedef S3ControlEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::S3Control::S3ControlClientConfiguration& clientConfiguration = Aws::S3Control::S3ControlClientConfiguration(),
                        std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider = Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider = Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG),
                        const Aws::S3Control::S3ControlClientConfiguration& clientConfiguration = Aws::S3Control::S3ControlClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3ControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider = Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG),
                        const Aws::S3Control::S3ControlClientConfiguration& clientConfiguration = Aws::S3Control::S3ControlClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3ControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~S3ControlClient();

        /**
         * <p>Creates an access point and associates it with the specified bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
         * Data Access with Amazon S3 Access Points</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p/>  <p>S3 on Outposts only supports VPC-style access
         * points. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">
         * Accessing Amazon S3 on Outposts using virtual private cloud (VPC) only access
         * points</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html#API_control_CreateAccessPoint_Examples">Examples</a>
         * section.</p> <p/> <p>The following actions are related to
         * <code>CreateAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPointOutcome CreateAccessPoint(const Model::CreateAccessPointRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccessPointRequestT = Model::CreateAccessPointRequest>
        Model::CreateAccessPointOutcomeCallable CreateAccessPointCallable(const CreateAccessPointRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::CreateAccessPoint, request);
        }

        /**
         * An Async wrapper for CreateAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessPointRequestT = Model::CreateAccessPointRequest>
        void CreateAccessPointAsync(const CreateAccessPointRequestT& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::CreateAccessPoint, request, handler, context);
        }

        /**
         * <p>Creates an Object Lambda Access Point. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/transforming-objects.html">Transforming
         * objects with Object Lambda Access Points</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p>The following actions are related to
         * <code>CreateAccessPointForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPointForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPointForObjectLambdaOutcome CreateAccessPointForObjectLambda(const Model::CreateAccessPointForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPointForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccessPointForObjectLambdaRequestT = Model::CreateAccessPointForObjectLambdaRequest>
        Model::CreateAccessPointForObjectLambdaOutcomeCallable CreateAccessPointForObjectLambdaCallable(const CreateAccessPointForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::CreateAccessPointForObjectLambda, request);
        }

        /**
         * An Async wrapper for CreateAccessPointForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessPointForObjectLambdaRequestT = Model::CreateAccessPointForObjectLambdaRequest>
        void CreateAccessPointForObjectLambdaAsync(const CreateAccessPointForObjectLambdaRequestT& request, const CreateAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::CreateAccessPointForObjectLambda, request, handler, context);
        }

        /**
         *  <p>This action creates an Amazon S3 on Outposts bucket. To create an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">Create
         * Bucket</a> in the <i>Amazon S3 API Reference</i>. </p>  <p>Creates a new
         * Outposts bucket. By creating the bucket, you become the bucket owner. To create
         * an Outposts bucket, you must have S3 on Outposts. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>Not every
         * string is an acceptable bucket name. For information on bucket naming
         * restrictions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/BucketRestrictions.html#bucketnamingrules">Working
         * with Amazon S3 Buckets</a>.</p> <p>S3 on Outposts buckets support:</p> <ul> <li>
         * <p>Tags</p> </li> <li> <p>LifecycleConfigurations for deleting expired
         * objects</p> </li> </ul> <p>For a complete list of restrictions and Amazon S3
         * feature limitations on S3 on Outposts, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OnOutpostsRestrictionsLimitations.html">
         * Amazon S3 on Outposts Restrictions and Limitations</a>.</p> <p>For an example of
         * the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
         * endpoint hostname prefix and <code>x-amz-outpost-id</code> in your API request,
         * see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html#API_control_CreateBucket_Examples">Examples</a>
         * section.</p> <p>The following actions are related to <code>CreateBucket</code>
         * for Amazon S3 on Outposts:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBucketOutcome CreateBucket(const Model::CreateBucketRequest& request) const;

        /**
         * A Callable wrapper for CreateBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBucketRequestT = Model::CreateBucketRequest>
        Model::CreateBucketOutcomeCallable CreateBucketCallable(const CreateBucketRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::CreateBucket, request);
        }

        /**
         * An Async wrapper for CreateBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBucketRequestT = Model::CreateBucketRequest>
        void CreateBucketAsync(const CreateBucketRequestT& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::CreateBucket, request, handler, context);
        }

        /**
         * <p>You can use S3 Batch Operations to perform large-scale batch actions on
         * Amazon S3 objects. Batch Operations can run a single action on lists of Amazon
         * S3 objects that you specify. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This action
         * creates a S3 Batch Operations job.</p> <p/> <p>Related actions include:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_JobOperation.html">JobOperation</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::CreateJob, request, handler, context);
        }

        /**
         * <p>Creates a Multi-Region Access Point and associates it with the specified
         * buckets. For more information about creating Multi-Region Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html">Creating
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * action will always be routed to the US West (Oregon) Region. For more
         * information about the restrictions around managing Multi-Region Access Points,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * request is asynchronous, meaning that you might receive a response before the
         * command has completed. When this request provides a response, it provides a
         * token that you can use to monitor the status of the request with
         * <code>DescribeMultiRegionAccessPointOperation</code>.</p> <p>The following
         * actions are related to <code>CreateMultiRegionAccessPoint</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPoint.html">GetMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListMultiRegionAccessPoints.html">ListMultiRegionAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateMultiRegionAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiRegionAccessPointOutcome CreateMultiRegionAccessPoint(const Model::CreateMultiRegionAccessPointRequest& request) const;

        /**
         * A Callable wrapper for CreateMultiRegionAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMultiRegionAccessPointRequestT = Model::CreateMultiRegionAccessPointRequest>
        Model::CreateMultiRegionAccessPointOutcomeCallable CreateMultiRegionAccessPointCallable(const CreateMultiRegionAccessPointRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::CreateMultiRegionAccessPoint, request);
        }

        /**
         * An Async wrapper for CreateMultiRegionAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMultiRegionAccessPointRequestT = Model::CreateMultiRegionAccessPointRequest>
        void CreateMultiRegionAccessPointAsync(const CreateMultiRegionAccessPointRequestT& request, const CreateMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::CreateMultiRegionAccessPoint, request, handler, context);
        }

        /**
         * <p>Deletes the specified access point.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html#API_control_DeleteAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointOutcome DeleteAccessPoint(const Model::DeleteAccessPointRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessPointRequestT = Model::DeleteAccessPointRequest>
        Model::DeleteAccessPointOutcomeCallable DeleteAccessPointCallable(const DeleteAccessPointRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteAccessPoint, request);
        }

        /**
         * An Async wrapper for DeleteAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessPointRequestT = Model::DeleteAccessPointRequest>
        void DeleteAccessPointAsync(const DeleteAccessPointRequestT& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteAccessPoint, request, handler, context);
        }

        /**
         * <p>Deletes the specified Object Lambda Access Point.</p> <p>The following
         * actions are related to <code>DeleteAccessPointForObjectLambda</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointForObjectLambdaOutcome DeleteAccessPointForObjectLambda(const Model::DeleteAccessPointForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPointForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessPointForObjectLambdaRequestT = Model::DeleteAccessPointForObjectLambdaRequest>
        Model::DeleteAccessPointForObjectLambdaOutcomeCallable DeleteAccessPointForObjectLambdaCallable(const DeleteAccessPointForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteAccessPointForObjectLambda, request);
        }

        /**
         * An Async wrapper for DeleteAccessPointForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessPointForObjectLambdaRequestT = Model::DeleteAccessPointForObjectLambdaRequest>
        void DeleteAccessPointForObjectLambdaAsync(const DeleteAccessPointForObjectLambdaRequestT& request, const DeleteAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteAccessPointForObjectLambda, request, handler, context);
        }

        /**
         * <p>Deletes the access point policy for the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request. In addition, you must use an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived by using the access point ARN, see the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html#API_control_DeleteAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointPolicyOutcome DeleteAccessPointPolicy(const Model::DeleteAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessPointPolicyRequestT = Model::DeleteAccessPointPolicyRequest>
        Model::DeleteAccessPointPolicyOutcomeCallable DeleteAccessPointPolicyCallable(const DeleteAccessPointPolicyRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteAccessPointPolicy, request);
        }

        /**
         * An Async wrapper for DeleteAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessPointPolicyRequestT = Model::DeleteAccessPointPolicyRequest>
        void DeleteAccessPointPolicyAsync(const DeleteAccessPointPolicyRequestT& request, const DeleteAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteAccessPointPolicy, request, handler, context);
        }

        /**
         * <p>Removes the resource policy for an Object Lambda Access Point.</p> <p>The
         * following actions are related to
         * <code>DeleteAccessPointPolicyForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicyForObjectLambda.html">GetAccessPointPolicyForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicyForObjectLambda.html">PutAccessPointPolicyForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicyForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointPolicyForObjectLambdaOutcome DeleteAccessPointPolicyForObjectLambda(const Model::DeleteAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPointPolicyForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessPointPolicyForObjectLambdaRequestT = Model::DeleteAccessPointPolicyForObjectLambdaRequest>
        Model::DeleteAccessPointPolicyForObjectLambdaOutcomeCallable DeleteAccessPointPolicyForObjectLambdaCallable(const DeleteAccessPointPolicyForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteAccessPointPolicyForObjectLambda, request);
        }

        /**
         * An Async wrapper for DeleteAccessPointPolicyForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessPointPolicyForObjectLambdaRequestT = Model::DeleteAccessPointPolicyForObjectLambdaRequest>
        void DeleteAccessPointPolicyForObjectLambdaAsync(const DeleteAccessPointPolicyForObjectLambdaRequestT& request, const DeleteAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteAccessPointPolicyForObjectLambda, request, handler, context);
        }

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket. To delete an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Deletes the Amazon S3 on
         * Outposts bucket. All objects (including all object versions and delete markers)
         * in the bucket must be deleted before the bucket itself can be deleted. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>All Amazon S3
         * on Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html#API_control_DeleteBucket_Examples">Examples</a>
         * section.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketOutcome DeleteBucket(const Model::DeleteBucketRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBucketRequestT = Model::DeleteBucketRequest>
        Model::DeleteBucketOutcomeCallable DeleteBucketCallable(const DeleteBucketRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteBucket, request);
        }

        /**
         * An Async wrapper for DeleteBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBucketRequestT = Model::DeleteBucketRequest>
        void DeleteBucketAsync(const DeleteBucketRequestT& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteBucket, request, handler, context);
        }

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To delete an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Deletes the lifecycle
         * configuration from the specified Outposts bucket. Amazon S3 on Outposts removes
         * all the lifecycle configuration rules in the lifecycle subresource associated
         * with the bucket. Your objects never expire, and Amazon S3 on Outposts no longer
         * automatically deletes any objects on the basis of rules contained in the deleted
         * lifecycle configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>To use this
         * action, you must have permission to perform the
         * <code>s3-outposts:DeleteLifecycleConfiguration</code> action. By default, the
         * bucket owner has this permission and the Outposts bucket owner can grant this
         * permission to others.</p> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request. In addition, you must use an S3 on Outposts endpoint
         * hostname prefix instead of <code>s3-control</code>. For an example of the
         * request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint
         * hostname prefix and the <code>x-amz-outpost-id</code> derived by using the
         * access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html#API_control_DeleteBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>For more information about object expiration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
         * to Describe Lifecycle Actions</a>.</p> <p>Related actions include:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketLifecycleConfigurationOutcome DeleteBucketLifecycleConfiguration(const Model::DeleteBucketLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBucketLifecycleConfigurationRequestT = Model::DeleteBucketLifecycleConfigurationRequest>
        Model::DeleteBucketLifecycleConfigurationOutcomeCallable DeleteBucketLifecycleConfigurationCallable(const DeleteBucketLifecycleConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteBucketLifecycleConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteBucketLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBucketLifecycleConfigurationRequestT = Model::DeleteBucketLifecycleConfigurationRequest>
        void DeleteBucketLifecycleConfigurationAsync(const DeleteBucketLifecycleConfigurationRequestT& request, const DeleteBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteBucketLifecycleConfiguration, request, handler, context);
        }

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket policy. To delete
         * an S3 bucket policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>This implementation of
         * the DELETE action uses the policy subresource to delete the policy of a
         * specified Amazon S3 on Outposts bucket. If you are using an identity other than
         * the root user of the Amazon Web Services account that owns the bucket, the
         * calling identity must have the <code>s3-outposts:DeleteBucketPolicy</code>
         * permissions on the specified Outposts bucket and belong to the bucket owner's
         * account to use this action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>If you don't
         * have <code>DeleteBucketPolicy</code> permissions, Amazon S3 returns a <code>403
         * Access Denied</code> error. If you have the correct permissions, but you're not
         * using an identity that belongs to the bucket owner's account, Amazon S3 returns
         * a <code>405 Method Not Allowed</code> error. </p>  <p>As a security
         * precaution, the root user of the Amazon Web Services account that owns a bucket
         * can always use this action, even if the policy explicitly denies the root user
         * the ability to perform this action.</p>  <p>For more information
         * about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>. </p> <p>All Amazon S3 on Outposts REST
         * API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html#API_control_DeleteBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketPolicyOutcome DeleteBucketPolicy(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBucketPolicyRequestT = Model::DeleteBucketPolicyRequest>
        Model::DeleteBucketPolicyOutcomeCallable DeleteBucketPolicyCallable(const DeleteBucketPolicyRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteBucketPolicy, request);
        }

        /**
         * An Async wrapper for DeleteBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBucketPolicyRequestT = Model::DeleteBucketPolicyRequest>
        void DeleteBucketPolicyAsync(const DeleteBucketPolicyRequestT& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteBucketPolicy, request, handler, context);
        }

        /**
         *  <p>This operation deletes an Amazon S3 on Outposts bucket's replication
         * configuration. To delete an S3 bucket's replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Deletes the replication
         * configuration from the specified S3 on Outposts bucket.</p> <p>To use this
         * operation, you must have permissions to perform the
         * <code>s3-outposts:PutReplicationConfiguration</code> action. The Outposts bucket
         * owner has this permission by default and can grant it to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsIAM.html">Setting
         * up IAM with S3 on Outposts</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsBucketPolicy.html">Managing
         * access to S3 on Outposts buckets</a> in the <i>Amazon S3 User Guide</i>.</p>
         *  <p>It can take a while to propagate <code>PUT</code> or
         * <code>DELETE</code> requests for a replication configuration to all S3 on
         * Outposts systems. Therefore, the replication configuration that's returned by a
         * <code>GET</code> request soon after a <code>PUT</code> or <code>DELETE</code>
         * request might return a more recent result than what's on the Outpost. If an
         * Outpost is offline, the delay in updating the replication configuration on that
         * Outpost can be significant.</p>  <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketReplication.html#API_control_DeleteBucketReplication_Examples">Examples</a>
         * section.</p> <p>For information about S3 replication on Outposts configuration,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsReplication.html">Replicating
         * objects for S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following operations are related to <code>DeleteBucketReplication</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketReplication.html">PutBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketReplication.html">GetBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketReplicationOutcome DeleteBucketReplication(const Model::DeleteBucketReplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBucketReplicationRequestT = Model::DeleteBucketReplicationRequest>
        Model::DeleteBucketReplicationOutcomeCallable DeleteBucketReplicationCallable(const DeleteBucketReplicationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteBucketReplication, request);
        }

        /**
         * An Async wrapper for DeleteBucketReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBucketReplicationRequestT = Model::DeleteBucketReplicationRequest>
        void DeleteBucketReplicationAsync(const DeleteBucketReplicationRequestT& request, const DeleteBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteBucketReplication, request, handler, context);
        }

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's tags. To delete
         * an S3 bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Deletes the tags from the
         * Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>To use this
         * action, you must have permission to perform the <code>PutBucketTagging</code>
         * action. By default, the bucket owner has this permission and can grant this
         * permission to others. </p> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request. In addition, you must use an S3 on Outposts endpoint
         * hostname prefix instead of <code>s3-control</code>. For an example of the
         * request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint
         * hostname prefix and the <code>x-amz-outpost-id</code> derived by using the
         * access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html#API_control_DeleteBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketTaggingOutcome DeleteBucketTagging(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBucketTaggingRequestT = Model::DeleteBucketTaggingRequest>
        Model::DeleteBucketTaggingOutcomeCallable DeleteBucketTaggingCallable(const DeleteBucketTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteBucketTagging, request);
        }

        /**
         * An Async wrapper for DeleteBucketTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBucketTaggingRequestT = Model::DeleteBucketTaggingRequest>
        void DeleteBucketTaggingAsync(const DeleteBucketTaggingRequestT& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteBucketTagging, request, handler, context);
        }

        /**
         * <p>Removes the entire tag set from the specified S3 Batch Operations job. To use
         * the <code>DeleteJobTagging</code> operation, you must have permission to perform
         * the <code>s3:DeleteJobTagging</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTaggingOutcome DeleteJobTagging(const Model::DeleteJobTaggingRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobTaggingRequestT = Model::DeleteJobTaggingRequest>
        Model::DeleteJobTaggingOutcomeCallable DeleteJobTaggingCallable(const DeleteJobTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteJobTagging, request);
        }

        /**
         * An Async wrapper for DeleteJobTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobTaggingRequestT = Model::DeleteJobTaggingRequest>
        void DeleteJobTaggingAsync(const DeleteJobTaggingRequestT& request, const DeleteJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteJobTagging, request, handler, context);
        }

        /**
         * <p>Deletes a Multi-Region Access Point. This action does not delete the buckets
         * associated with the Multi-Region Access Point, only the Multi-Region Access
         * Point itself.</p> <p>This action will always be routed to the US West (Oregon)
         * Region. For more information about the restrictions around managing Multi-Region
         * Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * request is asynchronous, meaning that you might receive a response before the
         * command has completed. When this request provides a response, it provides a
         * token that you can use to monitor the status of the request with
         * <code>DescribeMultiRegionAccessPointOperation</code>.</p> <p>The following
         * actions are related to <code>DeleteMultiRegionAccessPoint</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPoint.html">GetMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListMultiRegionAccessPoints.html">ListMultiRegionAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteMultiRegionAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiRegionAccessPointOutcome DeleteMultiRegionAccessPoint(const Model::DeleteMultiRegionAccessPointRequest& request) const;

        /**
         * A Callable wrapper for DeleteMultiRegionAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMultiRegionAccessPointRequestT = Model::DeleteMultiRegionAccessPointRequest>
        Model::DeleteMultiRegionAccessPointOutcomeCallable DeleteMultiRegionAccessPointCallable(const DeleteMultiRegionAccessPointRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteMultiRegionAccessPoint, request);
        }

        /**
         * An Async wrapper for DeleteMultiRegionAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMultiRegionAccessPointRequestT = Model::DeleteMultiRegionAccessPointRequest>
        void DeleteMultiRegionAccessPointAsync(const DeleteMultiRegionAccessPointRequestT& request, const DeleteMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteMultiRegionAccessPoint, request, handler, context);
        }

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicAccessBlockOutcome DeletePublicAccessBlock(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * A Callable wrapper for DeletePublicAccessBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePublicAccessBlockRequestT = Model::DeletePublicAccessBlockRequest>
        Model::DeletePublicAccessBlockOutcomeCallable DeletePublicAccessBlockCallable(const DeletePublicAccessBlockRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeletePublicAccessBlock, request);
        }

        /**
         * An Async wrapper for DeletePublicAccessBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePublicAccessBlockRequestT = Model::DeletePublicAccessBlockRequest>
        void DeletePublicAccessBlockAsync(const DeletePublicAccessBlockRequestT& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeletePublicAccessBlock, request, handler, context);
        }

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration. For more information about
         * S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:DeleteStorageLensConfiguration</code> action.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageLensConfigurationOutcome DeleteStorageLensConfiguration(const Model::DeleteStorageLensConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteStorageLensConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStorageLensConfigurationRequestT = Model::DeleteStorageLensConfigurationRequest>
        Model::DeleteStorageLensConfigurationOutcomeCallable DeleteStorageLensConfigurationCallable(const DeleteStorageLensConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteStorageLensConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteStorageLensConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStorageLensConfigurationRequestT = Model::DeleteStorageLensConfigurationRequest>
        void DeleteStorageLensConfigurationAsync(const DeleteStorageLensConfigurationRequestT& request, const DeleteStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteStorageLensConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration tags. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:DeleteStorageLensConfigurationTagging</code>
         * action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageLensConfigurationTaggingOutcome DeleteStorageLensConfigurationTagging(const Model::DeleteStorageLensConfigurationTaggingRequest& request) const;

        /**
         * A Callable wrapper for DeleteStorageLensConfigurationTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStorageLensConfigurationTaggingRequestT = Model::DeleteStorageLensConfigurationTaggingRequest>
        Model::DeleteStorageLensConfigurationTaggingOutcomeCallable DeleteStorageLensConfigurationTaggingCallable(const DeleteStorageLensConfigurationTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DeleteStorageLensConfigurationTagging, request);
        }

        /**
         * An Async wrapper for DeleteStorageLensConfigurationTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStorageLensConfigurationTaggingRequestT = Model::DeleteStorageLensConfigurationTaggingRequest>
        void DeleteStorageLensConfigurationTaggingAsync(const DeleteStorageLensConfigurationTaggingRequestT& request, const DeleteStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DeleteStorageLensConfigurationTagging, request, handler, context);
        }

        /**
         * <p>Retrieves the configuration parameters and status for a Batch Operations job.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>Related
         * actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        Model::DescribeJobOutcomeCallable DescribeJobCallable(const DescribeJobRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DescribeJob, request);
        }

        /**
         * An Async wrapper for DescribeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        void DescribeJobAsync(const DescribeJobRequestT& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DescribeJob, request, handler, context);
        }

        /**
         * <p>Retrieves the status of an asynchronous request to manage a Multi-Region
         * Access Point. For more information about managing Multi-Region Access Points and
         * how asynchronous requests work, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to <code>GetMultiRegionAccessPoint</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPoint.html">GetMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListMultiRegionAccessPoints.html">ListMultiRegionAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeMultiRegionAccessPointOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiRegionAccessPointOperationOutcome DescribeMultiRegionAccessPointOperation(const Model::DescribeMultiRegionAccessPointOperationRequest& request) const;

        /**
         * A Callable wrapper for DescribeMultiRegionAccessPointOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMultiRegionAccessPointOperationRequestT = Model::DescribeMultiRegionAccessPointOperationRequest>
        Model::DescribeMultiRegionAccessPointOperationOutcomeCallable DescribeMultiRegionAccessPointOperationCallable(const DescribeMultiRegionAccessPointOperationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::DescribeMultiRegionAccessPointOperation, request);
        }

        /**
         * An Async wrapper for DescribeMultiRegionAccessPointOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMultiRegionAccessPointOperationRequestT = Model::DescribeMultiRegionAccessPointOperationRequest>
        void DescribeMultiRegionAccessPointOperationAsync(const DescribeMultiRegionAccessPointOperationRequestT& request, const DescribeMultiRegionAccessPointOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::DescribeMultiRegionAccessPointOperation, request, handler, context);
        }

        /**
         * <p>Returns configuration information about the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request. In addition, you must use an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived by using the access point ARN, see the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointOutcome GetAccessPoint(const Model::GetAccessPointRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPointRequestT = Model::GetAccessPointRequest>
        Model::GetAccessPointOutcomeCallable GetAccessPointCallable(const GetAccessPointRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetAccessPoint, request);
        }

        /**
         * An Async wrapper for GetAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPointRequestT = Model::GetAccessPointRequest>
        void GetAccessPointAsync(const GetAccessPointRequestT& request, const GetAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetAccessPoint, request, handler, context);
        }

        /**
         * <p>Returns configuration for an Object Lambda Access Point.</p> <p>The following
         * actions are related to
         * <code>GetAccessPointConfigurationForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointConfigurationForObjectLambda.html">PutAccessPointConfigurationForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointConfigurationForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointConfigurationForObjectLambdaOutcome GetAccessPointConfigurationForObjectLambda(const Model::GetAccessPointConfigurationForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointConfigurationForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPointConfigurationForObjectLambdaRequestT = Model::GetAccessPointConfigurationForObjectLambdaRequest>
        Model::GetAccessPointConfigurationForObjectLambdaOutcomeCallable GetAccessPointConfigurationForObjectLambdaCallable(const GetAccessPointConfigurationForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetAccessPointConfigurationForObjectLambda, request);
        }

        /**
         * An Async wrapper for GetAccessPointConfigurationForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPointConfigurationForObjectLambdaRequestT = Model::GetAccessPointConfigurationForObjectLambdaRequest>
        void GetAccessPointConfigurationForObjectLambdaAsync(const GetAccessPointConfigurationForObjectLambdaRequestT& request, const GetAccessPointConfigurationForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetAccessPointConfigurationForObjectLambda, request, handler, context);
        }

        /**
         * <p>Returns configuration information about the specified Object Lambda Access
         * Point</p> <p>The following actions are related to
         * <code>GetAccessPointForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointForObjectLambdaOutcome GetAccessPointForObjectLambda(const Model::GetAccessPointForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPointForObjectLambdaRequestT = Model::GetAccessPointForObjectLambdaRequest>
        Model::GetAccessPointForObjectLambdaOutcomeCallable GetAccessPointForObjectLambdaCallable(const GetAccessPointForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetAccessPointForObjectLambda, request);
        }

        /**
         * An Async wrapper for GetAccessPointForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPointForObjectLambdaRequestT = Model::GetAccessPointForObjectLambdaRequest>
        void GetAccessPointForObjectLambdaAsync(const GetAccessPointForObjectLambdaRequestT& request, const GetAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetAccessPointForObjectLambda, request, handler, context);
        }

        /**
         * <p>Returns the access point policy associated with the specified access
         * point.</p> <p>The following actions are related to
         * <code>GetAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyOutcome GetAccessPointPolicy(const Model::GetAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPointPolicyRequestT = Model::GetAccessPointPolicyRequest>
        Model::GetAccessPointPolicyOutcomeCallable GetAccessPointPolicyCallable(const GetAccessPointPolicyRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetAccessPointPolicy, request);
        }

        /**
         * An Async wrapper for GetAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPointPolicyRequestT = Model::GetAccessPointPolicyRequest>
        void GetAccessPointPolicyAsync(const GetAccessPointPolicyRequestT& request, const GetAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetAccessPointPolicy, request, handler, context);
        }

        /**
         * <p>Returns the resource policy for an Object Lambda Access Point.</p> <p>The
         * following actions are related to
         * <code>GetAccessPointPolicyForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicyForObjectLambda.html">DeleteAccessPointPolicyForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicyForObjectLambda.html">PutAccessPointPolicyForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyForObjectLambdaOutcome GetAccessPointPolicyForObjectLambda(const Model::GetAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointPolicyForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPointPolicyForObjectLambdaRequestT = Model::GetAccessPointPolicyForObjectLambdaRequest>
        Model::GetAccessPointPolicyForObjectLambdaOutcomeCallable GetAccessPointPolicyForObjectLambdaCallable(const GetAccessPointPolicyForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetAccessPointPolicyForObjectLambda, request);
        }

        /**
         * An Async wrapper for GetAccessPointPolicyForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPointPolicyForObjectLambdaRequestT = Model::GetAccessPointPolicyForObjectLambdaRequest>
        void GetAccessPointPolicyForObjectLambdaAsync(const GetAccessPointPolicyForObjectLambdaRequestT& request, const GetAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetAccessPointPolicyForObjectLambda, request, handler, context);
        }

        /**
         * <p>Indicates whether the specified access point currently has a policy that
         * allows public access. For more information about public access through access
         * points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
         * Data Access with Amazon S3 access points</a> in the <i>Amazon S3 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyStatusOutcome GetAccessPointPolicyStatus(const Model::GetAccessPointPolicyStatusRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointPolicyStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPointPolicyStatusRequestT = Model::GetAccessPointPolicyStatusRequest>
        Model::GetAccessPointPolicyStatusOutcomeCallable GetAccessPointPolicyStatusCallable(const GetAccessPointPolicyStatusRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetAccessPointPolicyStatus, request);
        }

        /**
         * An Async wrapper for GetAccessPointPolicyStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPointPolicyStatusRequestT = Model::GetAccessPointPolicyStatusRequest>
        void GetAccessPointPolicyStatusAsync(const GetAccessPointPolicyStatusRequestT& request, const GetAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetAccessPointPolicyStatus, request, handler, context);
        }

        /**
         * <p>Returns the status of the resource policy associated with an Object Lambda
         * Access Point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyStatusForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyStatusForObjectLambdaOutcome GetAccessPointPolicyStatusForObjectLambda(const Model::GetAccessPointPolicyStatusForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointPolicyStatusForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPointPolicyStatusForObjectLambdaRequestT = Model::GetAccessPointPolicyStatusForObjectLambdaRequest>
        Model::GetAccessPointPolicyStatusForObjectLambdaOutcomeCallable GetAccessPointPolicyStatusForObjectLambdaCallable(const GetAccessPointPolicyStatusForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetAccessPointPolicyStatusForObjectLambda, request);
        }

        /**
         * An Async wrapper for GetAccessPointPolicyStatusForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPointPolicyStatusForObjectLambdaRequestT = Model::GetAccessPointPolicyStatusForObjectLambdaRequest>
        void GetAccessPointPolicyStatusForObjectLambdaAsync(const GetAccessPointPolicyStatusForObjectLambdaRequestT& request, const GetAccessPointPolicyStatusForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetAccessPointPolicyStatusForObjectLambda, request, handler, context);
        }

        /**
         * <p>Gets an Amazon S3 on Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">
         * Using Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If
         * you are using an identity other than the root user of the Amazon Web Services
         * account that owns the Outposts bucket, the calling identity must have the
         * <code>s3-outposts:GetBucket</code> permissions on the specified Outposts bucket
         * and belong to the Outposts bucket owner's account in order to use this action.
         * Only users from Outposts bucket owner account with the right permissions can
         * perform actions on an Outposts bucket. </p> <p> If you don't have
         * <code>s3-outposts:GetBucket</code> permissions or you're not using an identity
         * that belongs to the bucket owner's account, Amazon S3 returns a <code>403 Access
         * Denied</code> error.</p> <p>The following actions are related to
         * <code>GetBucket</code> for Amazon S3 on Outposts:</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html#API_control_GetBucket_Examples">Examples</a>
         * section.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketOutcome GetBucket(const Model::GetBucketRequest& request) const;

        /**
         * A Callable wrapper for GetBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketRequestT = Model::GetBucketRequest>
        Model::GetBucketOutcomeCallable GetBucketCallable(const GetBucketRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetBucket, request);
        }

        /**
         * An Async wrapper for GetBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketRequestT = Model::GetBucketRequest>
        void GetBucketAsync(const GetBucketRequestT& request, const GetBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetBucket, request, handler, context);
        }

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To get an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the lifecycle
         * configuration information set on the Outposts bucket. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> and for information about lifecycle configuration, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">
         * Object Lifecycle Management</a> in <i>Amazon S3 User Guide</i>.</p> <p>To use
         * this action, you must have permission to perform the
         * <code>s3-outposts:GetLifecycleConfiguration</code> action. The Outposts bucket
         * owner has this permission, by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html#API_control_GetBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p> <code>GetBucketLifecycleConfiguration</code> has the following
         * special error:</p> <ul> <li> <p>Error code:
         * <code>NoSuchLifecycleConfiguration</code> </p> <ul> <li> <p>Description: The
         * lifecycle configuration does not exist.</p> </li> <li> <p>HTTP Status Code: 404
         * Not Found</p> </li> <li> <p>SOAP Fault Code Prefix: Client</p> </li> </ul> </li>
         * </ul> <p>The following actions are related to
         * <code>GetBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketLifecycleConfigurationOutcome GetBucketLifecycleConfiguration(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetBucketLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketLifecycleConfigurationRequestT = Model::GetBucketLifecycleConfigurationRequest>
        Model::GetBucketLifecycleConfigurationOutcomeCallable GetBucketLifecycleConfigurationCallable(const GetBucketLifecycleConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetBucketLifecycleConfiguration, request);
        }

        /**
         * An Async wrapper for GetBucketLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketLifecycleConfigurationRequestT = Model::GetBucketLifecycleConfigurationRequest>
        void GetBucketLifecycleConfigurationAsync(const GetBucketLifecycleConfigurationRequestT& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetBucketLifecycleConfiguration, request, handler, context);
        }

        /**
         *  <p>This action gets a bucket policy for an Amazon S3 on Outposts bucket.
         * To get a policy for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicy.html">GetBucketPolicy</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the policy of a
         * specified Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If you are
         * using an identity other than the root user of the Amazon Web Services account
         * that owns the bucket, the calling identity must have the
         * <code>GetBucketPolicy</code> permissions on the specified bucket and belong to
         * the bucket owner's account in order to use this action.</p> <p>Only users from
         * Outposts bucket owner account with the right permissions can perform actions on
         * an Outposts bucket. If you don't have <code>s3-outposts:GetBucketPolicy</code>
         * permissions or you're not using an identity that belongs to the bucket owner's
         * account, Amazon S3 returns a <code>403 Access Denied</code> error.</p>
         *  <p>As a security precaution, the root user of the Amazon Web
         * Services account that owns a bucket can always use this action, even if the
         * policy explicitly denies the root user the ability to perform this action.</p>
         *  <p>For more information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html#API_control_GetBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketPolicyOutcome GetBucketPolicy(const Model::GetBucketPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketPolicyRequestT = Model::GetBucketPolicyRequest>
        Model::GetBucketPolicyOutcomeCallable GetBucketPolicyCallable(const GetBucketPolicyRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetBucketPolicy, request);
        }

        /**
         * An Async wrapper for GetBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketPolicyRequestT = Model::GetBucketPolicyRequest>
        void GetBucketPolicyAsync(const GetBucketPolicyRequestT& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetBucketPolicy, request, handler, context);
        }

        /**
         *  <p>This operation gets an Amazon S3 on Outposts bucket's replication
         * configuration. To get an S3 bucket's replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the replication
         * configuration of an S3 on Outposts bucket. For more information about S3 on
         * Outposts, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>. For information
         * about S3 replication on Outposts configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsReplication.html">Replicating
         * objects for S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> 
         * <p>It can take a while to propagate <code>PUT</code> or <code>DELETE</code>
         * requests for a replication configuration to all S3 on Outposts systems.
         * Therefore, the replication configuration that's returned by a <code>GET</code>
         * request soon after a <code>PUT</code> or <code>DELETE</code> request might
         * return a more recent result than what's on the Outpost. If an Outpost is
         * offline, the delay in updating the replication configuration on that Outpost can
         * be significant.</p>  <p>This action requires permissions for the
         * <code>s3-outposts:GetReplicationConfiguration</code> action. The Outposts bucket
         * owner has this permission by default and can grant it to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsIAM.html">Setting
         * up IAM with S3 on Outposts</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsBucketPolicy.html">Managing
         * access to S3 on Outposts bucket</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request. In addition, you must use an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived by using the access point ARN, see the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketReplication.html#API_control_GetBucketReplication_Examples">Examples</a>
         * section.</p> <p>If you include the <code>Filter</code> element in a replication
         * configuration, you must also include the <code>DeleteMarkerReplication</code>,
         * <code>Status</code>, and <code>Priority</code> elements. The response also
         * returns those elements.</p> <p>For information about S3 on Outposts replication
         * failure reasons, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-eventbridge.html#outposts-replication-failure-codes">Replication
         * failure reasons</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The following
         * operations are related to <code>GetBucketReplication</code>:</p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketReplication.html">PutBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketReplicationOutcome GetBucketReplication(const Model::GetBucketReplicationRequest& request) const;

        /**
         * A Callable wrapper for GetBucketReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketReplicationRequestT = Model::GetBucketReplicationRequest>
        Model::GetBucketReplicationOutcomeCallable GetBucketReplicationCallable(const GetBucketReplicationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetBucketReplication, request);
        }

        /**
         * An Async wrapper for GetBucketReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketReplicationRequestT = Model::GetBucketReplicationRequest>
        void GetBucketReplicationAsync(const GetBucketReplicationRequestT& request, const GetBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetBucketReplication, request, handler, context);
        }

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's tags. To get an S3
         * bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the tag set
         * associated with the Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>To use this
         * action, you must have permission to perform the <code>GetBucketTagging</code>
         * action. By default, the bucket owner has this permission and can grant this
         * permission to others.</p> <p> <code>GetBucketTagging</code> has the following
         * special error:</p> <ul> <li> <p>Error code: <code>NoSuchTagSetError</code> </p>
         * <ul> <li> <p>Description: There is no tag set associated with the bucket.</p>
         * </li> </ul> </li> </ul> <p>All Amazon S3 on Outposts REST API requests for this
         * action require an additional parameter of <code>x-amz-outpost-id</code> to be
         * passed with the request. In addition, you must use an S3 on Outposts endpoint
         * hostname prefix instead of <code>s3-control</code>. For an example of the
         * request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint
         * hostname prefix and the <code>x-amz-outpost-id</code> derived by using the
         * access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html#API_control_GetBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketTaggingOutcome GetBucketTagging(const Model::GetBucketTaggingRequest& request) const;

        /**
         * A Callable wrapper for GetBucketTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketTaggingRequestT = Model::GetBucketTaggingRequest>
        Model::GetBucketTaggingOutcomeCallable GetBucketTaggingCallable(const GetBucketTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetBucketTagging, request);
        }

        /**
         * An Async wrapper for GetBucketTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketTaggingRequestT = Model::GetBucketTaggingRequest>
        void GetBucketTaggingAsync(const GetBucketTaggingRequestT& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetBucketTagging, request, handler, context);
        }

        /**
         *  <p>This operation returns the versioning state for S3 on Outposts buckets
         * only. To return the versioning state for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the versioning
         * state for an S3 on Outposts bucket. With S3 Versioning, you can save multiple
         * distinct copies of your objects and recover from unintended user actions and
         * application failures.</p> <p>If you've never set versioning on your bucket, it
         * has no versioning state. In that case, the <code>GetBucketVersioning</code>
         * request does not return a versioning state value.</p> <p>For more information
         * about versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Versioning.html">Versioning</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketVersioning.html#API_control_GetBucketVersioning_Examples">Examples</a>
         * section.</p> <p>The following operations are related to
         * <code>GetBucketVersioning</code> for S3 on Outposts.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketVersioning.html">PutBucketVersioning</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketVersioning">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketVersioningOutcome GetBucketVersioning(const Model::GetBucketVersioningRequest& request) const;

        /**
         * A Callable wrapper for GetBucketVersioning that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketVersioningRequestT = Model::GetBucketVersioningRequest>
        Model::GetBucketVersioningOutcomeCallable GetBucketVersioningCallable(const GetBucketVersioningRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetBucketVersioning, request);
        }

        /**
         * An Async wrapper for GetBucketVersioning that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketVersioningRequestT = Model::GetBucketVersioningRequest>
        void GetBucketVersioningAsync(const GetBucketVersioningRequestT& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetBucketVersioning, request, handler, context);
        }

        /**
         * <p>Returns the tags on an S3 Batch Operations job. To use the
         * <code>GetJobTagging</code> operation, you must have permission to perform the
         * <code>s3:GetJobTagging</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobTaggingOutcome GetJobTagging(const Model::GetJobTaggingRequest& request) const;

        /**
         * A Callable wrapper for GetJobTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobTaggingRequestT = Model::GetJobTaggingRequest>
        Model::GetJobTaggingOutcomeCallable GetJobTaggingCallable(const GetJobTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetJobTagging, request);
        }

        /**
         * An Async wrapper for GetJobTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobTaggingRequestT = Model::GetJobTaggingRequest>
        void GetJobTaggingAsync(const GetJobTaggingRequestT& request, const GetJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetJobTagging, request, handler, context);
        }

        /**
         * <p>Returns configuration information about the specified Multi-Region Access
         * Point.</p> <p>This action will always be routed to the US West (Oregon) Region.
         * For more information about the restrictions around managing Multi-Region Access
         * Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to <code>GetMultiRegionAccessPoint</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListMultiRegionAccessPoints.html">ListMultiRegionAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetMultiRegionAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionAccessPointOutcome GetMultiRegionAccessPoint(const Model::GetMultiRegionAccessPointRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMultiRegionAccessPointRequestT = Model::GetMultiRegionAccessPointRequest>
        Model::GetMultiRegionAccessPointOutcomeCallable GetMultiRegionAccessPointCallable(const GetMultiRegionAccessPointRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetMultiRegionAccessPoint, request);
        }

        /**
         * An Async wrapper for GetMultiRegionAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMultiRegionAccessPointRequestT = Model::GetMultiRegionAccessPointRequest>
        void GetMultiRegionAccessPointAsync(const GetMultiRegionAccessPointRequestT& request, const GetMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetMultiRegionAccessPoint, request, handler, context);
        }

        /**
         * <p>Returns the access control policy of the specified Multi-Region Access
         * Point.</p> <p>This action will always be routed to the US West (Oregon) Region.
         * For more information about the restrictions around managing Multi-Region Access
         * Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to
         * <code>GetMultiRegionAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPointPolicyStatus.html">GetMultiRegionAccessPointPolicyStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutMultiRegionAccessPointPolicy.html">PutMultiRegionAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetMultiRegionAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionAccessPointPolicyOutcome GetMultiRegionAccessPointPolicy(const Model::GetMultiRegionAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMultiRegionAccessPointPolicyRequestT = Model::GetMultiRegionAccessPointPolicyRequest>
        Model::GetMultiRegionAccessPointPolicyOutcomeCallable GetMultiRegionAccessPointPolicyCallable(const GetMultiRegionAccessPointPolicyRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetMultiRegionAccessPointPolicy, request);
        }

        /**
         * An Async wrapper for GetMultiRegionAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMultiRegionAccessPointPolicyRequestT = Model::GetMultiRegionAccessPointPolicyRequest>
        void GetMultiRegionAccessPointPolicyAsync(const GetMultiRegionAccessPointPolicyRequestT& request, const GetMultiRegionAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetMultiRegionAccessPointPolicy, request, handler, context);
        }

        /**
         * <p>Indicates whether the specified Multi-Region Access Point has an access
         * control policy that allows public access.</p> <p>This action will always be
         * routed to the US West (Oregon) Region. For more information about the
         * restrictions around managing Multi-Region Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to
         * <code>GetMultiRegionAccessPointPolicyStatus</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPointPolicy.html">GetMultiRegionAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutMultiRegionAccessPointPolicy.html">PutMultiRegionAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetMultiRegionAccessPointPolicyStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionAccessPointPolicyStatusOutcome GetMultiRegionAccessPointPolicyStatus(const Model::GetMultiRegionAccessPointPolicyStatusRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionAccessPointPolicyStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMultiRegionAccessPointPolicyStatusRequestT = Model::GetMultiRegionAccessPointPolicyStatusRequest>
        Model::GetMultiRegionAccessPointPolicyStatusOutcomeCallable GetMultiRegionAccessPointPolicyStatusCallable(const GetMultiRegionAccessPointPolicyStatusRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetMultiRegionAccessPointPolicyStatus, request);
        }

        /**
         * An Async wrapper for GetMultiRegionAccessPointPolicyStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMultiRegionAccessPointPolicyStatusRequestT = Model::GetMultiRegionAccessPointPolicyStatusRequest>
        void GetMultiRegionAccessPointPolicyStatusAsync(const GetMultiRegionAccessPointPolicyStatusRequestT& request, const GetMultiRegionAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetMultiRegionAccessPointPolicyStatus, request, handler, context);
        }

        /**
         * <p>Returns the routing configuration for a Multi-Region Access Point, indicating
         * which Regions are active or passive.</p> <p>To obtain routing control changes
         * and failover requests, use the Amazon S3 failover control infrastructure
         * endpoints in these five Amazon Web Services Regions:</p> <ul> <li> <p>
         * <code>us-east-1</code> </p> </li> <li> <p> <code>us-west-2</code> </p> </li>
         * <li> <p> <code>ap-southeast-2</code> </p> </li> <li> <p>
         * <code>ap-northeast-1</code> </p> </li> <li> <p> <code>eu-west-1</code> </p>
         * </li> </ul>  <p>Your Amazon S3 bucket does not need to be in these five
         * Regions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetMultiRegionAccessPointRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionAccessPointRoutesOutcome GetMultiRegionAccessPointRoutes(const Model::GetMultiRegionAccessPointRoutesRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionAccessPointRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMultiRegionAccessPointRoutesRequestT = Model::GetMultiRegionAccessPointRoutesRequest>
        Model::GetMultiRegionAccessPointRoutesOutcomeCallable GetMultiRegionAccessPointRoutesCallable(const GetMultiRegionAccessPointRoutesRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetMultiRegionAccessPointRoutes, request);
        }

        /**
         * An Async wrapper for GetMultiRegionAccessPointRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMultiRegionAccessPointRoutesRequestT = Model::GetMultiRegionAccessPointRoutesRequest>
        void GetMultiRegionAccessPointRoutesAsync(const GetMultiRegionAccessPointRoutesRequestT& request, const GetMultiRegionAccessPointRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetMultiRegionAccessPointRoutes, request, handler, context);
        }

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicAccessBlockOutcome GetPublicAccessBlock(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * A Callable wrapper for GetPublicAccessBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPublicAccessBlockRequestT = Model::GetPublicAccessBlockRequest>
        Model::GetPublicAccessBlockOutcomeCallable GetPublicAccessBlockCallable(const GetPublicAccessBlockRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetPublicAccessBlock, request);
        }

        /**
         * An Async wrapper for GetPublicAccessBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPublicAccessBlockRequestT = Model::GetPublicAccessBlockRequest>
        void GetPublicAccessBlockAsync(const GetPublicAccessBlockRequestT& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetPublicAccessBlock, request, handler, context);
        }

        /**
         * <p>Gets the Amazon S3 Storage Lens configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>. For a complete list of S3 Storage Lens metrics, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
         * Storage Lens metrics glossary</a> in the <i>Amazon S3 User Guide</i>.</p> 
         * <p>To use this action, you must have permission to perform the
         * <code>s3:GetStorageLensConfiguration</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageLensConfigurationOutcome GetStorageLensConfiguration(const Model::GetStorageLensConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetStorageLensConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStorageLensConfigurationRequestT = Model::GetStorageLensConfigurationRequest>
        Model::GetStorageLensConfigurationOutcomeCallable GetStorageLensConfigurationCallable(const GetStorageLensConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetStorageLensConfiguration, request);
        }

        /**
         * An Async wrapper for GetStorageLensConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStorageLensConfigurationRequestT = Model::GetStorageLensConfigurationRequest>
        void GetStorageLensConfigurationAsync(const GetStorageLensConfigurationRequestT& request, const GetStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetStorageLensConfiguration, request, handler, context);
        }

        /**
         * <p>Gets the tags of Amazon S3 Storage Lens configuration. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:GetStorageLensConfigurationTagging</code>
         * action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageLensConfigurationTaggingOutcome GetStorageLensConfigurationTagging(const Model::GetStorageLensConfigurationTaggingRequest& request) const;

        /**
         * A Callable wrapper for GetStorageLensConfigurationTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStorageLensConfigurationTaggingRequestT = Model::GetStorageLensConfigurationTaggingRequest>
        Model::GetStorageLensConfigurationTaggingOutcomeCallable GetStorageLensConfigurationTaggingCallable(const GetStorageLensConfigurationTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::GetStorageLensConfigurationTagging, request);
        }

        /**
         * An Async wrapper for GetStorageLensConfigurationTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStorageLensConfigurationTaggingRequestT = Model::GetStorageLensConfigurationTaggingRequest>
        void GetStorageLensConfigurationTaggingAsync(const GetStorageLensConfigurationTaggingRequestT& request, const GetStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::GetStorageLensConfigurationTagging, request, handler, context);
        }

        /**
         * <p>Returns a list of the access points that are owned by the current account
         * that's associated with the specified bucket. You can retrieve up to 1000 access
         * points per call. If the specified bucket has more than 1,000 access points (or
         * the number specified in <code>maxResults</code>, whichever is less), the
         * response will include a continuation token that you can use to list the
         * additional access points.</p> <p/> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>ListAccessPoints</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPointsOutcome ListAccessPoints(const Model::ListAccessPointsRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccessPointsRequestT = Model::ListAccessPointsRequest>
        Model::ListAccessPointsOutcomeCallable ListAccessPointsCallable(const ListAccessPointsRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::ListAccessPoints, request);
        }

        /**
         * An Async wrapper for ListAccessPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessPointsRequestT = Model::ListAccessPointsRequest>
        void ListAccessPointsAsync(const ListAccessPointsRequestT& request, const ListAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::ListAccessPoints, request, handler, context);
        }

        /**
         * <p>Returns some or all (up to 1,000) access points associated with the Object
         * Lambda Access Point per call. If there are more access points than what can be
         * returned in one call, the response will include a continuation token that you
         * can use to list the additional access points.</p> <p>The following actions are
         * related to <code>ListAccessPointsForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPointsForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPointsForObjectLambdaOutcome ListAccessPointsForObjectLambda(const Model::ListAccessPointsForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPointsForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccessPointsForObjectLambdaRequestT = Model::ListAccessPointsForObjectLambdaRequest>
        Model::ListAccessPointsForObjectLambdaOutcomeCallable ListAccessPointsForObjectLambdaCallable(const ListAccessPointsForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::ListAccessPointsForObjectLambda, request);
        }

        /**
         * An Async wrapper for ListAccessPointsForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessPointsForObjectLambdaRequestT = Model::ListAccessPointsForObjectLambdaRequest>
        void ListAccessPointsForObjectLambdaAsync(const ListAccessPointsForObjectLambdaRequestT& request, const ListAccessPointsForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::ListAccessPointsForObjectLambda, request, handler, context);
        }

        /**
         * <p>Lists current S3 Batch Operations jobs and jobs that have ended within the
         * last 30 days for the Amazon Web Services account making the request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p>Related actions
         * include:</p> <p/> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::ListJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of the Multi-Region Access Points currently associated with
         * the specified Amazon Web Services account. Each call can return up to 100
         * Multi-Region Access Points, the maximum number of Multi-Region Access Points
         * that can be associated with a single account.</p> <p>This action will always be
         * routed to the US West (Oregon) Region. For more information about the
         * restrictions around managing Multi-Region Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to <code>ListMultiRegionAccessPoint</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPoint.html">GetMultiRegionAccessPoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListMultiRegionAccessPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiRegionAccessPointsOutcome ListMultiRegionAccessPoints(const Model::ListMultiRegionAccessPointsRequest& request) const;

        /**
         * A Callable wrapper for ListMultiRegionAccessPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMultiRegionAccessPointsRequestT = Model::ListMultiRegionAccessPointsRequest>
        Model::ListMultiRegionAccessPointsOutcomeCallable ListMultiRegionAccessPointsCallable(const ListMultiRegionAccessPointsRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::ListMultiRegionAccessPoints, request);
        }

        /**
         * An Async wrapper for ListMultiRegionAccessPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMultiRegionAccessPointsRequestT = Model::ListMultiRegionAccessPointsRequest>
        void ListMultiRegionAccessPointsAsync(const ListMultiRegionAccessPointsRequestT& request, const ListMultiRegionAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::ListMultiRegionAccessPoints, request, handler, context);
        }

        /**
         * <p>Returns a list of all Outposts buckets in an Outpost that are owned by the
         * authenticated sender of the request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and <code>x-amz-outpost-id</code> in your
         * request, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListRegionalBuckets.html#API_control_ListRegionalBuckets_Examples">Examples</a>
         * section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListRegionalBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegionalBucketsOutcome ListRegionalBuckets(const Model::ListRegionalBucketsRequest& request) const;

        /**
         * A Callable wrapper for ListRegionalBuckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegionalBucketsRequestT = Model::ListRegionalBucketsRequest>
        Model::ListRegionalBucketsOutcomeCallable ListRegionalBucketsCallable(const ListRegionalBucketsRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::ListRegionalBuckets, request);
        }

        /**
         * An Async wrapper for ListRegionalBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegionalBucketsRequestT = Model::ListRegionalBucketsRequest>
        void ListRegionalBucketsAsync(const ListRegionalBucketsRequestT& request, const ListRegionalBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::ListRegionalBuckets, request, handler, context);
        }

        /**
         * <p>Gets a list of Amazon S3 Storage Lens configurations. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:ListStorageLensConfigurations</code> action.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListStorageLensConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStorageLensConfigurationsOutcome ListStorageLensConfigurations(const Model::ListStorageLensConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListStorageLensConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStorageLensConfigurationsRequestT = Model::ListStorageLensConfigurationsRequest>
        Model::ListStorageLensConfigurationsOutcomeCallable ListStorageLensConfigurationsCallable(const ListStorageLensConfigurationsRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::ListStorageLensConfigurations, request);
        }

        /**
         * An Async wrapper for ListStorageLensConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStorageLensConfigurationsRequestT = Model::ListStorageLensConfigurationsRequest>
        void ListStorageLensConfigurationsAsync(const ListStorageLensConfigurationsRequestT& request, const ListStorageLensConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::ListStorageLensConfigurations, request, handler, context);
        }

        /**
         * <p>Replaces configuration for an Object Lambda Access Point.</p> <p>The
         * following actions are related to
         * <code>PutAccessPointConfigurationForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointConfigurationForObjectLambda.html">GetAccessPointConfigurationForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointConfigurationForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessPointConfigurationForObjectLambdaOutcome PutAccessPointConfigurationForObjectLambda(const Model::PutAccessPointConfigurationForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for PutAccessPointConfigurationForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccessPointConfigurationForObjectLambdaRequestT = Model::PutAccessPointConfigurationForObjectLambdaRequest>
        Model::PutAccessPointConfigurationForObjectLambdaOutcomeCallable PutAccessPointConfigurationForObjectLambdaCallable(const PutAccessPointConfigurationForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutAccessPointConfigurationForObjectLambda, request);
        }

        /**
         * An Async wrapper for PutAccessPointConfigurationForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccessPointConfigurationForObjectLambdaRequestT = Model::PutAccessPointConfigurationForObjectLambdaRequest>
        void PutAccessPointConfigurationForObjectLambdaAsync(const PutAccessPointConfigurationForObjectLambdaRequestT& request, const PutAccessPointConfigurationForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutAccessPointConfigurationForObjectLambda, request, handler, context);
        }

        /**
         * <p>Associates an access policy with the specified access point. Each access
         * point can have only one policy, so a request made to this API replaces any
         * existing policy associated with the specified access point.</p> <p/> <p>All
         * Amazon S3 on Outposts REST API requests for this action require an additional
         * parameter of <code>x-amz-outpost-id</code> to be passed with the request. In
         * addition, you must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html#API_control_PutAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessPointPolicyOutcome PutAccessPointPolicy(const Model::PutAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccessPointPolicyRequestT = Model::PutAccessPointPolicyRequest>
        Model::PutAccessPointPolicyOutcomeCallable PutAccessPointPolicyCallable(const PutAccessPointPolicyRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutAccessPointPolicy, request);
        }

        /**
         * An Async wrapper for PutAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccessPointPolicyRequestT = Model::PutAccessPointPolicyRequest>
        void PutAccessPointPolicyAsync(const PutAccessPointPolicyRequestT& request, const PutAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutAccessPointPolicy, request, handler, context);
        }

        /**
         * <p>Creates or replaces resource policy for an Object Lambda Access Point. For an
         * example policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/olap-create.html#olap-create-cli">Creating
         * Object Lambda Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to
         * <code>PutAccessPointPolicyForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicyForObjectLambda.html">DeleteAccessPointPolicyForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicyForObjectLambda.html">GetAccessPointPolicyForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicyForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessPointPolicyForObjectLambdaOutcome PutAccessPointPolicyForObjectLambda(const Model::PutAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for PutAccessPointPolicyForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccessPointPolicyForObjectLambdaRequestT = Model::PutAccessPointPolicyForObjectLambdaRequest>
        Model::PutAccessPointPolicyForObjectLambdaOutcomeCallable PutAccessPointPolicyForObjectLambdaCallable(const PutAccessPointPolicyForObjectLambdaRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutAccessPointPolicyForObjectLambda, request);
        }

        /**
         * An Async wrapper for PutAccessPointPolicyForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccessPointPolicyForObjectLambdaRequestT = Model::PutAccessPointPolicyForObjectLambdaRequest>
        void PutAccessPointPolicyForObjectLambdaAsync(const PutAccessPointPolicyForObjectLambdaRequestT& request, const PutAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutAccessPointPolicyForObjectLambda, request, handler, context);
        }

        /**
         *  <p>This action puts a lifecycle configuration to an Amazon S3 on Outposts
         * bucket. To put a lifecycle configuration to an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Creates a new lifecycle
         * configuration for the S3 on Outposts bucket or replaces an existing lifecycle
         * configuration. Outposts buckets only support lifecycle configurations that
         * delete/expire objects after a certain period of time and abort incomplete
         * multipart uploads.</p> <p/> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request. In addition, you must use an S3 on Outposts endpoint
         * hostname prefix instead of <code>s3-control</code>. For an example of the
         * request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint
         * hostname prefix and the <code>x-amz-outpost-id</code> derived by using the
         * access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html#API_control_PutBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketLifecycleConfigurationOutcome PutBucketLifecycleConfiguration(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutBucketLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBucketLifecycleConfigurationRequestT = Model::PutBucketLifecycleConfigurationRequest>
        Model::PutBucketLifecycleConfigurationOutcomeCallable PutBucketLifecycleConfigurationCallable(const PutBucketLifecycleConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutBucketLifecycleConfiguration, request);
        }

        /**
         * An Async wrapper for PutBucketLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBucketLifecycleConfigurationRequestT = Model::PutBucketLifecycleConfigurationRequest>
        void PutBucketLifecycleConfigurationAsync(const PutBucketLifecycleConfigurationRequestT& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutBucketLifecycleConfiguration, request, handler, context);
        }

        /**
         *  <p>This action puts a bucket policy to an Amazon S3 on Outposts bucket.
         * To put a policy on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketPolicy.html">PutBucketPolicy</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Applies an Amazon S3
         * bucket policy to an Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If you are
         * using an identity other than the root user of the Amazon Web Services account
         * that owns the Outposts bucket, the calling identity must have the
         * <code>PutBucketPolicy</code> permissions on the specified Outposts bucket and
         * belong to the bucket owner's account in order to use this action.</p> <p>If you
         * don't have <code>PutBucketPolicy</code> permissions, Amazon S3 returns a
         * <code>403 Access Denied</code> error. If you have the correct permissions, but
         * you're not using an identity that belongs to the bucket owner's account, Amazon
         * S3 returns a <code>405 Method Not Allowed</code> error.</p>  <p> As a
         * security precaution, the root user of the Amazon Web Services account that owns
         * a bucket can always use this action, even if the policy explicitly denies the
         * root user the ability to perform this action. </p>  <p>For more
         * information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html#API_control_PutBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketPolicyOutcome PutBucketPolicy(const Model::PutBucketPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBucketPolicyRequestT = Model::PutBucketPolicyRequest>
        Model::PutBucketPolicyOutcomeCallable PutBucketPolicyCallable(const PutBucketPolicyRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutBucketPolicy, request);
        }

        /**
         * An Async wrapper for PutBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBucketPolicyRequestT = Model::PutBucketPolicyRequest>
        void PutBucketPolicyAsync(const PutBucketPolicyRequestT& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutBucketPolicy, request, handler, context);
        }

        /**
         *  <p>This action creates an Amazon S3 on Outposts bucket's replication
         * configuration. To create an S3 bucket's replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Creates a replication
         * configuration or replaces an existing one. For information about S3 replication
         * on Outposts configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsReplication.html">Replicating
         * objects for S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> 
         * <p>It can take a while to propagate <code>PUT</code> or <code>DELETE</code>
         * requests for a replication configuration to all S3 on Outposts systems.
         * Therefore, the replication configuration that's returned by a <code>GET</code>
         * request soon after a <code>PUT</code> or <code>DELETE</code> request might
         * return a more recent result than what's on the Outpost. If an Outpost is
         * offline, the delay in updating the replication configuration on that Outpost can
         * be significant.</p>  <p>Specify the replication configuration in the
         * request body. In the replication configuration, you provide the following
         * information:</p> <ul> <li> <p>The name of the destination bucket or buckets
         * where you want S3 on Outposts to replicate objects</p> </li> <li> <p>The
         * Identity and Access Management (IAM) role that S3 on Outposts can assume to
         * replicate objects on your behalf</p> </li> <li> <p>Other relevant information,
         * such as replication rules</p> </li> </ul> <p>A replication configuration must
         * include at least one rule and can contain a maximum of 100. Each rule identifies
         * a subset of objects to replicate by filtering the objects in the source Outposts
         * bucket. To choose additional subsets of objects to replicate, add a rule for
         * each subset.</p> <p>To specify a subset of the objects in the source Outposts
         * bucket to apply a replication rule to, add the <code>Filter</code> element as a
         * child of the <code>Rule</code> element. You can filter objects based on an
         * object key prefix, one or more object tags, or both. When you add the
         * <code>Filter</code> element in the configuration, you must also add the
         * following elements: <code>DeleteMarkerReplication</code>, <code>Status</code>,
         * and <code>Priority</code>.</p> <p>Using <code>PutBucketReplication</code> on
         * Outposts requires that both the source and destination buckets must have
         * versioning enabled. For information about enabling versioning on a bucket, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsManagingVersioning.html">Managing
         * S3 Versioning for your S3 on Outposts bucket</a>.</p> <p>For information about
         * S3 on Outposts replication failure reasons, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/outposts-replication-eventbridge.html#outposts-replication-failure-codes">Replication
         * failure reasons</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Handling
         * Replication of Encrypted Objects</b> </p> <p>Outposts buckets are encrypted at
         * all times. All the objects in the source Outposts bucket are encrypted and can
         * be replicated. Also, all the replicas in the destination Outposts bucket are
         * encrypted with the same encryption key as the objects in the source Outposts
         * bucket.</p> <p> <b>Permissions</b> </p> <p>To create a
         * <code>PutBucketReplication</code> request, you must have
         * <code>s3-outposts:PutReplicationConfiguration</code> permissions for the bucket.
         * The Outposts bucket owner has this permission by default and can grant it to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsIAM.html">Setting
         * up IAM with S3 on Outposts</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsBucketPolicy.html">Managing
         * access to S3 on Outposts buckets</a>. </p>  <p>To perform this operation,
         * the user or role must also have the <code>iam:CreateRole</code> and
         * <code>iam:PassRole</code> permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">Granting
         * a user permissions to pass a role to an Amazon Web Services service</a>.</p>
         *  <p>All Amazon S3 on Outposts REST API requests for this action require
         * an additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request. In addition, you must use an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived by using the access point ARN, see the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketReplication.html#API_control_PutBucketReplication_Examples">Examples</a>
         * section.</p> <p>The following operations are related to
         * <code>PutBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketReplication.html">GetBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketReplicationOutcome PutBucketReplication(const Model::PutBucketReplicationRequest& request) const;

        /**
         * A Callable wrapper for PutBucketReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBucketReplicationRequestT = Model::PutBucketReplicationRequest>
        Model::PutBucketReplicationOutcomeCallable PutBucketReplicationCallable(const PutBucketReplicationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutBucketReplication, request);
        }

        /**
         * An Async wrapper for PutBucketReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBucketReplicationRequestT = Model::PutBucketReplicationRequest>
        void PutBucketReplicationAsync(const PutBucketReplicationRequestT& request, const PutBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutBucketReplication, request, handler, context);
        }

        /**
         *  <p>This action puts tags on an Amazon S3 on Outposts bucket. To put tags
         * on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Sets the tags for an S3
         * on Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>Use tags to
         * organize your Amazon Web Services bill to reflect your own cost structure. To do
         * this, sign up to get your Amazon Web Services account bill with tag key values
         * included. Then, to see the cost of combined resources, organize your billing
         * information according to resources with the same tag key values. For example,
         * you can tag several resources with a specific application name, and then
         * organize your billing information to see the total cost of that application
         * across several services. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
         * allocation and tagging</a>.</p>  <p>Within a bucket, if you add a tag that
         * has the same key as an existing tag, the new value overwrites the old value. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CostAllocTagging.html">
         * Using cost allocation in Amazon S3 bucket tags</a>.</p>  <p>To use this
         * action, you must have permissions to perform the
         * <code>s3-outposts:PutBucketTagging</code> action. The Outposts bucket owner has
         * this permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
         * Permissions Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * access permissions to your Amazon S3 resources</a>.</p> <p>
         * <code>PutBucketTagging</code> has the following special errors:</p> <ul> <li>
         * <p>Error code: <code>InvalidTagError</code> </p> <ul> <li> <p>Description: The
         * tag provided was not a valid tag. This error can occur if the tag did not pass
         * input validation. For information about tag restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">
         * User-Defined Tag Restrictions</a> and <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">
         * Amazon Web Services-Generated Cost Allocation Tag Restrictions</a>.</p> </li>
         * </ul> </li> <li> <p>Error code: <code>MalformedXMLError</code> </p> <ul> <li>
         * <p>Description: The XML provided does not match the schema.</p> </li> </ul>
         * </li> <li> <p>Error code: <code>OperationAbortedError </code> </p> <ul> <li>
         * <p>Description: A conflicting conditional action is currently in progress
         * against this resource. Try again.</p> </li> </ul> </li> <li> <p>Error code:
         * <code>InternalError</code> </p> <ul> <li> <p>Description: The service was unable
         * to apply the provided tag to the bucket.</p> </li> </ul> </li> </ul> <p>All
         * Amazon S3 on Outposts REST API requests for this action require an additional
         * parameter of <code>x-amz-outpost-id</code> to be passed with the request. In
         * addition, you must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html#API_control_PutBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketTaggingOutcome PutBucketTagging(const Model::PutBucketTaggingRequest& request) const;

        /**
         * A Callable wrapper for PutBucketTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBucketTaggingRequestT = Model::PutBucketTaggingRequest>
        Model::PutBucketTaggingOutcomeCallable PutBucketTaggingCallable(const PutBucketTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutBucketTagging, request);
        }

        /**
         * An Async wrapper for PutBucketTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBucketTaggingRequestT = Model::PutBucketTaggingRequest>
        void PutBucketTaggingAsync(const PutBucketTaggingRequestT& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutBucketTagging, request, handler, context);
        }

        /**
         *  <p>This operation sets the versioning state for S3 on Outposts buckets
         * only. To set the versioning state for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketVersioning.html">PutBucketVersioning</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Sets the versioning state
         * for an S3 on Outposts bucket. With S3 Versioning, you can save multiple distinct
         * copies of your objects and recover from unintended user actions and application
         * failures.</p> <p>You can set the versioning state to one of the following:</p>
         * <ul> <li> <p> <b>Enabled</b> - Enables versioning for the objects in the bucket.
         * All objects added to the bucket receive a unique version ID.</p> </li> <li> <p>
         * <b>Suspended</b> - Suspends versioning for the objects in the bucket. All
         * objects added to the bucket receive the version ID <code>null</code>.</p> </li>
         * </ul> <p>If you've never set versioning on your bucket, it has no versioning
         * state. In that case, a <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketVersioning.html">
         * GetBucketVersioning</a> request does not return a versioning state value.</p>
         * <p>When you enable S3 Versioning, for each object in your bucket, you have a
         * current version and zero or more noncurrent versions. You can configure your
         * bucket S3 Lifecycle rules to expire noncurrent versions after a specified time
         * period. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsLifecycleManaging.html">
         * Creating and managing a lifecycle configuration for your S3 on Outposts
         * bucket</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If you have an object
         * expiration lifecycle configuration in your non-versioned bucket and you want to
         * maintain the same permanent delete behavior when you enable versioning, you must
         * add a noncurrent expiration policy. The noncurrent expiration lifecycle
         * configuration will manage the deletes of the noncurrent object versions in the
         * version-enabled bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Versioning.html">Versioning</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketVersioning.html#API_control_PutBucketVersioning_Examples">Examples</a>
         * section.</p> <p>The following operations are related to
         * <code>PutBucketVersioning</code> for S3 on Outposts.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketVersioning.html">GetBucketVersioning</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketVersioning">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketVersioningOutcome PutBucketVersioning(const Model::PutBucketVersioningRequest& request) const;

        /**
         * A Callable wrapper for PutBucketVersioning that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBucketVersioningRequestT = Model::PutBucketVersioningRequest>
        Model::PutBucketVersioningOutcomeCallable PutBucketVersioningCallable(const PutBucketVersioningRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutBucketVersioning, request);
        }

        /**
         * An Async wrapper for PutBucketVersioning that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBucketVersioningRequestT = Model::PutBucketVersioningRequest>
        void PutBucketVersioningAsync(const PutBucketVersioningRequestT& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutBucketVersioning, request, handler, context);
        }

        /**
         * <p>Sets the supplied tag-set on an S3 Batch Operations job.</p> <p>A tag is a
         * key-value pair. You can associate S3 Batch Operations tags with any job by
         * sending a PUT request against the tagging subresource that is associated with
         * the job. To modify the existing tag set, you can either replace the existing tag
         * set entirely, or make changes within the existing tag set by retrieving the
         * existing tag set using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>,
         * modify that tag set, and use this action to replace the tag set with the one you
         * modified. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon S3 User Guide</i>. </p>
         * <p/>  <ul> <li> <p>If you send this request with an empty tag set, Amazon
         * S3 deletes the existing tag set on the Batch Operations job. If you use this
         * method, you are charged for a Tier 1 Request (PUT). For more information, see <a
         * href="http://aws.amazon.com/s3/pricing/">Amazon S3 pricing</a>.</p> </li> <li>
         * <p>For deleting existing tags for your Batch Operations job, a <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * request is preferred because it achieves the same result without incurring
         * charges.</p> </li> <li> <p>A few things to consider about using tags:</p> <ul>
         * <li> <p>Amazon S3 limits the maximum number of tags to 50 tags per job.</p>
         * </li> <li> <p>You can associate up to 50 tags with a job as long as they have
         * unique tag keys.</p> </li> <li> <p>A tag key can be up to 128 Unicode characters
         * in length, and tag values can be up to 256 Unicode characters in length.</p>
         * </li> <li> <p>The key and values are case sensitive.</p> </li> <li> <p>For
         * tagging-related restrictions related to characters and encodings, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>Billing and Cost Management User Guide</i>.</p>
         * </li> </ul> </li> </ul>  <p/> <p>To use the <code>PutJobTagging</code>
         * operation, you must have permission to perform the <code>s3:PutJobTagging</code>
         * action.</p> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutJobTaggingOutcome PutJobTagging(const Model::PutJobTaggingRequest& request) const;

        /**
         * A Callable wrapper for PutJobTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutJobTaggingRequestT = Model::PutJobTaggingRequest>
        Model::PutJobTaggingOutcomeCallable PutJobTaggingCallable(const PutJobTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutJobTagging, request);
        }

        /**
         * An Async wrapper for PutJobTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutJobTaggingRequestT = Model::PutJobTaggingRequest>
        void PutJobTaggingAsync(const PutJobTaggingRequestT& request, const PutJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutJobTagging, request, handler, context);
        }

        /**
         * <p>Associates an access control policy with the specified Multi-Region Access
         * Point. Each Multi-Region Access Point can have only one policy, so a request
         * made to this action replaces any existing policy that is associated with the
         * specified Multi-Region Access Point.</p> <p>This action will always be routed to
         * the US West (Oregon) Region. For more information about the restrictions around
         * managing Multi-Region Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to
         * <code>PutMultiRegionAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPointPolicy.html">GetMultiRegionAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPointPolicyStatus.html">GetMultiRegionAccessPointPolicyStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutMultiRegionAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMultiRegionAccessPointPolicyOutcome PutMultiRegionAccessPointPolicy(const Model::PutMultiRegionAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutMultiRegionAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMultiRegionAccessPointPolicyRequestT = Model::PutMultiRegionAccessPointPolicyRequest>
        Model::PutMultiRegionAccessPointPolicyOutcomeCallable PutMultiRegionAccessPointPolicyCallable(const PutMultiRegionAccessPointPolicyRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutMultiRegionAccessPointPolicy, request);
        }

        /**
         * An Async wrapper for PutMultiRegionAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMultiRegionAccessPointPolicyRequestT = Model::PutMultiRegionAccessPointPolicyRequest>
        void PutMultiRegionAccessPointPolicyAsync(const PutMultiRegionAccessPointPolicyRequestT& request, const PutMultiRegionAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutMultiRegionAccessPointPolicy, request, handler, context);
        }

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * Amazon Web Services account. For this operation, users must have the
         * <code>s3:PutAccountPublicAccessBlock</code> permission. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPublicAccessBlockOutcome PutPublicAccessBlock(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * A Callable wrapper for PutPublicAccessBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPublicAccessBlockRequestT = Model::PutPublicAccessBlockRequest>
        Model::PutPublicAccessBlockOutcomeCallable PutPublicAccessBlockCallable(const PutPublicAccessBlockRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutPublicAccessBlock, request);
        }

        /**
         * An Async wrapper for PutPublicAccessBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPublicAccessBlockRequestT = Model::PutPublicAccessBlockRequest>
        void PutPublicAccessBlockAsync(const PutPublicAccessBlockRequestT& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutPublicAccessBlock, request, handler, context);
        }

        /**
         * <p>Puts an Amazon S3 Storage Lens configuration. For more information about S3
         * Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Working
         * with Amazon S3 Storage Lens</a> in the <i>Amazon S3 User Guide</i>. For a
         * complete list of S3 Storage Lens metrics, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
         * Storage Lens metrics glossary</a> in the <i>Amazon S3 User Guide</i>.</p> 
         * <p>To use this action, you must have permission to perform the
         * <code>s3:PutStorageLensConfiguration</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStorageLensConfigurationOutcome PutStorageLensConfiguration(const Model::PutStorageLensConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutStorageLensConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutStorageLensConfigurationRequestT = Model::PutStorageLensConfigurationRequest>
        Model::PutStorageLensConfigurationOutcomeCallable PutStorageLensConfigurationCallable(const PutStorageLensConfigurationRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutStorageLensConfiguration, request);
        }

        /**
         * An Async wrapper for PutStorageLensConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutStorageLensConfigurationRequestT = Model::PutStorageLensConfigurationRequest>
        void PutStorageLensConfigurationAsync(const PutStorageLensConfigurationRequestT& request, const PutStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutStorageLensConfiguration, request, handler, context);
        }

        /**
         * <p>Put or replace tags on an existing Amazon S3 Storage Lens configuration. For
         * more information about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:PutStorageLensConfigurationTagging</code>
         * action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStorageLensConfigurationTaggingOutcome PutStorageLensConfigurationTagging(const Model::PutStorageLensConfigurationTaggingRequest& request) const;

        /**
         * A Callable wrapper for PutStorageLensConfigurationTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutStorageLensConfigurationTaggingRequestT = Model::PutStorageLensConfigurationTaggingRequest>
        Model::PutStorageLensConfigurationTaggingOutcomeCallable PutStorageLensConfigurationTaggingCallable(const PutStorageLensConfigurationTaggingRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::PutStorageLensConfigurationTagging, request);
        }

        /**
         * An Async wrapper for PutStorageLensConfigurationTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutStorageLensConfigurationTaggingRequestT = Model::PutStorageLensConfigurationTaggingRequest>
        void PutStorageLensConfigurationTaggingAsync(const PutStorageLensConfigurationTaggingRequestT& request, const PutStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::PutStorageLensConfigurationTagging, request, handler, context);
        }

        /**
         * <p>Submits an updated route configuration for a Multi-Region Access Point. This
         * API operation updates the routing status for the specified Regions from active
         * to passive, or from passive to active. A value of <code>0</code> indicates a
         * passive status, which means that traffic won't be routed to the specified
         * Region. A value of <code>100</code> indicates an active status, which means that
         * traffic will be routed to the specified Region. At least one Region must be
         * active at all times.</p> <p>When the routing configuration is changed, any
         * in-progress operations (uploads, copies, deletes, and so on) to formerly active
         * Regions will continue to run to their final completion state (success or
         * failure). The routing configurations of any Regions that aren’t specified remain
         * unchanged.</p>  <p>Updated routing configurations might not be immediately
         * applied. It can take up to 2 minutes for your changes to take effect.</p>
         *  <p>To submit routing control changes and failover requests, use the
         * Amazon S3 failover control infrastructure endpoints in these five Amazon Web
         * Services Regions:</p> <ul> <li> <p> <code>us-east-1</code> </p> </li> <li> <p>
         * <code>us-west-2</code> </p> </li> <li> <p> <code>ap-southeast-2</code> </p>
         * </li> <li> <p> <code>ap-northeast-1</code> </p> </li> <li> <p>
         * <code>eu-west-1</code> </p> </li> </ul>  <p>Your Amazon S3 bucket does not
         * need to be in these five Regions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SubmitMultiRegionAccessPointRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitMultiRegionAccessPointRoutesOutcome SubmitMultiRegionAccessPointRoutes(const Model::SubmitMultiRegionAccessPointRoutesRequest& request) const;

        /**
         * A Callable wrapper for SubmitMultiRegionAccessPointRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitMultiRegionAccessPointRoutesRequestT = Model::SubmitMultiRegionAccessPointRoutesRequest>
        Model::SubmitMultiRegionAccessPointRoutesOutcomeCallable SubmitMultiRegionAccessPointRoutesCallable(const SubmitMultiRegionAccessPointRoutesRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::SubmitMultiRegionAccessPointRoutes, request);
        }

        /**
         * An Async wrapper for SubmitMultiRegionAccessPointRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitMultiRegionAccessPointRoutesRequestT = Model::SubmitMultiRegionAccessPointRoutesRequest>
        void SubmitMultiRegionAccessPointRoutesAsync(const SubmitMultiRegionAccessPointRoutesRequestT& request, const SubmitMultiRegionAccessPointRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::SubmitMultiRegionAccessPointRoutes, request, handler, context);
        }

        /**
         * <p>Updates an existing S3 Batch Operations job's priority. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>Related
         * actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobPriority">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobPriorityOutcome UpdateJobPriority(const Model::UpdateJobPriorityRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobPriority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobPriorityRequestT = Model::UpdateJobPriorityRequest>
        Model::UpdateJobPriorityOutcomeCallable UpdateJobPriorityCallable(const UpdateJobPriorityRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::UpdateJobPriority, request);
        }

        /**
         * An Async wrapper for UpdateJobPriority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobPriorityRequestT = Model::UpdateJobPriorityRequest>
        void UpdateJobPriorityAsync(const UpdateJobPriorityRequestT& request, const UpdateJobPriorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::UpdateJobPriority, request, handler, context);
        }

        /**
         * <p>Updates the status for the specified job. Use this action to confirm that you
         * want to run a job or to cancel an existing job. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>Related
         * actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobStatusOutcome UpdateJobStatus(const Model::UpdateJobStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobStatusRequestT = Model::UpdateJobStatusRequest>
        Model::UpdateJobStatusOutcomeCallable UpdateJobStatusCallable(const UpdateJobStatusRequestT& request) const
        {
            return SubmitCallable(&S3ControlClient::UpdateJobStatus, request);
        }

        /**
         * An Async wrapper for UpdateJobStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobStatusRequestT = Model::UpdateJobStatusRequest>
        void UpdateJobStatusAsync(const UpdateJobStatusRequestT& request, const UpdateJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3ControlClient::UpdateJobStatus, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<S3ControlEndpointProviderBase>& accessEndpointProvider();
    private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<S3ControlClient>;
        void init(const S3ControlClientConfiguration& clientConfiguration);
        S3ControlClientConfiguration m_clientConfiguration;
        std::shared_ptr<Utils::Threading::Executor> m_executor;
        std::shared_ptr<S3ControlEndpointProviderBase> m_endpointProvider;
    };

  } // namespace S3Control
} // namespace Aws
