/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signer/SignerServiceClientModel.h>

namespace Aws
{
namespace signer
{
  /**
   * <p>AWS Signer is a fully managed code-signing service to help you ensure the
   * trust and integrity of your code. </p> <p>Signer supports the following
   * applications:</p> <p>With code signing for AWS Lambda, you can sign <a
   * href="http://docs.aws.amazon.com/lambda/latest/dg/">AWS Lambda</a> deployment
   * packages. Integrated support is provided for <a
   * href="http://docs.aws.amazon.com/AmazonS3/latest/gsg/">Amazon S3</a>, <a
   * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/">Amazon
   * CloudWatch</a>, and <a
   * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/">AWS
   * CloudTrail</a>. In order to sign code, you create a signing profile and then use
   * Signer to sign Lambda zip files in S3. </p> <p>With code signing for IoT, you
   * can sign code for any IoT device that is supported by AWS. IoT code signing is
   * available for <a
   * href="http://docs.aws.amazon.com/freertos/latest/userguide/">Amazon FreeRTOS</a>
   * and <a href="http://docs.aws.amazon.com/iot/latest/developerguide/">AWS IoT
   * Device Management</a>, and is integrated with <a
   * href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager
   * (ACM)</a>. In order to sign code, you import a third-party code-signing
   * certificate using ACM, and use that to sign updates in Amazon FreeRTOS and AWS
   * IoT Device Management. </p> <p>With Signer and the Notation CLI from the <a
   * href="https://notaryproject.dev/">Notary&#x2028; Project</a>, you can sign
   * container images stored in a container registry such as Amazon Elastic Container
   * Registry (ECR). The signatures are stored in the registry alongside the images,
   * where they are available for verifying image authenticity and integrity.</p>
   * <p>For more information about Signer, see the <a
   * href="https://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">AWS
   * Signer Developer Guide</a>.</p>
   */
  class AWS_SIGNER_API SignerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SignerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SignerClientConfiguration ClientConfigurationType;
      typedef SignerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SignerClient(const Aws::signer::SignerClientConfiguration& clientConfiguration = Aws::signer::SignerClientConfiguration(),
                     std::shared_ptr<SignerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SignerClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<SignerEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::signer::SignerClientConfiguration& clientConfiguration = Aws::signer::SignerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SignerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SignerEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::signer::SignerClientConfiguration& clientConfiguration = Aws::signer::SignerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SignerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SignerClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SignerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SignerClient();

        /**
         * <p>Adds cross-account permissions to a signing profile.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/AddProfilePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddProfilePermissionOutcome AddProfilePermission(const Model::AddProfilePermissionRequest& request) const;

        /**
         * A Callable wrapper for AddProfilePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddProfilePermissionRequestT = Model::AddProfilePermissionRequest>
        Model::AddProfilePermissionOutcomeCallable AddProfilePermissionCallable(const AddProfilePermissionRequestT& request) const
        {
            return SubmitCallable(&SignerClient::AddProfilePermission, request);
        }

        /**
         * An Async wrapper for AddProfilePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddProfilePermissionRequestT = Model::AddProfilePermissionRequest>
        void AddProfilePermissionAsync(const AddProfilePermissionRequestT& request, const AddProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::AddProfilePermission, request, handler, context);
        }

        /**
         * <p>Changes the state of an <code>ACTIVE</code> signing profile to
         * <code>CANCELED</code>. A canceled profile is still viewable with the
         * <code>ListSigningProfiles</code> operation, but it cannot perform new signing
         * jobs, and is deleted two years after cancelation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/CancelSigningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSigningProfileOutcome CancelSigningProfile(const Model::CancelSigningProfileRequest& request) const;

        /**
         * A Callable wrapper for CancelSigningProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSigningProfileRequestT = Model::CancelSigningProfileRequest>
        Model::CancelSigningProfileOutcomeCallable CancelSigningProfileCallable(const CancelSigningProfileRequestT& request) const
        {
            return SubmitCallable(&SignerClient::CancelSigningProfile, request);
        }

        /**
         * An Async wrapper for CancelSigningProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSigningProfileRequestT = Model::CancelSigningProfileRequest>
        void CancelSigningProfileAsync(const CancelSigningProfileRequestT& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::CancelSigningProfile, request, handler, context);
        }

        /**
         * <p>Returns information about a specific code signing job. You specify the job by
         * using the <code>jobId</code> value that is returned by the
         * <a>StartSigningJob</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/DescribeSigningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSigningJobOutcome DescribeSigningJob(const Model::DescribeSigningJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeSigningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSigningJobRequestT = Model::DescribeSigningJobRequest>
        Model::DescribeSigningJobOutcomeCallable DescribeSigningJobCallable(const DescribeSigningJobRequestT& request) const
        {
            return SubmitCallable(&SignerClient::DescribeSigningJob, request);
        }

        /**
         * An Async wrapper for DescribeSigningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSigningJobRequestT = Model::DescribeSigningJobRequest>
        void DescribeSigningJobAsync(const DescribeSigningJobRequestT& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::DescribeSigningJob, request, handler, context);
        }

        /**
         * <p>Retrieves the revocation status of one or more of the signing profile,
         * signing job, and signing certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetRevocationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRevocationStatusOutcome GetRevocationStatus(const Model::GetRevocationStatusRequest& request) const;

        /**
         * A Callable wrapper for GetRevocationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRevocationStatusRequestT = Model::GetRevocationStatusRequest>
        Model::GetRevocationStatusOutcomeCallable GetRevocationStatusCallable(const GetRevocationStatusRequestT& request) const
        {
            return SubmitCallable(&SignerClient::GetRevocationStatus, request);
        }

        /**
         * An Async wrapper for GetRevocationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRevocationStatusRequestT = Model::GetRevocationStatusRequest>
        void GetRevocationStatusAsync(const GetRevocationStatusRequestT& request, const GetRevocationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::GetRevocationStatus, request, handler, context);
        }

        /**
         * <p>Returns information on a specific signing platform.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetSigningPlatform">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSigningPlatformOutcome GetSigningPlatform(const Model::GetSigningPlatformRequest& request) const;

        /**
         * A Callable wrapper for GetSigningPlatform that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSigningPlatformRequestT = Model::GetSigningPlatformRequest>
        Model::GetSigningPlatformOutcomeCallable GetSigningPlatformCallable(const GetSigningPlatformRequestT& request) const
        {
            return SubmitCallable(&SignerClient::GetSigningPlatform, request);
        }

        /**
         * An Async wrapper for GetSigningPlatform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSigningPlatformRequestT = Model::GetSigningPlatformRequest>
        void GetSigningPlatformAsync(const GetSigningPlatformRequestT& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::GetSigningPlatform, request, handler, context);
        }

        /**
         * <p>Returns information on a specific signing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetSigningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSigningProfileOutcome GetSigningProfile(const Model::GetSigningProfileRequest& request) const;

        /**
         * A Callable wrapper for GetSigningProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSigningProfileRequestT = Model::GetSigningProfileRequest>
        Model::GetSigningProfileOutcomeCallable GetSigningProfileCallable(const GetSigningProfileRequestT& request) const
        {
            return SubmitCallable(&SignerClient::GetSigningProfile, request);
        }

        /**
         * An Async wrapper for GetSigningProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSigningProfileRequestT = Model::GetSigningProfileRequest>
        void GetSigningProfileAsync(const GetSigningProfileRequestT& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::GetSigningProfile, request, handler, context);
        }

        /**
         * <p>Lists the cross-account permissions associated with a signing
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListProfilePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilePermissionsOutcome ListProfilePermissions(const Model::ListProfilePermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListProfilePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfilePermissionsRequestT = Model::ListProfilePermissionsRequest>
        Model::ListProfilePermissionsOutcomeCallable ListProfilePermissionsCallable(const ListProfilePermissionsRequestT& request) const
        {
            return SubmitCallable(&SignerClient::ListProfilePermissions, request);
        }

        /**
         * An Async wrapper for ListProfilePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfilePermissionsRequestT = Model::ListProfilePermissionsRequest>
        void ListProfilePermissionsAsync(const ListProfilePermissionsRequestT& request, const ListProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::ListProfilePermissions, request, handler, context);
        }

        /**
         * <p>Lists all your signing jobs. You can use the <code>maxResults</code>
         * parameter to limit the number of signing jobs that are returned in the response.
         * If additional jobs remain to be listed, AWS Signer returns a
         * <code>nextToken</code> value. Use this value in subsequent calls to
         * <code>ListSigningJobs</code> to fetch the remaining values. You can continue
         * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter
         * and with new values that Signer returns in the <code>nextToken</code> parameter
         * until all of your signing jobs have been returned. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSigningJobsOutcome ListSigningJobs(const Model::ListSigningJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSigningJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSigningJobsRequestT = Model::ListSigningJobsRequest>
        Model::ListSigningJobsOutcomeCallable ListSigningJobsCallable(const ListSigningJobsRequestT& request) const
        {
            return SubmitCallable(&SignerClient::ListSigningJobs, request);
        }

        /**
         * An Async wrapper for ListSigningJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSigningJobsRequestT = Model::ListSigningJobsRequest>
        void ListSigningJobsAsync(const ListSigningJobsRequestT& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::ListSigningJobs, request, handler, context);
        }

        /**
         * <p>Lists all signing platforms available in AWS Signer that match the request
         * parameters. If additional jobs remain to be listed, Signer returns a
         * <code>nextToken</code> value. Use this value in subsequent calls to
         * <code>ListSigningJobs</code> to fetch the remaining values. You can continue
         * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter
         * and with new values that Signer returns in the <code>nextToken</code> parameter
         * until all of your signing jobs have been returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningPlatforms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSigningPlatformsOutcome ListSigningPlatforms(const Model::ListSigningPlatformsRequest& request) const;

        /**
         * A Callable wrapper for ListSigningPlatforms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSigningPlatformsRequestT = Model::ListSigningPlatformsRequest>
        Model::ListSigningPlatformsOutcomeCallable ListSigningPlatformsCallable(const ListSigningPlatformsRequestT& request) const
        {
            return SubmitCallable(&SignerClient::ListSigningPlatforms, request);
        }

        /**
         * An Async wrapper for ListSigningPlatforms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSigningPlatformsRequestT = Model::ListSigningPlatformsRequest>
        void ListSigningPlatformsAsync(const ListSigningPlatformsRequestT& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::ListSigningPlatforms, request, handler, context);
        }

        /**
         * <p>Lists all available signing profiles in your AWS account. Returns only
         * profiles with an <code>ACTIVE</code> status unless the
         * <code>includeCanceled</code> request field is set to <code>true</code>. If
         * additional jobs remain to be listed, AWS Signer returns a <code>nextToken</code>
         * value. Use this value in subsequent calls to <code>ListSigningJobs</code> to
         * fetch the remaining values. You can continue calling
         * <code>ListSigningJobs</code> with your <code>maxResults</code> parameter and
         * with new values that Signer returns in the <code>nextToken</code> parameter
         * until all of your signing jobs have been returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSigningProfilesOutcome ListSigningProfiles(const Model::ListSigningProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListSigningProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSigningProfilesRequestT = Model::ListSigningProfilesRequest>
        Model::ListSigningProfilesOutcomeCallable ListSigningProfilesCallable(const ListSigningProfilesRequestT& request) const
        {
            return SubmitCallable(&SignerClient::ListSigningProfiles, request);
        }

        /**
         * An Async wrapper for ListSigningProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSigningProfilesRequestT = Model::ListSigningProfilesRequest>
        void ListSigningProfilesAsync(const ListSigningProfilesRequestT& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::ListSigningProfiles, request, handler, context);
        }

        /**
         * <p>Returns a list of the tags associated with a signing profile
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SignerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates a signing profile. A signing profile is a code-signing template that
         * can be used to carry out a pre-defined signing job. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/PutSigningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSigningProfileOutcome PutSigningProfile(const Model::PutSigningProfileRequest& request) const;

        /**
         * A Callable wrapper for PutSigningProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSigningProfileRequestT = Model::PutSigningProfileRequest>
        Model::PutSigningProfileOutcomeCallable PutSigningProfileCallable(const PutSigningProfileRequestT& request) const
        {
            return SubmitCallable(&SignerClient::PutSigningProfile, request);
        }

        /**
         * An Async wrapper for PutSigningProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSigningProfileRequestT = Model::PutSigningProfileRequest>
        void PutSigningProfileAsync(const PutSigningProfileRequestT& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::PutSigningProfile, request, handler, context);
        }

        /**
         * <p>Removes cross-account permissions from a signing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/RemoveProfilePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveProfilePermissionOutcome RemoveProfilePermission(const Model::RemoveProfilePermissionRequest& request) const;

        /**
         * A Callable wrapper for RemoveProfilePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveProfilePermissionRequestT = Model::RemoveProfilePermissionRequest>
        Model::RemoveProfilePermissionOutcomeCallable RemoveProfilePermissionCallable(const RemoveProfilePermissionRequestT& request) const
        {
            return SubmitCallable(&SignerClient::RemoveProfilePermission, request);
        }

        /**
         * An Async wrapper for RemoveProfilePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveProfilePermissionRequestT = Model::RemoveProfilePermissionRequest>
        void RemoveProfilePermissionAsync(const RemoveProfilePermissionRequestT& request, const RemoveProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::RemoveProfilePermission, request, handler, context);
        }

        /**
         * <p>Changes the state of a signing job to REVOKED. This indicates that the
         * signature is no longer valid.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/RevokeSignature">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeSignatureOutcome RevokeSignature(const Model::RevokeSignatureRequest& request) const;

        /**
         * A Callable wrapper for RevokeSignature that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeSignatureRequestT = Model::RevokeSignatureRequest>
        Model::RevokeSignatureOutcomeCallable RevokeSignatureCallable(const RevokeSignatureRequestT& request) const
        {
            return SubmitCallable(&SignerClient::RevokeSignature, request);
        }

        /**
         * An Async wrapper for RevokeSignature that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeSignatureRequestT = Model::RevokeSignatureRequest>
        void RevokeSignatureAsync(const RevokeSignatureRequestT& request, const RevokeSignatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::RevokeSignature, request, handler, context);
        }

        /**
         * <p>Changes the state of a signing profile to REVOKED. This indicates that
         * signatures generated using the signing profile after an effective start date are
         * no longer valid.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/RevokeSigningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeSigningProfileOutcome RevokeSigningProfile(const Model::RevokeSigningProfileRequest& request) const;

        /**
         * A Callable wrapper for RevokeSigningProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeSigningProfileRequestT = Model::RevokeSigningProfileRequest>
        Model::RevokeSigningProfileOutcomeCallable RevokeSigningProfileCallable(const RevokeSigningProfileRequestT& request) const
        {
            return SubmitCallable(&SignerClient::RevokeSigningProfile, request);
        }

        /**
         * An Async wrapper for RevokeSigningProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeSigningProfileRequestT = Model::RevokeSigningProfileRequest>
        void RevokeSigningProfileAsync(const RevokeSigningProfileRequestT& request, const RevokeSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::RevokeSigningProfile, request, handler, context);
        }

        /**
         * <p>Signs a binary payload and returns a signature envelope.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SignPayload">AWS
         * API Reference</a></p>
         */
        virtual Model::SignPayloadOutcome SignPayload(const Model::SignPayloadRequest& request) const;

        /**
         * A Callable wrapper for SignPayload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SignPayloadRequestT = Model::SignPayloadRequest>
        Model::SignPayloadOutcomeCallable SignPayloadCallable(const SignPayloadRequestT& request) const
        {
            return SubmitCallable(&SignerClient::SignPayload, request);
        }

        /**
         * An Async wrapper for SignPayload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SignPayloadRequestT = Model::SignPayloadRequest>
        void SignPayloadAsync(const SignPayloadRequestT& request, const SignPayloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::SignPayload, request, handler, context);
        }

        /**
         * <p>Initiates a signing job to be performed on the code provided. Signing jobs
         * are viewable by the <code>ListSigningJobs</code> operation for two years after
         * they are performed. Note the following requirements: </p> <ul> <li> <p> You must
         * create an Amazon S3 source bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonS3/latest/gsg/CreatingABucket.html">Creating
         * a Bucket</a> in the <i>Amazon S3 Getting Started Guide</i>. </p> </li> <li>
         * <p>Your S3 source bucket must be version enabled.</p> </li> <li> <p>You must
         * create an S3 destination bucket. AWS Signer uses your S3 destination bucket to
         * write your signed code.</p> </li> <li> <p>You specify the name of the source and
         * destination buckets when calling the <code>StartSigningJob</code> operation.</p>
         * </li> <li> <p>You must also specify a request token that identifies your request
         * to Signer.</p> </li> </ul> <p>You can call the <a>DescribeSigningJob</a> and the
         * <a>ListSigningJobs</a> actions after you call <code>StartSigningJob</code>.</p>
         * <p>For a Java example that shows how to use this action, see <a
         * href="https://docs.aws.amazon.com/signer/latest/developerguide/api-startsigningjob.html">StartSigningJob</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/StartSigningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSigningJobOutcome StartSigningJob(const Model::StartSigningJobRequest& request) const;

        /**
         * A Callable wrapper for StartSigningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSigningJobRequestT = Model::StartSigningJobRequest>
        Model::StartSigningJobOutcomeCallable StartSigningJobCallable(const StartSigningJobRequestT& request) const
        {
            return SubmitCallable(&SignerClient::StartSigningJob, request);
        }

        /**
         * An Async wrapper for StartSigningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSigningJobRequestT = Model::StartSigningJobRequest>
        void StartSigningJobAsync(const StartSigningJobRequestT& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::StartSigningJob, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to a signing profile. Tags are labels that you can use
         * to identify and organize your AWS resources. Each tag consists of a key and an
         * optional value. To specify the signing profile, use its Amazon Resource Name
         * (ARN). To specify the tag, use a key-value pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SignerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a signing profile. To remove the tags, specify
         * a list of tag keys.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SignerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SignerClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SignerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SignerClient>;
      void init(const SignerClientConfiguration& clientConfiguration);

      SignerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SignerEndpointProviderBase> m_endpointProvider;
  };

} // namespace signer
} // namespace Aws
