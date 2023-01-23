/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/s3control/S3ControlErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/s3control/S3ControlEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in S3ControlClient header */
#include <aws/s3control/model/CreateAccessPointResult.h>
#include <aws/s3control/model/CreateAccessPointForObjectLambdaResult.h>
#include <aws/s3control/model/CreateBucketResult.h>
#include <aws/s3control/model/CreateJobResult.h>
#include <aws/s3control/model/CreateMultiRegionAccessPointResult.h>
#include <aws/s3control/model/DeleteJobTaggingResult.h>
#include <aws/s3control/model/DeleteMultiRegionAccessPointResult.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationTaggingResult.h>
#include <aws/s3control/model/DescribeJobResult.h>
#include <aws/s3control/model/DescribeMultiRegionAccessPointOperationResult.h>
#include <aws/s3control/model/GetAccessPointResult.h>
#include <aws/s3control/model/GetAccessPointConfigurationForObjectLambdaResult.h>
#include <aws/s3control/model/GetAccessPointForObjectLambdaResult.h>
#include <aws/s3control/model/GetAccessPointPolicyResult.h>
#include <aws/s3control/model/GetAccessPointPolicyForObjectLambdaResult.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusResult.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusForObjectLambdaResult.h>
#include <aws/s3control/model/GetBucketResult.h>
#include <aws/s3control/model/GetBucketLifecycleConfigurationResult.h>
#include <aws/s3control/model/GetBucketPolicyResult.h>
#include <aws/s3control/model/GetBucketTaggingResult.h>
#include <aws/s3control/model/GetBucketVersioningResult.h>
#include <aws/s3control/model/GetJobTaggingResult.h>
#include <aws/s3control/model/GetMultiRegionAccessPointResult.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyResult.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyStatusResult.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRoutesResult.h>
#include <aws/s3control/model/GetPublicAccessBlockResult.h>
#include <aws/s3control/model/GetStorageLensConfigurationResult.h>
#include <aws/s3control/model/GetStorageLensConfigurationTaggingResult.h>
#include <aws/s3control/model/ListAccessPointsResult.h>
#include <aws/s3control/model/ListAccessPointsForObjectLambdaResult.h>
#include <aws/s3control/model/ListJobsResult.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsResult.h>
#include <aws/s3control/model/ListRegionalBucketsResult.h>
#include <aws/s3control/model/ListStorageLensConfigurationsResult.h>
#include <aws/s3control/model/PutJobTaggingResult.h>
#include <aws/s3control/model/PutMultiRegionAccessPointPolicyResult.h>
#include <aws/s3control/model/PutStorageLensConfigurationTaggingResult.h>
#include <aws/s3control/model/SubmitMultiRegionAccessPointRoutesResult.h>
#include <aws/s3control/model/UpdateJobPriorityResult.h>
#include <aws/s3control/model/UpdateJobStatusResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in S3ControlClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace S3Control
  {
    using S3ControlEndpointProviderBase = Aws::S3Control::Endpoint::S3ControlEndpointProviderBase;
    using S3ControlEndpointProvider = Aws::S3Control::Endpoint::S3ControlEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in S3ControlClient header */
      class CreateAccessPointRequest;
      class CreateAccessPointForObjectLambdaRequest;
      class CreateBucketRequest;
      class CreateJobRequest;
      class CreateMultiRegionAccessPointRequest;
      class DeleteAccessPointRequest;
      class DeleteAccessPointForObjectLambdaRequest;
      class DeleteAccessPointPolicyRequest;
      class DeleteAccessPointPolicyForObjectLambdaRequest;
      class DeleteBucketRequest;
      class DeleteBucketLifecycleConfigurationRequest;
      class DeleteBucketPolicyRequest;
      class DeleteBucketTaggingRequest;
      class DeleteJobTaggingRequest;
      class DeleteMultiRegionAccessPointRequest;
      class DeletePublicAccessBlockRequest;
      class DeleteStorageLensConfigurationRequest;
      class DeleteStorageLensConfigurationTaggingRequest;
      class DescribeJobRequest;
      class DescribeMultiRegionAccessPointOperationRequest;
      class GetAccessPointRequest;
      class GetAccessPointConfigurationForObjectLambdaRequest;
      class GetAccessPointForObjectLambdaRequest;
      class GetAccessPointPolicyRequest;
      class GetAccessPointPolicyForObjectLambdaRequest;
      class GetAccessPointPolicyStatusRequest;
      class GetAccessPointPolicyStatusForObjectLambdaRequest;
      class GetBucketRequest;
      class GetBucketLifecycleConfigurationRequest;
      class GetBucketPolicyRequest;
      class GetBucketTaggingRequest;
      class GetBucketVersioningRequest;
      class GetJobTaggingRequest;
      class GetMultiRegionAccessPointRequest;
      class GetMultiRegionAccessPointPolicyRequest;
      class GetMultiRegionAccessPointPolicyStatusRequest;
      class GetMultiRegionAccessPointRoutesRequest;
      class GetPublicAccessBlockRequest;
      class GetStorageLensConfigurationRequest;
      class GetStorageLensConfigurationTaggingRequest;
      class ListAccessPointsRequest;
      class ListAccessPointsForObjectLambdaRequest;
      class ListJobsRequest;
      class ListMultiRegionAccessPointsRequest;
      class ListRegionalBucketsRequest;
      class ListStorageLensConfigurationsRequest;
      class PutAccessPointConfigurationForObjectLambdaRequest;
      class PutAccessPointPolicyRequest;
      class PutAccessPointPolicyForObjectLambdaRequest;
      class PutBucketLifecycleConfigurationRequest;
      class PutBucketPolicyRequest;
      class PutBucketTaggingRequest;
      class PutBucketVersioningRequest;
      class PutJobTaggingRequest;
      class PutMultiRegionAccessPointPolicyRequest;
      class PutPublicAccessBlockRequest;
      class PutStorageLensConfigurationRequest;
      class PutStorageLensConfigurationTaggingRequest;
      class SubmitMultiRegionAccessPointRoutesRequest;
      class UpdateJobPriorityRequest;
      class UpdateJobStatusRequest;
      /* End of service model forward declarations required in S3ControlClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAccessPointResult, S3ControlError> CreateAccessPointOutcome;
      typedef Aws::Utils::Outcome<CreateAccessPointForObjectLambdaResult, S3ControlError> CreateAccessPointForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<CreateBucketResult, S3ControlError> CreateBucketOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, S3ControlError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreateMultiRegionAccessPointResult, S3ControlError> CreateMultiRegionAccessPointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointPolicyForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketLifecycleConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketTaggingOutcome;
      typedef Aws::Utils::Outcome<DeleteJobTaggingResult, S3ControlError> DeleteJobTaggingOutcome;
      typedef Aws::Utils::Outcome<DeleteMultiRegionAccessPointResult, S3ControlError> DeleteMultiRegionAccessPointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeletePublicAccessBlockOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteStorageLensConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteStorageLensConfigurationTaggingResult, S3ControlError> DeleteStorageLensConfigurationTaggingOutcome;
      typedef Aws::Utils::Outcome<DescribeJobResult, S3ControlError> DescribeJobOutcome;
      typedef Aws::Utils::Outcome<DescribeMultiRegionAccessPointOperationResult, S3ControlError> DescribeMultiRegionAccessPointOperationOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointResult, S3ControlError> GetAccessPointOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointConfigurationForObjectLambdaResult, S3ControlError> GetAccessPointConfigurationForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointForObjectLambdaResult, S3ControlError> GetAccessPointForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointPolicyResult, S3ControlError> GetAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointPolicyForObjectLambdaResult, S3ControlError> GetAccessPointPolicyForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointPolicyStatusResult, S3ControlError> GetAccessPointPolicyStatusOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointPolicyStatusForObjectLambdaResult, S3ControlError> GetAccessPointPolicyStatusForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<GetBucketResult, S3ControlError> GetBucketOutcome;
      typedef Aws::Utils::Outcome<GetBucketLifecycleConfigurationResult, S3ControlError> GetBucketLifecycleConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetBucketPolicyResult, S3ControlError> GetBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<GetBucketTaggingResult, S3ControlError> GetBucketTaggingOutcome;
      typedef Aws::Utils::Outcome<GetBucketVersioningResult, S3ControlError> GetBucketVersioningOutcome;
      typedef Aws::Utils::Outcome<GetJobTaggingResult, S3ControlError> GetJobTaggingOutcome;
      typedef Aws::Utils::Outcome<GetMultiRegionAccessPointResult, S3ControlError> GetMultiRegionAccessPointOutcome;
      typedef Aws::Utils::Outcome<GetMultiRegionAccessPointPolicyResult, S3ControlError> GetMultiRegionAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<GetMultiRegionAccessPointPolicyStatusResult, S3ControlError> GetMultiRegionAccessPointPolicyStatusOutcome;
      typedef Aws::Utils::Outcome<GetMultiRegionAccessPointRoutesResult, S3ControlError> GetMultiRegionAccessPointRoutesOutcome;
      typedef Aws::Utils::Outcome<GetPublicAccessBlockResult, S3ControlError> GetPublicAccessBlockOutcome;
      typedef Aws::Utils::Outcome<GetStorageLensConfigurationResult, S3ControlError> GetStorageLensConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetStorageLensConfigurationTaggingResult, S3ControlError> GetStorageLensConfigurationTaggingOutcome;
      typedef Aws::Utils::Outcome<ListAccessPointsResult, S3ControlError> ListAccessPointsOutcome;
      typedef Aws::Utils::Outcome<ListAccessPointsForObjectLambdaResult, S3ControlError> ListAccessPointsForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, S3ControlError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListMultiRegionAccessPointsResult, S3ControlError> ListMultiRegionAccessPointsOutcome;
      typedef Aws::Utils::Outcome<ListRegionalBucketsResult, S3ControlError> ListRegionalBucketsOutcome;
      typedef Aws::Utils::Outcome<ListStorageLensConfigurationsResult, S3ControlError> ListStorageLensConfigurationsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutAccessPointConfigurationForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutAccessPointPolicyForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketLifecycleConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketTaggingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketVersioningOutcome;
      typedef Aws::Utils::Outcome<PutJobTaggingResult, S3ControlError> PutJobTaggingOutcome;
      typedef Aws::Utils::Outcome<PutMultiRegionAccessPointPolicyResult, S3ControlError> PutMultiRegionAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutPublicAccessBlockOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutStorageLensConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutStorageLensConfigurationTaggingResult, S3ControlError> PutStorageLensConfigurationTaggingOutcome;
      typedef Aws::Utils::Outcome<SubmitMultiRegionAccessPointRoutesResult, S3ControlError> SubmitMultiRegionAccessPointRoutesOutcome;
      typedef Aws::Utils::Outcome<UpdateJobPriorityResult, S3ControlError> UpdateJobPriorityOutcome;
      typedef Aws::Utils::Outcome<UpdateJobStatusResult, S3ControlError> UpdateJobStatusOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAccessPointOutcome> CreateAccessPointOutcomeCallable;
      typedef std::future<CreateAccessPointForObjectLambdaOutcome> CreateAccessPointForObjectLambdaOutcomeCallable;
      typedef std::future<CreateBucketOutcome> CreateBucketOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreateMultiRegionAccessPointOutcome> CreateMultiRegionAccessPointOutcomeCallable;
      typedef std::future<DeleteAccessPointOutcome> DeleteAccessPointOutcomeCallable;
      typedef std::future<DeleteAccessPointForObjectLambdaOutcome> DeleteAccessPointForObjectLambdaOutcomeCallable;
      typedef std::future<DeleteAccessPointPolicyOutcome> DeleteAccessPointPolicyOutcomeCallable;
      typedef std::future<DeleteAccessPointPolicyForObjectLambdaOutcome> DeleteAccessPointPolicyForObjectLambdaOutcomeCallable;
      typedef std::future<DeleteBucketOutcome> DeleteBucketOutcomeCallable;
      typedef std::future<DeleteBucketLifecycleConfigurationOutcome> DeleteBucketLifecycleConfigurationOutcomeCallable;
      typedef std::future<DeleteBucketPolicyOutcome> DeleteBucketPolicyOutcomeCallable;
      typedef std::future<DeleteBucketTaggingOutcome> DeleteBucketTaggingOutcomeCallable;
      typedef std::future<DeleteJobTaggingOutcome> DeleteJobTaggingOutcomeCallable;
      typedef std::future<DeleteMultiRegionAccessPointOutcome> DeleteMultiRegionAccessPointOutcomeCallable;
      typedef std::future<DeletePublicAccessBlockOutcome> DeletePublicAccessBlockOutcomeCallable;
      typedef std::future<DeleteStorageLensConfigurationOutcome> DeleteStorageLensConfigurationOutcomeCallable;
      typedef std::future<DeleteStorageLensConfigurationTaggingOutcome> DeleteStorageLensConfigurationTaggingOutcomeCallable;
      typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
      typedef std::future<DescribeMultiRegionAccessPointOperationOutcome> DescribeMultiRegionAccessPointOperationOutcomeCallable;
      typedef std::future<GetAccessPointOutcome> GetAccessPointOutcomeCallable;
      typedef std::future<GetAccessPointConfigurationForObjectLambdaOutcome> GetAccessPointConfigurationForObjectLambdaOutcomeCallable;
      typedef std::future<GetAccessPointForObjectLambdaOutcome> GetAccessPointForObjectLambdaOutcomeCallable;
      typedef std::future<GetAccessPointPolicyOutcome> GetAccessPointPolicyOutcomeCallable;
      typedef std::future<GetAccessPointPolicyForObjectLambdaOutcome> GetAccessPointPolicyForObjectLambdaOutcomeCallable;
      typedef std::future<GetAccessPointPolicyStatusOutcome> GetAccessPointPolicyStatusOutcomeCallable;
      typedef std::future<GetAccessPointPolicyStatusForObjectLambdaOutcome> GetAccessPointPolicyStatusForObjectLambdaOutcomeCallable;
      typedef std::future<GetBucketOutcome> GetBucketOutcomeCallable;
      typedef std::future<GetBucketLifecycleConfigurationOutcome> GetBucketLifecycleConfigurationOutcomeCallable;
      typedef std::future<GetBucketPolicyOutcome> GetBucketPolicyOutcomeCallable;
      typedef std::future<GetBucketTaggingOutcome> GetBucketTaggingOutcomeCallable;
      typedef std::future<GetBucketVersioningOutcome> GetBucketVersioningOutcomeCallable;
      typedef std::future<GetJobTaggingOutcome> GetJobTaggingOutcomeCallable;
      typedef std::future<GetMultiRegionAccessPointOutcome> GetMultiRegionAccessPointOutcomeCallable;
      typedef std::future<GetMultiRegionAccessPointPolicyOutcome> GetMultiRegionAccessPointPolicyOutcomeCallable;
      typedef std::future<GetMultiRegionAccessPointPolicyStatusOutcome> GetMultiRegionAccessPointPolicyStatusOutcomeCallable;
      typedef std::future<GetMultiRegionAccessPointRoutesOutcome> GetMultiRegionAccessPointRoutesOutcomeCallable;
      typedef std::future<GetPublicAccessBlockOutcome> GetPublicAccessBlockOutcomeCallable;
      typedef std::future<GetStorageLensConfigurationOutcome> GetStorageLensConfigurationOutcomeCallable;
      typedef std::future<GetStorageLensConfigurationTaggingOutcome> GetStorageLensConfigurationTaggingOutcomeCallable;
      typedef std::future<ListAccessPointsOutcome> ListAccessPointsOutcomeCallable;
      typedef std::future<ListAccessPointsForObjectLambdaOutcome> ListAccessPointsForObjectLambdaOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListMultiRegionAccessPointsOutcome> ListMultiRegionAccessPointsOutcomeCallable;
      typedef std::future<ListRegionalBucketsOutcome> ListRegionalBucketsOutcomeCallable;
      typedef std::future<ListStorageLensConfigurationsOutcome> ListStorageLensConfigurationsOutcomeCallable;
      typedef std::future<PutAccessPointConfigurationForObjectLambdaOutcome> PutAccessPointConfigurationForObjectLambdaOutcomeCallable;
      typedef std::future<PutAccessPointPolicyOutcome> PutAccessPointPolicyOutcomeCallable;
      typedef std::future<PutAccessPointPolicyForObjectLambdaOutcome> PutAccessPointPolicyForObjectLambdaOutcomeCallable;
      typedef std::future<PutBucketLifecycleConfigurationOutcome> PutBucketLifecycleConfigurationOutcomeCallable;
      typedef std::future<PutBucketPolicyOutcome> PutBucketPolicyOutcomeCallable;
      typedef std::future<PutBucketTaggingOutcome> PutBucketTaggingOutcomeCallable;
      typedef std::future<PutBucketVersioningOutcome> PutBucketVersioningOutcomeCallable;
      typedef std::future<PutJobTaggingOutcome> PutJobTaggingOutcomeCallable;
      typedef std::future<PutMultiRegionAccessPointPolicyOutcome> PutMultiRegionAccessPointPolicyOutcomeCallable;
      typedef std::future<PutPublicAccessBlockOutcome> PutPublicAccessBlockOutcomeCallable;
      typedef std::future<PutStorageLensConfigurationOutcome> PutStorageLensConfigurationOutcomeCallable;
      typedef std::future<PutStorageLensConfigurationTaggingOutcome> PutStorageLensConfigurationTaggingOutcomeCallable;
      typedef std::future<SubmitMultiRegionAccessPointRoutesOutcome> SubmitMultiRegionAccessPointRoutesOutcomeCallable;
      typedef std::future<UpdateJobPriorityOutcome> UpdateJobPriorityOutcomeCallable;
      typedef std::future<UpdateJobStatusOutcome> UpdateJobStatusOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class S3ControlClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessPointRequest&, const Model::CreateAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessPointForObjectLambdaRequest&, const Model::CreateAccessPointForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPointForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateBucketRequest&, const Model::CreateBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateMultiRegionAccessPointRequest&, const Model::CreateMultiRegionAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiRegionAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointRequest&, const Model::DeleteAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointForObjectLambdaRequest&, const Model::DeleteAccessPointForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointPolicyRequest&, const Model::DeleteAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointPolicyForObjectLambdaRequest&, const Model::DeleteAccessPointPolicyForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointPolicyForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketRequest&, const Model::DeleteBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketLifecycleConfigurationRequest&, const Model::DeleteBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketPolicyRequest&, const Model::DeleteBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketTaggingRequest&, const Model::DeleteBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteJobTaggingRequest&, const Model::DeleteJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteMultiRegionAccessPointRequest&, const Model::DeleteMultiRegionAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiRegionAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeletePublicAccessBlockRequest&, const Model::DeletePublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteStorageLensConfigurationRequest&, const Model::DeleteStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteStorageLensConfigurationTaggingRequest&, const Model::DeleteStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DescribeMultiRegionAccessPointOperationRequest&, const Model::DescribeMultiRegionAccessPointOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiRegionAccessPointOperationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointRequest&, const Model::GetAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointConfigurationForObjectLambdaRequest&, const Model::GetAccessPointConfigurationForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointConfigurationForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointForObjectLambdaRequest&, const Model::GetAccessPointForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyRequest&, const Model::GetAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyForObjectLambdaRequest&, const Model::GetAccessPointPolicyForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyStatusRequest&, const Model::GetAccessPointPolicyStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyStatusResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyStatusForObjectLambdaRequest&, const Model::GetAccessPointPolicyStatusForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyStatusForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketRequest&, const Model::GetBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketLifecycleConfigurationRequest&, const Model::GetBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketPolicyRequest&, const Model::GetBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketTaggingRequest&, const Model::GetBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketVersioningRequest&, const Model::GetBucketVersioningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketVersioningResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetJobTaggingRequest&, const Model::GetJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetMultiRegionAccessPointRequest&, const Model::GetMultiRegionAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMultiRegionAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetMultiRegionAccessPointPolicyRequest&, const Model::GetMultiRegionAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMultiRegionAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetMultiRegionAccessPointPolicyStatusRequest&, const Model::GetMultiRegionAccessPointPolicyStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMultiRegionAccessPointPolicyStatusResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetMultiRegionAccessPointRoutesRequest&, const Model::GetMultiRegionAccessPointRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMultiRegionAccessPointRoutesResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetPublicAccessBlockRequest&, const Model::GetPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetStorageLensConfigurationRequest&, const Model::GetStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetStorageLensConfigurationTaggingRequest&, const Model::GetStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessPointsRequest&, const Model::ListAccessPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPointsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessPointsForObjectLambdaRequest&, const Model::ListAccessPointsForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPointsForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListMultiRegionAccessPointsRequest&, const Model::ListMultiRegionAccessPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultiRegionAccessPointsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListRegionalBucketsRequest&, const Model::ListRegionalBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegionalBucketsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListStorageLensConfigurationsRequest&, const Model::ListStorageLensConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStorageLensConfigurationsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointConfigurationForObjectLambdaRequest&, const Model::PutAccessPointConfigurationForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointConfigurationForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointPolicyRequest&, const Model::PutAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointPolicyForObjectLambdaRequest&, const Model::PutAccessPointPolicyForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointPolicyForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketLifecycleConfigurationRequest&, const Model::PutBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketPolicyRequest&, const Model::PutBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketTaggingRequest&, const Model::PutBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketVersioningRequest&, const Model::PutBucketVersioningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketVersioningResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutJobTaggingRequest&, const Model::PutJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutMultiRegionAccessPointPolicyRequest&, const Model::PutMultiRegionAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMultiRegionAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutPublicAccessBlockRequest&, const Model::PutPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutStorageLensConfigurationRequest&, const Model::PutStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutStorageLensConfigurationTaggingRequest&, const Model::PutStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::SubmitMultiRegionAccessPointRoutesRequest&, const Model::SubmitMultiRegionAccessPointRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitMultiRegionAccessPointRoutesResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateJobPriorityRequest&, const Model::UpdateJobPriorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobPriorityResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateJobStatusRequest&, const Model::UpdateJobStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobStatusResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace S3Control
} // namespace Aws
