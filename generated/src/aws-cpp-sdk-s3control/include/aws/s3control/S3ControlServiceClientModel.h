﻿/**
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
#include <aws/s3control/model/CreateAccessGrantResult.h>
#include <aws/s3control/model/CreateAccessGrantsInstanceResult.h>
#include <aws/s3control/model/CreateAccessGrantsLocationResult.h>
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
#include <aws/s3control/model/GetAccessGrantResult.h>
#include <aws/s3control/model/GetAccessGrantsInstanceResult.h>
#include <aws/s3control/model/GetAccessGrantsInstanceForPrefixResult.h>
#include <aws/s3control/model/GetAccessGrantsInstanceResourcePolicyResult.h>
#include <aws/s3control/model/GetAccessGrantsLocationResult.h>
#include <aws/s3control/model/GetAccessPointResult.h>
#include <aws/s3control/model/GetAccessPointConfigurationForObjectLambdaResult.h>
#include <aws/s3control/model/GetAccessPointForObjectLambdaResult.h>
#include <aws/s3control/model/GetAccessPointPolicyResult.h>
#include <aws/s3control/model/GetAccessPointPolicyForObjectLambdaResult.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusResult.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusForObjectLambdaResult.h>
#include <aws/s3control/model/GetAccessPointScopeResult.h>
#include <aws/s3control/model/GetBucketResult.h>
#include <aws/s3control/model/GetBucketLifecycleConfigurationResult.h>
#include <aws/s3control/model/GetBucketPolicyResult.h>
#include <aws/s3control/model/GetBucketReplicationResult.h>
#include <aws/s3control/model/GetBucketTaggingResult.h>
#include <aws/s3control/model/GetBucketVersioningResult.h>
#include <aws/s3control/model/GetDataAccessResult.h>
#include <aws/s3control/model/GetJobTaggingResult.h>
#include <aws/s3control/model/GetMultiRegionAccessPointResult.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyResult.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyStatusResult.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRoutesResult.h>
#include <aws/s3control/model/GetPublicAccessBlockResult.h>
#include <aws/s3control/model/GetStorageLensConfigurationResult.h>
#include <aws/s3control/model/GetStorageLensConfigurationTaggingResult.h>
#include <aws/s3control/model/GetStorageLensGroupResult.h>
#include <aws/s3control/model/ListAccessGrantsResult.h>
#include <aws/s3control/model/ListAccessGrantsInstancesResult.h>
#include <aws/s3control/model/ListAccessGrantsLocationsResult.h>
#include <aws/s3control/model/ListAccessPointsResult.h>
#include <aws/s3control/model/ListAccessPointsForDirectoryBucketsResult.h>
#include <aws/s3control/model/ListAccessPointsForObjectLambdaResult.h>
#include <aws/s3control/model/ListCallerAccessGrantsResult.h>
#include <aws/s3control/model/ListJobsResult.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsResult.h>
#include <aws/s3control/model/ListRegionalBucketsResult.h>
#include <aws/s3control/model/ListStorageLensConfigurationsResult.h>
#include <aws/s3control/model/ListStorageLensGroupsResult.h>
#include <aws/s3control/model/ListTagsForResourceResult.h>
#include <aws/s3control/model/PutAccessGrantsInstanceResourcePolicyResult.h>
#include <aws/s3control/model/PutJobTaggingResult.h>
#include <aws/s3control/model/PutMultiRegionAccessPointPolicyResult.h>
#include <aws/s3control/model/PutStorageLensConfigurationTaggingResult.h>
#include <aws/s3control/model/SubmitMultiRegionAccessPointRoutesResult.h>
#include <aws/s3control/model/TagResourceResult.h>
#include <aws/s3control/model/UntagResourceResult.h>
#include <aws/s3control/model/UpdateAccessGrantsLocationResult.h>
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
      class AssociateAccessGrantsIdentityCenterRequest;
      class CreateAccessGrantRequest;
      class CreateAccessGrantsInstanceRequest;
      class CreateAccessGrantsLocationRequest;
      class CreateAccessPointRequest;
      class CreateAccessPointForObjectLambdaRequest;
      class CreateBucketRequest;
      class CreateJobRequest;
      class CreateMultiRegionAccessPointRequest;
      class CreateStorageLensGroupRequest;
      class DeleteAccessGrantRequest;
      class DeleteAccessGrantsInstanceRequest;
      class DeleteAccessGrantsInstanceResourcePolicyRequest;
      class DeleteAccessGrantsLocationRequest;
      class DeleteAccessPointRequest;
      class DeleteAccessPointForObjectLambdaRequest;
      class DeleteAccessPointPolicyRequest;
      class DeleteAccessPointPolicyForObjectLambdaRequest;
      class DeleteAccessPointScopeRequest;
      class DeleteBucketRequest;
      class DeleteBucketLifecycleConfigurationRequest;
      class DeleteBucketPolicyRequest;
      class DeleteBucketReplicationRequest;
      class DeleteBucketTaggingRequest;
      class DeleteJobTaggingRequest;
      class DeleteMultiRegionAccessPointRequest;
      class DeletePublicAccessBlockRequest;
      class DeleteStorageLensConfigurationRequest;
      class DeleteStorageLensConfigurationTaggingRequest;
      class DeleteStorageLensGroupRequest;
      class DescribeJobRequest;
      class DescribeMultiRegionAccessPointOperationRequest;
      class DissociateAccessGrantsIdentityCenterRequest;
      class GetAccessGrantRequest;
      class GetAccessGrantsInstanceRequest;
      class GetAccessGrantsInstanceForPrefixRequest;
      class GetAccessGrantsInstanceResourcePolicyRequest;
      class GetAccessGrantsLocationRequest;
      class GetAccessPointRequest;
      class GetAccessPointConfigurationForObjectLambdaRequest;
      class GetAccessPointForObjectLambdaRequest;
      class GetAccessPointPolicyRequest;
      class GetAccessPointPolicyForObjectLambdaRequest;
      class GetAccessPointPolicyStatusRequest;
      class GetAccessPointPolicyStatusForObjectLambdaRequest;
      class GetAccessPointScopeRequest;
      class GetBucketRequest;
      class GetBucketLifecycleConfigurationRequest;
      class GetBucketPolicyRequest;
      class GetBucketReplicationRequest;
      class GetBucketTaggingRequest;
      class GetBucketVersioningRequest;
      class GetDataAccessRequest;
      class GetJobTaggingRequest;
      class GetMultiRegionAccessPointRequest;
      class GetMultiRegionAccessPointPolicyRequest;
      class GetMultiRegionAccessPointPolicyStatusRequest;
      class GetMultiRegionAccessPointRoutesRequest;
      class GetPublicAccessBlockRequest;
      class GetStorageLensConfigurationRequest;
      class GetStorageLensConfigurationTaggingRequest;
      class GetStorageLensGroupRequest;
      class ListAccessGrantsRequest;
      class ListAccessGrantsInstancesRequest;
      class ListAccessGrantsLocationsRequest;
      class ListAccessPointsRequest;
      class ListAccessPointsForDirectoryBucketsRequest;
      class ListAccessPointsForObjectLambdaRequest;
      class ListCallerAccessGrantsRequest;
      class ListJobsRequest;
      class ListMultiRegionAccessPointsRequest;
      class ListRegionalBucketsRequest;
      class ListStorageLensConfigurationsRequest;
      class ListStorageLensGroupsRequest;
      class ListTagsForResourceRequest;
      class PutAccessGrantsInstanceResourcePolicyRequest;
      class PutAccessPointConfigurationForObjectLambdaRequest;
      class PutAccessPointPolicyRequest;
      class PutAccessPointPolicyForObjectLambdaRequest;
      class PutAccessPointScopeRequest;
      class PutBucketLifecycleConfigurationRequest;
      class PutBucketPolicyRequest;
      class PutBucketReplicationRequest;
      class PutBucketTaggingRequest;
      class PutBucketVersioningRequest;
      class PutJobTaggingRequest;
      class PutMultiRegionAccessPointPolicyRequest;
      class PutPublicAccessBlockRequest;
      class PutStorageLensConfigurationRequest;
      class PutStorageLensConfigurationTaggingRequest;
      class SubmitMultiRegionAccessPointRoutesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccessGrantsLocationRequest;
      class UpdateJobPriorityRequest;
      class UpdateJobStatusRequest;
      class UpdateStorageLensGroupRequest;
      /* End of service model forward declarations required in S3ControlClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> AssociateAccessGrantsIdentityCenterOutcome;
      typedef Aws::Utils::Outcome<CreateAccessGrantResult, S3ControlError> CreateAccessGrantOutcome;
      typedef Aws::Utils::Outcome<CreateAccessGrantsInstanceResult, S3ControlError> CreateAccessGrantsInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateAccessGrantsLocationResult, S3ControlError> CreateAccessGrantsLocationOutcome;
      typedef Aws::Utils::Outcome<CreateAccessPointResult, S3ControlError> CreateAccessPointOutcome;
      typedef Aws::Utils::Outcome<CreateAccessPointForObjectLambdaResult, S3ControlError> CreateAccessPointForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<CreateBucketResult, S3ControlError> CreateBucketOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, S3ControlError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreateMultiRegionAccessPointResult, S3ControlError> CreateMultiRegionAccessPointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> CreateStorageLensGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessGrantOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessGrantsInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessGrantsInstanceResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessGrantsLocationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointPolicyForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteAccessPointScopeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketLifecycleConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketReplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteBucketTaggingOutcome;
      typedef Aws::Utils::Outcome<DeleteJobTaggingResult, S3ControlError> DeleteJobTaggingOutcome;
      typedef Aws::Utils::Outcome<DeleteMultiRegionAccessPointResult, S3ControlError> DeleteMultiRegionAccessPointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeletePublicAccessBlockOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteStorageLensConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteStorageLensConfigurationTaggingResult, S3ControlError> DeleteStorageLensConfigurationTaggingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DeleteStorageLensGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeJobResult, S3ControlError> DescribeJobOutcome;
      typedef Aws::Utils::Outcome<DescribeMultiRegionAccessPointOperationResult, S3ControlError> DescribeMultiRegionAccessPointOperationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> DissociateAccessGrantsIdentityCenterOutcome;
      typedef Aws::Utils::Outcome<GetAccessGrantResult, S3ControlError> GetAccessGrantOutcome;
      typedef Aws::Utils::Outcome<GetAccessGrantsInstanceResult, S3ControlError> GetAccessGrantsInstanceOutcome;
      typedef Aws::Utils::Outcome<GetAccessGrantsInstanceForPrefixResult, S3ControlError> GetAccessGrantsInstanceForPrefixOutcome;
      typedef Aws::Utils::Outcome<GetAccessGrantsInstanceResourcePolicyResult, S3ControlError> GetAccessGrantsInstanceResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetAccessGrantsLocationResult, S3ControlError> GetAccessGrantsLocationOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointResult, S3ControlError> GetAccessPointOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointConfigurationForObjectLambdaResult, S3ControlError> GetAccessPointConfigurationForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointForObjectLambdaResult, S3ControlError> GetAccessPointForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointPolicyResult, S3ControlError> GetAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointPolicyForObjectLambdaResult, S3ControlError> GetAccessPointPolicyForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointPolicyStatusResult, S3ControlError> GetAccessPointPolicyStatusOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointPolicyStatusForObjectLambdaResult, S3ControlError> GetAccessPointPolicyStatusForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<GetAccessPointScopeResult, S3ControlError> GetAccessPointScopeOutcome;
      typedef Aws::Utils::Outcome<GetBucketResult, S3ControlError> GetBucketOutcome;
      typedef Aws::Utils::Outcome<GetBucketLifecycleConfigurationResult, S3ControlError> GetBucketLifecycleConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetBucketPolicyResult, S3ControlError> GetBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<GetBucketReplicationResult, S3ControlError> GetBucketReplicationOutcome;
      typedef Aws::Utils::Outcome<GetBucketTaggingResult, S3ControlError> GetBucketTaggingOutcome;
      typedef Aws::Utils::Outcome<GetBucketVersioningResult, S3ControlError> GetBucketVersioningOutcome;
      typedef Aws::Utils::Outcome<GetDataAccessResult, S3ControlError> GetDataAccessOutcome;
      typedef Aws::Utils::Outcome<GetJobTaggingResult, S3ControlError> GetJobTaggingOutcome;
      typedef Aws::Utils::Outcome<GetMultiRegionAccessPointResult, S3ControlError> GetMultiRegionAccessPointOutcome;
      typedef Aws::Utils::Outcome<GetMultiRegionAccessPointPolicyResult, S3ControlError> GetMultiRegionAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<GetMultiRegionAccessPointPolicyStatusResult, S3ControlError> GetMultiRegionAccessPointPolicyStatusOutcome;
      typedef Aws::Utils::Outcome<GetMultiRegionAccessPointRoutesResult, S3ControlError> GetMultiRegionAccessPointRoutesOutcome;
      typedef Aws::Utils::Outcome<GetPublicAccessBlockResult, S3ControlError> GetPublicAccessBlockOutcome;
      typedef Aws::Utils::Outcome<GetStorageLensConfigurationResult, S3ControlError> GetStorageLensConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetStorageLensConfigurationTaggingResult, S3ControlError> GetStorageLensConfigurationTaggingOutcome;
      typedef Aws::Utils::Outcome<GetStorageLensGroupResult, S3ControlError> GetStorageLensGroupOutcome;
      typedef Aws::Utils::Outcome<ListAccessGrantsResult, S3ControlError> ListAccessGrantsOutcome;
      typedef Aws::Utils::Outcome<ListAccessGrantsInstancesResult, S3ControlError> ListAccessGrantsInstancesOutcome;
      typedef Aws::Utils::Outcome<ListAccessGrantsLocationsResult, S3ControlError> ListAccessGrantsLocationsOutcome;
      typedef Aws::Utils::Outcome<ListAccessPointsResult, S3ControlError> ListAccessPointsOutcome;
      typedef Aws::Utils::Outcome<ListAccessPointsForDirectoryBucketsResult, S3ControlError> ListAccessPointsForDirectoryBucketsOutcome;
      typedef Aws::Utils::Outcome<ListAccessPointsForObjectLambdaResult, S3ControlError> ListAccessPointsForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<ListCallerAccessGrantsResult, S3ControlError> ListCallerAccessGrantsOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, S3ControlError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListMultiRegionAccessPointsResult, S3ControlError> ListMultiRegionAccessPointsOutcome;
      typedef Aws::Utils::Outcome<ListRegionalBucketsResult, S3ControlError> ListRegionalBucketsOutcome;
      typedef Aws::Utils::Outcome<ListStorageLensConfigurationsResult, S3ControlError> ListStorageLensConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListStorageLensGroupsResult, S3ControlError> ListStorageLensGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, S3ControlError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutAccessGrantsInstanceResourcePolicyResult, S3ControlError> PutAccessGrantsInstanceResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutAccessPointConfigurationForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutAccessPointPolicyForObjectLambdaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutAccessPointScopeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketLifecycleConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketReplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketTaggingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutBucketVersioningOutcome;
      typedef Aws::Utils::Outcome<PutJobTaggingResult, S3ControlError> PutJobTaggingOutcome;
      typedef Aws::Utils::Outcome<PutMultiRegionAccessPointPolicyResult, S3ControlError> PutMultiRegionAccessPointPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutPublicAccessBlockOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> PutStorageLensConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutStorageLensConfigurationTaggingResult, S3ControlError> PutStorageLensConfigurationTaggingOutcome;
      typedef Aws::Utils::Outcome<SubmitMultiRegionAccessPointRoutesResult, S3ControlError> SubmitMultiRegionAccessPointRoutesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, S3ControlError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, S3ControlError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccessGrantsLocationResult, S3ControlError> UpdateAccessGrantsLocationOutcome;
      typedef Aws::Utils::Outcome<UpdateJobPriorityResult, S3ControlError> UpdateJobPriorityOutcome;
      typedef Aws::Utils::Outcome<UpdateJobStatusResult, S3ControlError> UpdateJobStatusOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3ControlError> UpdateStorageLensGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAccessGrantsIdentityCenterOutcome> AssociateAccessGrantsIdentityCenterOutcomeCallable;
      typedef std::future<CreateAccessGrantOutcome> CreateAccessGrantOutcomeCallable;
      typedef std::future<CreateAccessGrantsInstanceOutcome> CreateAccessGrantsInstanceOutcomeCallable;
      typedef std::future<CreateAccessGrantsLocationOutcome> CreateAccessGrantsLocationOutcomeCallable;
      typedef std::future<CreateAccessPointOutcome> CreateAccessPointOutcomeCallable;
      typedef std::future<CreateAccessPointForObjectLambdaOutcome> CreateAccessPointForObjectLambdaOutcomeCallable;
      typedef std::future<CreateBucketOutcome> CreateBucketOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreateMultiRegionAccessPointOutcome> CreateMultiRegionAccessPointOutcomeCallable;
      typedef std::future<CreateStorageLensGroupOutcome> CreateStorageLensGroupOutcomeCallable;
      typedef std::future<DeleteAccessGrantOutcome> DeleteAccessGrantOutcomeCallable;
      typedef std::future<DeleteAccessGrantsInstanceOutcome> DeleteAccessGrantsInstanceOutcomeCallable;
      typedef std::future<DeleteAccessGrantsInstanceResourcePolicyOutcome> DeleteAccessGrantsInstanceResourcePolicyOutcomeCallable;
      typedef std::future<DeleteAccessGrantsLocationOutcome> DeleteAccessGrantsLocationOutcomeCallable;
      typedef std::future<DeleteAccessPointOutcome> DeleteAccessPointOutcomeCallable;
      typedef std::future<DeleteAccessPointForObjectLambdaOutcome> DeleteAccessPointForObjectLambdaOutcomeCallable;
      typedef std::future<DeleteAccessPointPolicyOutcome> DeleteAccessPointPolicyOutcomeCallable;
      typedef std::future<DeleteAccessPointPolicyForObjectLambdaOutcome> DeleteAccessPointPolicyForObjectLambdaOutcomeCallable;
      typedef std::future<DeleteAccessPointScopeOutcome> DeleteAccessPointScopeOutcomeCallable;
      typedef std::future<DeleteBucketOutcome> DeleteBucketOutcomeCallable;
      typedef std::future<DeleteBucketLifecycleConfigurationOutcome> DeleteBucketLifecycleConfigurationOutcomeCallable;
      typedef std::future<DeleteBucketPolicyOutcome> DeleteBucketPolicyOutcomeCallable;
      typedef std::future<DeleteBucketReplicationOutcome> DeleteBucketReplicationOutcomeCallable;
      typedef std::future<DeleteBucketTaggingOutcome> DeleteBucketTaggingOutcomeCallable;
      typedef std::future<DeleteJobTaggingOutcome> DeleteJobTaggingOutcomeCallable;
      typedef std::future<DeleteMultiRegionAccessPointOutcome> DeleteMultiRegionAccessPointOutcomeCallable;
      typedef std::future<DeletePublicAccessBlockOutcome> DeletePublicAccessBlockOutcomeCallable;
      typedef std::future<DeleteStorageLensConfigurationOutcome> DeleteStorageLensConfigurationOutcomeCallable;
      typedef std::future<DeleteStorageLensConfigurationTaggingOutcome> DeleteStorageLensConfigurationTaggingOutcomeCallable;
      typedef std::future<DeleteStorageLensGroupOutcome> DeleteStorageLensGroupOutcomeCallable;
      typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
      typedef std::future<DescribeMultiRegionAccessPointOperationOutcome> DescribeMultiRegionAccessPointOperationOutcomeCallable;
      typedef std::future<DissociateAccessGrantsIdentityCenterOutcome> DissociateAccessGrantsIdentityCenterOutcomeCallable;
      typedef std::future<GetAccessGrantOutcome> GetAccessGrantOutcomeCallable;
      typedef std::future<GetAccessGrantsInstanceOutcome> GetAccessGrantsInstanceOutcomeCallable;
      typedef std::future<GetAccessGrantsInstanceForPrefixOutcome> GetAccessGrantsInstanceForPrefixOutcomeCallable;
      typedef std::future<GetAccessGrantsInstanceResourcePolicyOutcome> GetAccessGrantsInstanceResourcePolicyOutcomeCallable;
      typedef std::future<GetAccessGrantsLocationOutcome> GetAccessGrantsLocationOutcomeCallable;
      typedef std::future<GetAccessPointOutcome> GetAccessPointOutcomeCallable;
      typedef std::future<GetAccessPointConfigurationForObjectLambdaOutcome> GetAccessPointConfigurationForObjectLambdaOutcomeCallable;
      typedef std::future<GetAccessPointForObjectLambdaOutcome> GetAccessPointForObjectLambdaOutcomeCallable;
      typedef std::future<GetAccessPointPolicyOutcome> GetAccessPointPolicyOutcomeCallable;
      typedef std::future<GetAccessPointPolicyForObjectLambdaOutcome> GetAccessPointPolicyForObjectLambdaOutcomeCallable;
      typedef std::future<GetAccessPointPolicyStatusOutcome> GetAccessPointPolicyStatusOutcomeCallable;
      typedef std::future<GetAccessPointPolicyStatusForObjectLambdaOutcome> GetAccessPointPolicyStatusForObjectLambdaOutcomeCallable;
      typedef std::future<GetAccessPointScopeOutcome> GetAccessPointScopeOutcomeCallable;
      typedef std::future<GetBucketOutcome> GetBucketOutcomeCallable;
      typedef std::future<GetBucketLifecycleConfigurationOutcome> GetBucketLifecycleConfigurationOutcomeCallable;
      typedef std::future<GetBucketPolicyOutcome> GetBucketPolicyOutcomeCallable;
      typedef std::future<GetBucketReplicationOutcome> GetBucketReplicationOutcomeCallable;
      typedef std::future<GetBucketTaggingOutcome> GetBucketTaggingOutcomeCallable;
      typedef std::future<GetBucketVersioningOutcome> GetBucketVersioningOutcomeCallable;
      typedef std::future<GetDataAccessOutcome> GetDataAccessOutcomeCallable;
      typedef std::future<GetJobTaggingOutcome> GetJobTaggingOutcomeCallable;
      typedef std::future<GetMultiRegionAccessPointOutcome> GetMultiRegionAccessPointOutcomeCallable;
      typedef std::future<GetMultiRegionAccessPointPolicyOutcome> GetMultiRegionAccessPointPolicyOutcomeCallable;
      typedef std::future<GetMultiRegionAccessPointPolicyStatusOutcome> GetMultiRegionAccessPointPolicyStatusOutcomeCallable;
      typedef std::future<GetMultiRegionAccessPointRoutesOutcome> GetMultiRegionAccessPointRoutesOutcomeCallable;
      typedef std::future<GetPublicAccessBlockOutcome> GetPublicAccessBlockOutcomeCallable;
      typedef std::future<GetStorageLensConfigurationOutcome> GetStorageLensConfigurationOutcomeCallable;
      typedef std::future<GetStorageLensConfigurationTaggingOutcome> GetStorageLensConfigurationTaggingOutcomeCallable;
      typedef std::future<GetStorageLensGroupOutcome> GetStorageLensGroupOutcomeCallable;
      typedef std::future<ListAccessGrantsOutcome> ListAccessGrantsOutcomeCallable;
      typedef std::future<ListAccessGrantsInstancesOutcome> ListAccessGrantsInstancesOutcomeCallable;
      typedef std::future<ListAccessGrantsLocationsOutcome> ListAccessGrantsLocationsOutcomeCallable;
      typedef std::future<ListAccessPointsOutcome> ListAccessPointsOutcomeCallable;
      typedef std::future<ListAccessPointsForDirectoryBucketsOutcome> ListAccessPointsForDirectoryBucketsOutcomeCallable;
      typedef std::future<ListAccessPointsForObjectLambdaOutcome> ListAccessPointsForObjectLambdaOutcomeCallable;
      typedef std::future<ListCallerAccessGrantsOutcome> ListCallerAccessGrantsOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListMultiRegionAccessPointsOutcome> ListMultiRegionAccessPointsOutcomeCallable;
      typedef std::future<ListRegionalBucketsOutcome> ListRegionalBucketsOutcomeCallable;
      typedef std::future<ListStorageLensConfigurationsOutcome> ListStorageLensConfigurationsOutcomeCallable;
      typedef std::future<ListStorageLensGroupsOutcome> ListStorageLensGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutAccessGrantsInstanceResourcePolicyOutcome> PutAccessGrantsInstanceResourcePolicyOutcomeCallable;
      typedef std::future<PutAccessPointConfigurationForObjectLambdaOutcome> PutAccessPointConfigurationForObjectLambdaOutcomeCallable;
      typedef std::future<PutAccessPointPolicyOutcome> PutAccessPointPolicyOutcomeCallable;
      typedef std::future<PutAccessPointPolicyForObjectLambdaOutcome> PutAccessPointPolicyForObjectLambdaOutcomeCallable;
      typedef std::future<PutAccessPointScopeOutcome> PutAccessPointScopeOutcomeCallable;
      typedef std::future<PutBucketLifecycleConfigurationOutcome> PutBucketLifecycleConfigurationOutcomeCallable;
      typedef std::future<PutBucketPolicyOutcome> PutBucketPolicyOutcomeCallable;
      typedef std::future<PutBucketReplicationOutcome> PutBucketReplicationOutcomeCallable;
      typedef std::future<PutBucketTaggingOutcome> PutBucketTaggingOutcomeCallable;
      typedef std::future<PutBucketVersioningOutcome> PutBucketVersioningOutcomeCallable;
      typedef std::future<PutJobTaggingOutcome> PutJobTaggingOutcomeCallable;
      typedef std::future<PutMultiRegionAccessPointPolicyOutcome> PutMultiRegionAccessPointPolicyOutcomeCallable;
      typedef std::future<PutPublicAccessBlockOutcome> PutPublicAccessBlockOutcomeCallable;
      typedef std::future<PutStorageLensConfigurationOutcome> PutStorageLensConfigurationOutcomeCallable;
      typedef std::future<PutStorageLensConfigurationTaggingOutcome> PutStorageLensConfigurationTaggingOutcomeCallable;
      typedef std::future<SubmitMultiRegionAccessPointRoutesOutcome> SubmitMultiRegionAccessPointRoutesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccessGrantsLocationOutcome> UpdateAccessGrantsLocationOutcomeCallable;
      typedef std::future<UpdateJobPriorityOutcome> UpdateJobPriorityOutcomeCallable;
      typedef std::future<UpdateJobStatusOutcome> UpdateJobStatusOutcomeCallable;
      typedef std::future<UpdateStorageLensGroupOutcome> UpdateStorageLensGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class S3ControlClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const S3ControlClient*, const Model::AssociateAccessGrantsIdentityCenterRequest&, const Model::AssociateAccessGrantsIdentityCenterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAccessGrantsIdentityCenterResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessGrantRequest&, const Model::CreateAccessGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessGrantResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessGrantsInstanceRequest&, const Model::CreateAccessGrantsInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessGrantsInstanceResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessGrantsLocationRequest&, const Model::CreateAccessGrantsLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessGrantsLocationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessPointRequest&, const Model::CreateAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateAccessPointForObjectLambdaRequest&, const Model::CreateAccessPointForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPointForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateBucketRequest&, const Model::CreateBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateMultiRegionAccessPointRequest&, const Model::CreateMultiRegionAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiRegionAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::CreateStorageLensGroupRequest&, const Model::CreateStorageLensGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStorageLensGroupResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessGrantRequest&, const Model::DeleteAccessGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessGrantResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessGrantsInstanceRequest&, const Model::DeleteAccessGrantsInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessGrantsInstanceResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessGrantsInstanceResourcePolicyRequest&, const Model::DeleteAccessGrantsInstanceResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessGrantsInstanceResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessGrantsLocationRequest&, const Model::DeleteAccessGrantsLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessGrantsLocationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointRequest&, const Model::DeleteAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointForObjectLambdaRequest&, const Model::DeleteAccessPointForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointPolicyRequest&, const Model::DeleteAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointPolicyForObjectLambdaRequest&, const Model::DeleteAccessPointPolicyForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointPolicyForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteAccessPointScopeRequest&, const Model::DeleteAccessPointScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPointScopeResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketRequest&, const Model::DeleteBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketLifecycleConfigurationRequest&, const Model::DeleteBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketPolicyRequest&, const Model::DeleteBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketReplicationRequest&, const Model::DeleteBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteBucketTaggingRequest&, const Model::DeleteBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteJobTaggingRequest&, const Model::DeleteJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteMultiRegionAccessPointRequest&, const Model::DeleteMultiRegionAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiRegionAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeletePublicAccessBlockRequest&, const Model::DeletePublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteStorageLensConfigurationRequest&, const Model::DeleteStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteStorageLensConfigurationTaggingRequest&, const Model::DeleteStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DeleteStorageLensGroupRequest&, const Model::DeleteStorageLensGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageLensGroupResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DescribeMultiRegionAccessPointOperationRequest&, const Model::DescribeMultiRegionAccessPointOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiRegionAccessPointOperationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::DissociateAccessGrantsIdentityCenterRequest&, const Model::DissociateAccessGrantsIdentityCenterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DissociateAccessGrantsIdentityCenterResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessGrantRequest&, const Model::GetAccessGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessGrantResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessGrantsInstanceRequest&, const Model::GetAccessGrantsInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessGrantsInstanceResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessGrantsInstanceForPrefixRequest&, const Model::GetAccessGrantsInstanceForPrefixOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessGrantsInstanceForPrefixResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessGrantsInstanceResourcePolicyRequest&, const Model::GetAccessGrantsInstanceResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessGrantsInstanceResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessGrantsLocationRequest&, const Model::GetAccessGrantsLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessGrantsLocationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointRequest&, const Model::GetAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointConfigurationForObjectLambdaRequest&, const Model::GetAccessPointConfigurationForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointConfigurationForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointForObjectLambdaRequest&, const Model::GetAccessPointForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyRequest&, const Model::GetAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyForObjectLambdaRequest&, const Model::GetAccessPointPolicyForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyStatusRequest&, const Model::GetAccessPointPolicyStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyStatusResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointPolicyStatusForObjectLambdaRequest&, const Model::GetAccessPointPolicyStatusForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointPolicyStatusForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetAccessPointScopeRequest&, const Model::GetAccessPointScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPointScopeResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketRequest&, const Model::GetBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketLifecycleConfigurationRequest&, const Model::GetBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketPolicyRequest&, const Model::GetBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketReplicationRequest&, const Model::GetBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketTaggingRequest&, const Model::GetBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetBucketVersioningRequest&, const Model::GetBucketVersioningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketVersioningResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetDataAccessRequest&, const Model::GetDataAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataAccessResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetJobTaggingRequest&, const Model::GetJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetMultiRegionAccessPointRequest&, const Model::GetMultiRegionAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMultiRegionAccessPointResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetMultiRegionAccessPointPolicyRequest&, const Model::GetMultiRegionAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMultiRegionAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetMultiRegionAccessPointPolicyStatusRequest&, const Model::GetMultiRegionAccessPointPolicyStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMultiRegionAccessPointPolicyStatusResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetMultiRegionAccessPointRoutesRequest&, const Model::GetMultiRegionAccessPointRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMultiRegionAccessPointRoutesResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetPublicAccessBlockRequest&, const Model::GetPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetStorageLensConfigurationRequest&, const Model::GetStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetStorageLensConfigurationTaggingRequest&, const Model::GetStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::GetStorageLensGroupRequest&, const Model::GetStorageLensGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageLensGroupResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessGrantsRequest&, const Model::ListAccessGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessGrantsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessGrantsInstancesRequest&, const Model::ListAccessGrantsInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessGrantsInstancesResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessGrantsLocationsRequest&, const Model::ListAccessGrantsLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessGrantsLocationsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessPointsRequest&, const Model::ListAccessPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPointsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessPointsForDirectoryBucketsRequest&, const Model::ListAccessPointsForDirectoryBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPointsForDirectoryBucketsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListAccessPointsForObjectLambdaRequest&, const Model::ListAccessPointsForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPointsForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListCallerAccessGrantsRequest&, const Model::ListCallerAccessGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCallerAccessGrantsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListMultiRegionAccessPointsRequest&, const Model::ListMultiRegionAccessPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultiRegionAccessPointsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListRegionalBucketsRequest&, const Model::ListRegionalBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegionalBucketsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListStorageLensConfigurationsRequest&, const Model::ListStorageLensConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStorageLensConfigurationsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListStorageLensGroupsRequest&, const Model::ListStorageLensGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStorageLensGroupsResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessGrantsInstanceResourcePolicyRequest&, const Model::PutAccessGrantsInstanceResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessGrantsInstanceResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointConfigurationForObjectLambdaRequest&, const Model::PutAccessPointConfigurationForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointConfigurationForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointPolicyRequest&, const Model::PutAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointPolicyForObjectLambdaRequest&, const Model::PutAccessPointPolicyForObjectLambdaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointPolicyForObjectLambdaResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutAccessPointScopeRequest&, const Model::PutAccessPointScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessPointScopeResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketLifecycleConfigurationRequest&, const Model::PutBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketPolicyRequest&, const Model::PutBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketReplicationRequest&, const Model::PutBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketTaggingRequest&, const Model::PutBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutBucketVersioningRequest&, const Model::PutBucketVersioningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketVersioningResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutJobTaggingRequest&, const Model::PutJobTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutMultiRegionAccessPointPolicyRequest&, const Model::PutMultiRegionAccessPointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMultiRegionAccessPointPolicyResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutPublicAccessBlockRequest&, const Model::PutPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutStorageLensConfigurationRequest&, const Model::PutStorageLensConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStorageLensConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::PutStorageLensConfigurationTaggingRequest&, const Model::PutStorageLensConfigurationTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStorageLensConfigurationTaggingResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::SubmitMultiRegionAccessPointRoutesRequest&, const Model::SubmitMultiRegionAccessPointRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitMultiRegionAccessPointRoutesResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateAccessGrantsLocationRequest&, const Model::UpdateAccessGrantsLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessGrantsLocationResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateJobPriorityRequest&, const Model::UpdateJobPriorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobPriorityResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateJobStatusRequest&, const Model::UpdateJobStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobStatusResponseReceivedHandler;
    typedef std::function<void(const S3ControlClient*, const Model::UpdateStorageLensGroupRequest&, const Model::UpdateStorageLensGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStorageLensGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace S3Control
} // namespace Aws
