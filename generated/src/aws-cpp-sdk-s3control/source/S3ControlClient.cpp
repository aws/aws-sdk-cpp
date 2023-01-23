/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/platform/Environment.h>

#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/S3ControlErrorMarshaller.h>
#include <aws/s3control/S3ControlEndpointProvider.h>
#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/s3control/model/CreateAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/CreateBucketRequest.h>
#include <aws/s3control/model/CreateJobRequest.h>
#include <aws/s3control/model/CreateMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/DeleteAccessPointRequest.h>
#include <aws/s3control/model/DeleteAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/DeleteBucketRequest.h>
#include <aws/s3control/model/DeleteBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/DeleteBucketPolicyRequest.h>
#include <aws/s3control/model/DeleteBucketTaggingRequest.h>
#include <aws/s3control/model/DeleteJobTaggingRequest.h>
#include <aws/s3control/model/DeleteMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationRequest.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/DescribeJobRequest.h>
#include <aws/s3control/model/DescribeMultiRegionAccessPointOperationRequest.h>
#include <aws/s3control/model/GetAccessPointRequest.h>
#include <aws/s3control/model/GetAccessPointConfigurationForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusForObjectLambdaRequest.h>
#include <aws/s3control/model/GetBucketRequest.h>
#include <aws/s3control/model/GetBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/GetBucketPolicyRequest.h>
#include <aws/s3control/model/GetBucketTaggingRequest.h>
#include <aws/s3control/model/GetBucketVersioningRequest.h>
#include <aws/s3control/model/GetJobTaggingRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyStatusRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRoutesRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/GetStorageLensConfigurationRequest.h>
#include <aws/s3control/model/GetStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/ListAccessPointsRequest.h>
#include <aws/s3control/model/ListAccessPointsForObjectLambdaRequest.h>
#include <aws/s3control/model/ListJobsRequest.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsRequest.h>
#include <aws/s3control/model/ListRegionalBucketsRequest.h>
#include <aws/s3control/model/ListStorageLensConfigurationsRequest.h>
#include <aws/s3control/model/PutAccessPointConfigurationForObjectLambdaRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/PutBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/PutBucketPolicyRequest.h>
#include <aws/s3control/model/PutBucketTaggingRequest.h>
#include <aws/s3control/model/PutBucketVersioningRequest.h>
#include <aws/s3control/model/PutJobTaggingRequest.h>
#include <aws/s3control/model/PutMultiRegionAccessPointPolicyRequest.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
#include <aws/s3control/model/PutStorageLensConfigurationRequest.h>
#include <aws/s3control/model/PutStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/SubmitMultiRegionAccessPointRoutesRequest.h>
#include <aws/s3control/model/UpdateJobPriorityRequest.h>
#include <aws/s3control/model/UpdateJobStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::S3Control::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* S3ControlClient::SERVICE_NAME = "s3";
const char* S3ControlClient::ALLOCATION_TAG = "S3ControlClient";

S3ControlClient::S3ControlClient(const S3Control::S3ControlClientConfiguration& clientConfiguration,
                                 std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials,
                                 std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider,
                                 const S3Control::S3ControlClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider,
                                 const S3Control::S3ControlClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  S3ControlClient::S3ControlClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                             Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                             /*doubleEncodeValue*/ false),
            Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
S3ControlClient::~S3ControlClient()
{
}

std::shared_ptr<S3ControlEndpointProviderBase>& S3ControlClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void S3ControlClient::init(const S3Control::S3ControlClientConfiguration& config)
{
  AWSClient::SetServiceClientName("S3 Control");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void S3ControlClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAccessPointOutcome S3ControlClient::CreateAccessPoint(const CreateAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPoint", "Required field: Name, is not set");
    return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPoint", "HostPrefix required field: AccountId has invalid value");
    return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return CreateAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CreateAccessPointForObjectLambdaOutcome S3ControlClient::CreateAccessPointForObjectLambda(const CreateAccessPointForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPointForObjectLambda", "Required field: Name, is not set");
    return CreateAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateAccessPointForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return CreateAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateAccessPointForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return CreateAccessPointForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CreateBucketOutcome S3ControlClient::CreateBucket(const CreateBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  return CreateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

CreateJobOutcome S3ControlClient::CreateJob(const CreateJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: AccountId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: AccountId has invalid value");
    return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateJobOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs");
  return CreateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateMultiRegionAccessPointOutcome S3ControlClient::CreateMultiRegionAccessPoint(const CreateMultiRegionAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultiRegionAccessPoint", "Required field: AccountId, is not set");
    return CreateMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateMultiRegionAccessPoint", "Required field: AccountId has invalid value");
    return CreateMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateMultiRegionAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/create");
  return CreateMultiRegionAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAccessPointOutcome S3ControlClient::DeleteAccessPoint(const DeleteAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: Name, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "HostPrefix required field: AccountId has invalid value");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteAccessPointForObjectLambdaOutcome S3ControlClient::DeleteAccessPointForObjectLambda(const DeleteAccessPointForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointForObjectLambda", "Required field: Name, is not set");
    return DeleteAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return DeleteAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAccessPointForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteAccessPointForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteAccessPointPolicyOutcome S3ControlClient::DeleteAccessPointPolicy(const DeleteAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "Required field: Name, is not set");
    return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "HostPrefix required field: AccountId has invalid value");
    return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteAccessPointPolicyForObjectLambdaOutcome S3ControlClient::DeleteAccessPointPolicyForObjectLambda(const DeleteAccessPointPolicyForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return DeleteAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return DeleteAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAccessPointPolicyForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteAccessPointPolicyForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketOutcome S3ControlClient::DeleteBucket(const DeleteBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "HostPrefix required field: AccountId has invalid value");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBucketOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  return DeleteBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketLifecycleConfigurationOutcome S3ControlClient::DeleteBucketLifecycleConfiguration(const DeleteBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycleConfiguration", "HostPrefix required field: AccountId has invalid value");
    return DeleteBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBucketLifecycleConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  return DeleteBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketPolicyOutcome S3ControlClient::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "HostPrefix required field: AccountId has invalid value");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBucketPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteBucketTaggingOutcome S3ControlClient::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "HostPrefix required field: AccountId has invalid value");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBucketTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return DeleteBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteJobTaggingOutcome S3ControlClient::DeleteJobTagging(const DeleteJobTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Required field: AccountId, is not set");
    return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Required field: JobId, is not set");
    return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Required field: AccountId has invalid value");
    return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteJobTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return DeleteJobTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteMultiRegionAccessPointOutcome S3ControlClient::DeleteMultiRegionAccessPoint(const DeleteMultiRegionAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiRegionAccessPoint", "Required field: AccountId, is not set");
    return DeleteMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiRegionAccessPoint", "Required field: AccountId has invalid value");
    return DeleteMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteMultiRegionAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/delete");
  return DeleteMultiRegionAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeletePublicAccessBlockOutcome S3ControlClient::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: AccountId, is not set");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: AccountId has invalid value");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeletePublicAccessBlockOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  return DeletePublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteStorageLensConfigurationOutcome S3ControlClient::DeleteStorageLensConfiguration(const DeleteStorageLensConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Required field: ConfigId, is not set");
    return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Required field: AccountId, is not set");
    return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Required field: AccountId has invalid value");
    return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteStorageLensConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return DeleteStorageLensConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteStorageLensConfigurationTaggingOutcome S3ControlClient::DeleteStorageLensConfigurationTagging(const DeleteStorageLensConfigurationTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Required field: AccountId has invalid value");
    return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteStorageLensConfigurationTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return DeleteStorageLensConfigurationTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DescribeJobOutcome S3ControlClient::DescribeJob(const DescribeJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId has invalid value");
    return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeJobOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DescribeJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

DescribeMultiRegionAccessPointOperationOutcome S3ControlClient::DescribeMultiRegionAccessPointOperation(const DescribeMultiRegionAccessPointOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMultiRegionAccessPointOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiRegionAccessPointOperation", "Required field: AccountId, is not set");
    return DescribeMultiRegionAccessPointOperationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RequestTokenARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiRegionAccessPointOperation", "Required field: RequestTokenARN, is not set");
    return DescribeMultiRegionAccessPointOperationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestTokenARN]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiRegionAccessPointOperation", "Required field: AccountId has invalid value");
    return DescribeMultiRegionAccessPointOperationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMultiRegionAccessPointOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeMultiRegionAccessPointOperationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetRequestTokenARN());
  return DescribeMultiRegionAccessPointOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointOutcome S3ControlClient::GetAccessPoint(const GetAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "Required field: Name, is not set");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointConfigurationForObjectLambdaOutcome S3ControlClient::GetAccessPointConfigurationForObjectLambda(const GetAccessPointConfigurationForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointConfigurationForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointConfigurationForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointConfigurationForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointConfigurationForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointConfigurationForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return GetAccessPointConfigurationForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointForObjectLambdaOutcome S3ControlClient::GetAccessPointForObjectLambda(const GetAccessPointForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetAccessPointForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointPolicyOutcome S3ControlClient::GetAccessPointPolicy(const GetAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "Required field: Name, is not set");
    return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointPolicyForObjectLambdaOutcome S3ControlClient::GetAccessPointPolicyForObjectLambda(const GetAccessPointPolicyForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointPolicyForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetAccessPointPolicyForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointPolicyStatusOutcome S3ControlClient::GetAccessPointPolicyStatus(const GetAccessPointPolicyStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointPolicyStatusOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policyStatus");
  return GetAccessPointPolicyStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetAccessPointPolicyStatusForObjectLambdaOutcome S3ControlClient::GetAccessPointPolicyStatusForObjectLambda(const GetAccessPointPolicyStatusForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPointPolicyStatusForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatusForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatusForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return GetAccessPointPolicyStatusForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPointPolicyStatusForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAccessPointPolicyStatusForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policyStatus");
  return GetAccessPointPolicyStatusForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketOutcome S3ControlClient::GetBucket(const GetBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucket", "Required field: Bucket, is not set");
    return GetBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucket", "HostPrefix required field: AccountId has invalid value");
    return GetBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  return GetBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketLifecycleConfigurationOutcome S3ControlClient::GetBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "HostPrefix required field: AccountId has invalid value");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketLifecycleConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  return GetBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketPolicyOutcome S3ControlClient::GetBucketPolicy(const GetBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "HostPrefix required field: AccountId has invalid value");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketTaggingOutcome S3ControlClient::GetBucketTagging(const GetBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "HostPrefix required field: AccountId has invalid value");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return GetBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetBucketVersioningOutcome S3ControlClient::GetBucketVersioning(const GetBucketVersioningRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "Required field: Bucket, is not set");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "HostPrefix required field: AccountId has invalid value");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBucketVersioningOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versioning");
  return GetBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetJobTaggingOutcome S3ControlClient::GetJobTagging(const GetJobTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobTagging", "Required field: AccountId, is not set");
    return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobTagging", "Required field: JobId, is not set");
    return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetJobTagging", "Required field: AccountId has invalid value");
    return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetJobTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return GetJobTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMultiRegionAccessPointOutcome S3ControlClient::GetMultiRegionAccessPoint(const GetMultiRegionAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPoint", "Required field: Name, is not set");
    return GetMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPoint", "HostPrefix required field: AccountId has invalid value");
    return GetMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMultiRegionAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMultiRegionAccessPointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
  return GetMultiRegionAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMultiRegionAccessPointPolicyOutcome S3ControlClient::GetMultiRegionAccessPointPolicy(const GetMultiRegionAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMultiRegionAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicy", "Required field: Name, is not set");
    return GetMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicy", "HostPrefix required field: AccountId has invalid value");
    return GetMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMultiRegionAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMultiRegionAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetMultiRegionAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMultiRegionAccessPointPolicyStatusOutcome S3ControlClient::GetMultiRegionAccessPointPolicyStatus(const GetMultiRegionAccessPointPolicyStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMultiRegionAccessPointPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicyStatus", "Required field: Name, is not set");
    return GetMultiRegionAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicyStatus", "HostPrefix required field: AccountId has invalid value");
    return GetMultiRegionAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMultiRegionAccessPointPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMultiRegionAccessPointPolicyStatusOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policystatus");
  return GetMultiRegionAccessPointPolicyStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMultiRegionAccessPointRoutesOutcome S3ControlClient::GetMultiRegionAccessPointRoutes(const GetMultiRegionAccessPointRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMultiRegionAccessPointRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointRoutes", "Required field: AccountId, is not set");
    return GetMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.MrapHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointRoutes", "Required field: Mrap, is not set");
    return GetMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Mrap]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointRoutes", "Required field: AccountId has invalid value");
    return GetMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMultiRegionAccessPointRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMultiRegionAccessPointRoutesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetMrap());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  return GetMultiRegionAccessPointRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetPublicAccessBlockOutcome S3ControlClient::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: AccountId, is not set");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: AccountId has invalid value");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetPublicAccessBlockOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  return GetPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetStorageLensConfigurationOutcome S3ControlClient::GetStorageLensConfiguration(const GetStorageLensConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Required field: ConfigId, is not set");
    return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Required field: AccountId, is not set");
    return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Required field: AccountId has invalid value");
    return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetStorageLensConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return GetStorageLensConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetStorageLensConfigurationTaggingOutcome S3ControlClient::GetStorageLensConfigurationTagging(const GetStorageLensConfigurationTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Required field: AccountId has invalid value");
    return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetStorageLensConfigurationTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return GetStorageLensConfigurationTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListAccessPointsOutcome S3ControlClient::ListAccessPoints(const ListAccessPointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListAccessPoints", "HostPrefix required field: AccountId has invalid value");
    return ListAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListAccessPointsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint");
  return ListAccessPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListAccessPointsForObjectLambdaOutcome S3ControlClient::ListAccessPointsForObjectLambda(const ListAccessPointsForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessPointsForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessPointsForObjectLambda", "Required field: AccountId, is not set");
    return ListAccessPointsForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListAccessPointsForObjectLambda", "Required field: AccountId has invalid value");
    return ListAccessPointsForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessPointsForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListAccessPointsForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda");
  return ListAccessPointsForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListJobsOutcome S3ControlClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId has invalid value");
    return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListJobsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs");
  return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListMultiRegionAccessPointsOutcome S3ControlClient::ListMultiRegionAccessPoints(const ListMultiRegionAccessPointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultiRegionAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultiRegionAccessPoints", "Required field: AccountId, is not set");
    return ListMultiRegionAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListMultiRegionAccessPoints", "Required field: AccountId has invalid value");
    return ListMultiRegionAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMultiRegionAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListMultiRegionAccessPointsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances");
  return ListMultiRegionAccessPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListRegionalBucketsOutcome S3ControlClient::ListRegionalBuckets(const ListRegionalBucketsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRegionalBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRegionalBuckets", "Required field: AccountId, is not set");
    return ListRegionalBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListRegionalBuckets", "Required field: AccountId has invalid value");
    return ListRegionalBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRegionalBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListRegionalBucketsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket");
  return ListRegionalBucketsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListStorageLensConfigurationsOutcome S3ControlClient::ListStorageLensConfigurations(const ListStorageLensConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStorageLensConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStorageLensConfigurations", "Required field: AccountId, is not set");
    return ListStorageLensConfigurationsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListStorageLensConfigurations", "Required field: AccountId has invalid value");
    return ListStorageLensConfigurationsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStorageLensConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListStorageLensConfigurationsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens");
  return ListStorageLensConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

PutAccessPointConfigurationForObjectLambdaOutcome S3ControlClient::PutAccessPointConfigurationForObjectLambda(const PutAccessPointConfigurationForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccessPointConfigurationForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointConfigurationForObjectLambda", "Required field: Name, is not set");
    return PutAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointConfigurationForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return PutAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccessPointConfigurationForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutAccessPointConfigurationForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return PutAccessPointConfigurationForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutAccessPointPolicyOutcome S3ControlClient::PutAccessPointPolicy(const PutAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "Required field: Name, is not set");
    return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "HostPrefix required field: AccountId has invalid value");
    return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutAccessPointPolicyForObjectLambdaOutcome S3ControlClient::PutAccessPointPolicyForObjectLambda(const PutAccessPointPolicyForObjectLambdaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return PutAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicyForObjectLambda", "HostPrefix required field: AccountId has invalid value");
    return PutAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccessPointPolicyForObjectLambda, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutAccessPointPolicyForObjectLambdaOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutAccessPointPolicyForObjectLambdaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketLifecycleConfigurationOutcome S3ControlClient::PutBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "HostPrefix required field: AccountId has invalid value");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutBucketLifecycleConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  return PutBucketLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketPolicyOutcome S3ControlClient::PutBucketPolicy(const PutBucketPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "HostPrefix required field: AccountId has invalid value");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutBucketPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketTaggingOutcome S3ControlClient::PutBucketTagging(const PutBucketTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "HostPrefix required field: AccountId has invalid value");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutBucketTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return PutBucketTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutBucketVersioningOutcome S3ControlClient::PutBucketVersioning(const PutBucketVersioningRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "Required field: Bucket, is not set");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "HostPrefix required field: AccountId has invalid value");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutBucketVersioningOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versioning");
  return PutBucketVersioningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutJobTaggingOutcome S3ControlClient::PutJobTagging(const PutJobTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutJobTagging", "Required field: AccountId, is not set");
    return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutJobTagging", "Required field: JobId, is not set");
    return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutJobTagging", "Required field: AccountId has invalid value");
    return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutJobTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutJobTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return PutJobTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutMultiRegionAccessPointPolicyOutcome S3ControlClient::PutMultiRegionAccessPointPolicy(const PutMultiRegionAccessPointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMultiRegionAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMultiRegionAccessPointPolicy", "Required field: AccountId, is not set");
    return PutMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutMultiRegionAccessPointPolicy", "Required field: AccountId has invalid value");
    return PutMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMultiRegionAccessPointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutMultiRegionAccessPointPolicyOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/put-policy");
  return PutMultiRegionAccessPointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutPublicAccessBlockOutcome S3ControlClient::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: AccountId, is not set");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: AccountId has invalid value");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutPublicAccessBlockOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  return PutPublicAccessBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutStorageLensConfigurationOutcome S3ControlClient::PutStorageLensConfiguration(const PutStorageLensConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Required field: ConfigId, is not set");
    return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Required field: AccountId, is not set");
    return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Required field: AccountId has invalid value");
    return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutStorageLensConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutStorageLensConfigurationOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return PutStorageLensConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

PutStorageLensConfigurationTaggingOutcome S3ControlClient::PutStorageLensConfigurationTagging(const PutStorageLensConfigurationTaggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Required field: AccountId has invalid value");
    return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutStorageLensConfigurationTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutStorageLensConfigurationTaggingOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  return PutStorageLensConfigurationTaggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

SubmitMultiRegionAccessPointRoutesOutcome S3ControlClient::SubmitMultiRegionAccessPointRoutes(const SubmitMultiRegionAccessPointRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubmitMultiRegionAccessPointRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubmitMultiRegionAccessPointRoutes", "Required field: AccountId, is not set");
    return SubmitMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.MrapHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubmitMultiRegionAccessPointRoutes", "Required field: Mrap, is not set");
    return SubmitMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Mrap]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("SubmitMultiRegionAccessPointRoutes", "Required field: AccountId has invalid value");
    return SubmitMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubmitMultiRegionAccessPointRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SubmitMultiRegionAccessPointRoutesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetMrap());
  endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  return SubmitMultiRegionAccessPointRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH));
}

UpdateJobPriorityOutcome S3ControlClient::UpdateJobPriority(const UpdateJobPriorityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateJobPriority, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: AccountId, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: JobId, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.PriorityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: Priority, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Priority]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: AccountId has invalid value");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateJobPriority, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateJobPriorityOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/priority");
  return UpdateJobPriorityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateJobStatusOutcome S3ControlClient::UpdateJobStatus(const UpdateJobStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateJobStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: AccountId, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: JobId, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.RequestedJobStatusHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: RequestedJobStatus, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestedJobStatus]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: AccountId has invalid value");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateJobStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetAccountId() + ".");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateJobStatusOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return UpdateJobStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}


