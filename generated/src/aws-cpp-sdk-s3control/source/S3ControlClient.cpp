/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/S3ControlEndpointProvider.h>
#include <aws/s3control/S3ControlErrorMarshaller.h>
#include <aws/s3control/model/AssociateAccessGrantsIdentityCenterRequest.h>
#include <aws/s3control/model/CreateAccessGrantRequest.h>
#include <aws/s3control/model/CreateAccessGrantsInstanceRequest.h>
#include <aws/s3control/model/CreateAccessGrantsLocationRequest.h>
#include <aws/s3control/model/CreateAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/s3control/model/CreateBucketRequest.h>
#include <aws/s3control/model/CreateJobRequest.h>
#include <aws/s3control/model/CreateMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/CreateStorageLensGroupRequest.h>
#include <aws/s3control/model/DeleteAccessGrantRequest.h>
#include <aws/s3control/model/DeleteAccessGrantsInstanceRequest.h>
#include <aws/s3control/model/DeleteAccessGrantsInstanceResourcePolicyRequest.h>
#include <aws/s3control/model/DeleteAccessGrantsLocationRequest.h>
#include <aws/s3control/model/DeleteAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/DeleteAccessPointPolicyRequest.h>
#include <aws/s3control/model/DeleteAccessPointRequest.h>
#include <aws/s3control/model/DeleteAccessPointScopeRequest.h>
#include <aws/s3control/model/DeleteBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/DeleteBucketPolicyRequest.h>
#include <aws/s3control/model/DeleteBucketReplicationRequest.h>
#include <aws/s3control/model/DeleteBucketRequest.h>
#include <aws/s3control/model/DeleteBucketTaggingRequest.h>
#include <aws/s3control/model/DeleteJobTaggingRequest.h>
#include <aws/s3control/model/DeleteMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationRequest.h>
#include <aws/s3control/model/DeleteStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/DeleteStorageLensGroupRequest.h>
#include <aws/s3control/model/DescribeJobRequest.h>
#include <aws/s3control/model/DescribeMultiRegionAccessPointOperationRequest.h>
#include <aws/s3control/model/DissociateAccessGrantsIdentityCenterRequest.h>
#include <aws/s3control/model/GetAccessGrantRequest.h>
#include <aws/s3control/model/GetAccessGrantsInstanceForPrefixRequest.h>
#include <aws/s3control/model/GetAccessGrantsInstanceRequest.h>
#include <aws/s3control/model/GetAccessGrantsInstanceResourcePolicyRequest.h>
#include <aws/s3control/model/GetAccessGrantsLocationRequest.h>
#include <aws/s3control/model/GetAccessPointConfigurationForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusForObjectLambdaRequest.h>
#include <aws/s3control/model/GetAccessPointPolicyStatusRequest.h>
#include <aws/s3control/model/GetAccessPointRequest.h>
#include <aws/s3control/model/GetAccessPointScopeRequest.h>
#include <aws/s3control/model/GetBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/GetBucketPolicyRequest.h>
#include <aws/s3control/model/GetBucketReplicationRequest.h>
#include <aws/s3control/model/GetBucketRequest.h>
#include <aws/s3control/model/GetBucketTaggingRequest.h>
#include <aws/s3control/model/GetBucketVersioningRequest.h>
#include <aws/s3control/model/GetDataAccessRequest.h>
#include <aws/s3control/model/GetJobTaggingRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointPolicyStatusRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRoutesRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/GetStorageLensConfigurationRequest.h>
#include <aws/s3control/model/GetStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/GetStorageLensGroupRequest.h>
#include <aws/s3control/model/ListAccessGrantsInstancesRequest.h>
#include <aws/s3control/model/ListAccessGrantsLocationsRequest.h>
#include <aws/s3control/model/ListAccessGrantsRequest.h>
#include <aws/s3control/model/ListAccessPointsForDirectoryBucketsRequest.h>
#include <aws/s3control/model/ListAccessPointsForObjectLambdaRequest.h>
#include <aws/s3control/model/ListAccessPointsRequest.h>
#include <aws/s3control/model/ListCallerAccessGrantsRequest.h>
#include <aws/s3control/model/ListJobsRequest.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsRequest.h>
#include <aws/s3control/model/ListRegionalBucketsRequest.h>
#include <aws/s3control/model/ListStorageLensConfigurationsRequest.h>
#include <aws/s3control/model/ListStorageLensGroupsRequest.h>
#include <aws/s3control/model/ListTagsForResourceRequest.h>
#include <aws/s3control/model/PutAccessGrantsInstanceResourcePolicyRequest.h>
#include <aws/s3control/model/PutAccessPointConfigurationForObjectLambdaRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/s3control/model/PutAccessPointPolicyRequest.h>
#include <aws/s3control/model/PutAccessPointScopeRequest.h>
#include <aws/s3control/model/PutBucketLifecycleConfigurationRequest.h>
#include <aws/s3control/model/PutBucketPolicyRequest.h>
#include <aws/s3control/model/PutBucketReplicationRequest.h>
#include <aws/s3control/model/PutBucketTaggingRequest.h>
#include <aws/s3control/model/PutBucketVersioningRequest.h>
#include <aws/s3control/model/PutJobTaggingRequest.h>
#include <aws/s3control/model/PutMultiRegionAccessPointPolicyRequest.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
#include <aws/s3control/model/PutStorageLensConfigurationRequest.h>
#include <aws/s3control/model/PutStorageLensConfigurationTaggingRequest.h>
#include <aws/s3control/model/SubmitMultiRegionAccessPointRoutesRequest.h>
#include <aws/s3control/model/TagResourceRequest.h>
#include <aws/s3control/model/UntagResourceRequest.h>
#include <aws/s3control/model/UpdateAccessGrantsLocationRequest.h>
#include <aws/s3control/model/UpdateJobPriorityRequest.h>
#include <aws/s3control/model/UpdateJobStatusRequest.h>
#include <aws/s3control/model/UpdateStorageLensGroupRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::S3Control::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace S3Control {
const char SERVICE_NAME[] = "s3";
const char ALLOCATION_TAG[] = "S3ControlClient";
}  // namespace S3Control
}  // namespace Aws
const char* S3ControlClient::GetServiceName() { return SERVICE_NAME; }
const char* S3ControlClient::GetAllocationTag() { return ALLOCATION_TAG; }

S3ControlClient::S3ControlClient(const S3Control::S3ControlClientConfiguration& clientConfiguration,
                                 std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                    Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials, std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider,
                                 const S3Control::S3ControlClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                 Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                                 /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider,
                                 const S3Control::S3ControlClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                 Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                                 /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
S3ControlClient::S3ControlClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                    Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                 Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                                 /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region),
                                                 Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
                                                 /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
S3ControlClient::~S3ControlClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<S3ControlEndpointProviderBase>& S3ControlClient::accessEndpointProvider() { return m_endpointProvider; }

void S3ControlClient::init(const S3Control::S3ControlClientConfiguration& config) {
  AWSClient::SetServiceClientName("S3 Control");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "s3");
}

void S3ControlClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

S3ControlClient::InvokeOperationOutcome S3ControlClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
AssociateAccessGrantsIdentityCenterOutcome S3ControlClient::AssociateAccessGrantsIdentityCenter(
    const AssociateAccessGrantsIdentityCenterRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAccessGrantsIdentityCenter", "Required field: AccountId, is not set");
    return AssociateAccessGrantsIdentityCenterOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/identitycenter");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateAccessGrantsIdentityCenterOutcome(result.GetResultWithOwnership())
                            : AssociateAccessGrantsIdentityCenterOutcome(std::move(result.GetError()));
}

CreateAccessGrantOutcome S3ControlClient::CreateAccessGrant(const CreateAccessGrantRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccessGrant", "Required field: AccountId, is not set");
    return CreateAccessGrantOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/grant");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessGrantOutcome(result.GetResultWithOwnership())
                            : CreateAccessGrantOutcome(std::move(result.GetError()));
}

CreateAccessGrantsInstanceOutcome S3ControlClient::CreateAccessGrantsInstance(const CreateAccessGrantsInstanceRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccessGrantsInstance", "Required field: AccountId, is not set");
    return CreateAccessGrantsInstanceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessGrantsInstanceOutcome(result.GetResultWithOwnership())
                            : CreateAccessGrantsInstanceOutcome(std::move(result.GetError()));
}

CreateAccessGrantsLocationOutcome S3ControlClient::CreateAccessGrantsLocation(const CreateAccessGrantsLocationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccessGrantsLocation", "Required field: AccountId, is not set");
    return CreateAccessGrantsLocationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/location");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessGrantsLocationOutcome(result.GetResultWithOwnership())
                            : CreateAccessGrantsLocationOutcome(std::move(result.GetError()));
}

CreateAccessPointOutcome S3ControlClient::CreateAccessPoint(const CreateAccessPointRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccessPoint", "Required field: Name, is not set");
    return CreateAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateAccessPointOutcome(result.GetResultWithOwnership())
                            : CreateAccessPointOutcome(std::move(result.GetError()));
}

CreateAccessPointForObjectLambdaOutcome S3ControlClient::CreateAccessPointForObjectLambda(
    const CreateAccessPointForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccessPointForObjectLambda", "Required field: Name, is not set");
    return CreateAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateAccessPointForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : CreateAccessPointForObjectLambdaOutcome(std::move(result.GetError()));
}

CreateBucketOutcome S3ControlClient::CreateBucket(const CreateBucketRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBucketOutcome(result.GetResultWithOwnership()) : CreateBucketOutcome(std::move(result.GetError()));
}

CreateJobOutcome S3ControlClient::CreateJob(const CreateJobRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: AccountId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateJobOutcome(result.GetResultWithOwnership()) : CreateJobOutcome(std::move(result.GetError()));
}

CreateMultiRegionAccessPointOutcome S3ControlClient::CreateMultiRegionAccessPoint(
    const CreateMultiRegionAccessPointRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMultiRegionAccessPoint", "Required field: AccountId, is not set");
    return CreateMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMultiRegionAccessPointOutcome(result.GetResultWithOwnership())
                            : CreateMultiRegionAccessPointOutcome(std::move(result.GetError()));
}

CreateStorageLensGroupOutcome S3ControlClient::CreateStorageLensGroup(const CreateStorageLensGroupRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateStorageLensGroup", "Required field: AccountId, is not set");
    return CreateStorageLensGroupOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelensgroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStorageLensGroupOutcome(result.GetResultWithOwnership())
                            : CreateStorageLensGroupOutcome(std::move(result.GetError()));
}

DeleteAccessGrantOutcome S3ControlClient::DeleteAccessGrant(const DeleteAccessGrantRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessGrant", "Required field: AccountId, is not set");
    return DeleteAccessGrantOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AccountId]", false));
  }
  if (!request.AccessGrantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessGrant", "Required field: AccessGrantId, is not set");
    return DeleteAccessGrantOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AccessGrantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/grant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessGrantId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessGrantOutcome(result.GetResultWithOwnership())
                            : DeleteAccessGrantOutcome(std::move(result.GetError()));
}

DeleteAccessGrantsInstanceOutcome S3ControlClient::DeleteAccessGrantsInstance(const DeleteAccessGrantsInstanceRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessGrantsInstance", "Required field: AccountId, is not set");
    return DeleteAccessGrantsInstanceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessGrantsInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteAccessGrantsInstanceOutcome(std::move(result.GetError()));
}

DeleteAccessGrantsInstanceResourcePolicyOutcome S3ControlClient::DeleteAccessGrantsInstanceResourcePolicy(
    const DeleteAccessGrantsInstanceResourcePolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessGrantsInstanceResourcePolicy", "Required field: AccountId, is not set");
    return DeleteAccessGrantsInstanceResourcePolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/resourcepolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessGrantsInstanceResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteAccessGrantsInstanceResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteAccessGrantsLocationOutcome S3ControlClient::DeleteAccessGrantsLocation(const DeleteAccessGrantsLocationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessGrantsLocation", "Required field: AccountId, is not set");
    return DeleteAccessGrantsLocationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AccountId]", false));
  }
  if (!request.AccessGrantsLocationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessGrantsLocation", "Required field: AccessGrantsLocationId, is not set");
    return DeleteAccessGrantsLocationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessGrantsLocationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/location/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessGrantsLocationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessGrantsLocationOutcome(result.GetResultWithOwnership())
                            : DeleteAccessGrantsLocationOutcome(std::move(result.GetError()));
}

DeleteAccessPointOutcome S3ControlClient::DeleteAccessPoint(const DeleteAccessPointRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: Name, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessPointOutcome(result.GetResultWithOwnership())
                            : DeleteAccessPointOutcome(std::move(result.GetError()));
}

DeleteAccessPointForObjectLambdaOutcome S3ControlClient::DeleteAccessPointForObjectLambda(
    const DeleteAccessPointForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointForObjectLambda", "Required field: Name, is not set");
    return DeleteAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessPointForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : DeleteAccessPointForObjectLambdaOutcome(std::move(result.GetError()));
}

DeleteAccessPointPolicyOutcome S3ControlClient::DeleteAccessPointPolicy(const DeleteAccessPointPolicyRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicy", "Required field: Name, is not set");
    return DeleteAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessPointPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteAccessPointPolicyOutcome(std::move(result.GetError()));
}

DeleteAccessPointPolicyForObjectLambdaOutcome S3ControlClient::DeleteAccessPointPolicyForObjectLambda(
    const DeleteAccessPointPolicyForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return DeleteAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessPointPolicyForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : DeleteAccessPointPolicyForObjectLambdaOutcome(std::move(result.GetError()));
}

DeleteAccessPointScopeOutcome S3ControlClient::DeleteAccessPointScope(const DeleteAccessPointScopeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessPointScope", "Required field: Name, is not set");
    return DeleteAccessPointScopeOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scope");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessPointScopeOutcome(result.GetResultWithOwnership())
                            : DeleteAccessPointScopeOutcome(std::move(result.GetError()));
}

DeleteBucketOutcome S3ControlClient::DeleteBucket(const DeleteBucketRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketOutcome(result.GetResultWithOwnership()) : DeleteBucketOutcome(std::move(result.GetError()));
}

DeleteBucketLifecycleConfigurationOutcome S3ControlClient::DeleteBucketLifecycleConfiguration(
    const DeleteBucketLifecycleConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketLifecycleConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketLifecycleConfigurationOutcome(std::move(result.GetError()));
}

DeleteBucketPolicyOutcome S3ControlClient::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteBucketPolicyOutcome(std::move(result.GetError()));
}

DeleteBucketReplicationOutcome S3ControlClient::DeleteBucketReplication(const DeleteBucketReplicationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketReplication", "Required field: Bucket, is not set");
    return DeleteBucketReplicationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketReplicationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketReplicationOutcome(std::move(result.GetError()));
}

DeleteBucketTaggingOutcome S3ControlClient::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketTaggingOutcome(result.GetResultWithOwnership())
                            : DeleteBucketTaggingOutcome(std::move(result.GetError()));
}

DeleteJobTaggingOutcome S3ControlClient::DeleteJobTagging(const DeleteJobTaggingRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Required field: AccountId, is not set");
    return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJobTagging", "Required field: JobId, is not set");
    return DeleteJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteJobTaggingOutcome(result.GetResultWithOwnership())
                            : DeleteJobTaggingOutcome(std::move(result.GetError()));
}

DeleteMultiRegionAccessPointOutcome S3ControlClient::DeleteMultiRegionAccessPoint(
    const DeleteMultiRegionAccessPointRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMultiRegionAccessPoint", "Required field: AccountId, is not set");
    return DeleteMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMultiRegionAccessPointOutcome(result.GetResultWithOwnership())
                            : DeleteMultiRegionAccessPointOutcome(std::move(result.GetError()));
}

DeletePublicAccessBlockOutcome S3ControlClient::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: AccountId, is not set");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePublicAccessBlockOutcome(result.GetResultWithOwnership())
                            : DeletePublicAccessBlockOutcome(std::move(result.GetError()));
}

DeleteStorageLensConfigurationOutcome S3ControlClient::DeleteStorageLensConfiguration(
    const DeleteStorageLensConfigurationRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Required field: ConfigId, is not set");
    return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfiguration", "Required field: AccountId, is not set");
    return DeleteStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteStorageLensConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteStorageLensConfigurationOutcome(std::move(result.GetError()));
}

DeleteStorageLensConfigurationTaggingOutcome S3ControlClient::DeleteStorageLensConfigurationTagging(
    const DeleteStorageLensConfigurationTaggingRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return DeleteStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteStorageLensConfigurationTaggingOutcome(result.GetResultWithOwnership())
                            : DeleteStorageLensConfigurationTaggingOutcome(std::move(result.GetError()));
}

DeleteStorageLensGroupOutcome S3ControlClient::DeleteStorageLensGroup(const DeleteStorageLensGroupRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStorageLensGroup", "Required field: Name, is not set");
    return DeleteStorageLensGroupOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelensgroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteStorageLensGroupOutcome(result.GetResultWithOwnership())
                            : DeleteStorageLensGroupOutcome(std::move(result.GetError()));
}

DescribeJobOutcome S3ControlClient::DescribeJob(const DescribeJobRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeJobOutcome(result.GetResultWithOwnership()) : DescribeJobOutcome(std::move(result.GetError()));
}

DescribeMultiRegionAccessPointOperationOutcome S3ControlClient::DescribeMultiRegionAccessPointOperation(
    const DescribeMultiRegionAccessPointOperationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMultiRegionAccessPointOperation", "Required field: AccountId, is not set");
    return DescribeMultiRegionAccessPointOperationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RequestTokenARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMultiRegionAccessPointOperation", "Required field: RequestTokenARN, is not set");
    return DescribeMultiRegionAccessPointOperationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestTokenARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetRequestTokenARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeMultiRegionAccessPointOperationOutcome(result.GetResultWithOwnership())
                            : DescribeMultiRegionAccessPointOperationOutcome(std::move(result.GetError()));
}

DissociateAccessGrantsIdentityCenterOutcome S3ControlClient::DissociateAccessGrantsIdentityCenter(
    const DissociateAccessGrantsIdentityCenterRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DissociateAccessGrantsIdentityCenter", "Required field: AccountId, is not set");
    return DissociateAccessGrantsIdentityCenterOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/identitycenter");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DissociateAccessGrantsIdentityCenterOutcome(result.GetResultWithOwnership())
                            : DissociateAccessGrantsIdentityCenterOutcome(std::move(result.GetError()));
}

GetAccessGrantOutcome S3ControlClient::GetAccessGrant(const GetAccessGrantRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessGrant", "Required field: AccountId, is not set");
    return GetAccessGrantOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AccountId]", false));
  }
  if (!request.AccessGrantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessGrant", "Required field: AccessGrantId, is not set");
    return GetAccessGrantOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AccessGrantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/grant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessGrantId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessGrantOutcome(result.GetResultWithOwnership()) : GetAccessGrantOutcome(std::move(result.GetError()));
}

GetAccessGrantsInstanceOutcome S3ControlClient::GetAccessGrantsInstance(const GetAccessGrantsInstanceRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessGrantsInstance", "Required field: AccountId, is not set");
    return GetAccessGrantsInstanceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessGrantsInstanceOutcome(result.GetResultWithOwnership())
                            : GetAccessGrantsInstanceOutcome(std::move(result.GetError()));
}

GetAccessGrantsInstanceForPrefixOutcome S3ControlClient::GetAccessGrantsInstanceForPrefix(
    const GetAccessGrantsInstanceForPrefixRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessGrantsInstanceForPrefix", "Required field: AccountId, is not set");
    return GetAccessGrantsInstanceForPrefixOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.S3PrefixHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessGrantsInstanceForPrefix", "Required field: S3Prefix, is not set");
    return GetAccessGrantsInstanceForPrefixOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [S3Prefix]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/prefix");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessGrantsInstanceForPrefixOutcome(result.GetResultWithOwnership())
                            : GetAccessGrantsInstanceForPrefixOutcome(std::move(result.GetError()));
}

GetAccessGrantsInstanceResourcePolicyOutcome S3ControlClient::GetAccessGrantsInstanceResourcePolicy(
    const GetAccessGrantsInstanceResourcePolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessGrantsInstanceResourcePolicy", "Required field: AccountId, is not set");
    return GetAccessGrantsInstanceResourcePolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/resourcepolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessGrantsInstanceResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetAccessGrantsInstanceResourcePolicyOutcome(std::move(result.GetError()));
}

GetAccessGrantsLocationOutcome S3ControlClient::GetAccessGrantsLocation(const GetAccessGrantsLocationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessGrantsLocation", "Required field: AccountId, is not set");
    return GetAccessGrantsLocationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AccountId]", false));
  }
  if (!request.AccessGrantsLocationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessGrantsLocation", "Required field: AccessGrantsLocationId, is not set");
    return GetAccessGrantsLocationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AccessGrantsLocationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/location/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessGrantsLocationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessGrantsLocationOutcome(result.GetResultWithOwnership())
                            : GetAccessGrantsLocationOutcome(std::move(result.GetError()));
}

GetAccessPointOutcome S3ControlClient::GetAccessPoint(const GetAccessPointRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "Required field: Name, is not set");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointOutcome(result.GetResultWithOwnership()) : GetAccessPointOutcome(std::move(result.GetError()));
}

GetAccessPointConfigurationForObjectLambdaOutcome S3ControlClient::GetAccessPointConfigurationForObjectLambda(
    const GetAccessPointConfigurationForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPointConfigurationForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointConfigurationForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : GetAccessPointConfigurationForObjectLambdaOutcome(std::move(result.GetError()));
}

GetAccessPointForObjectLambdaOutcome S3ControlClient::GetAccessPointForObjectLambda(
    const GetAccessPointForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPointForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : GetAccessPointForObjectLambdaOutcome(std::move(result.GetError()));
}

GetAccessPointPolicyOutcome S3ControlClient::GetAccessPointPolicy(const GetAccessPointPolicyRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicy", "Required field: Name, is not set");
    return GetAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointPolicyOutcome(result.GetResultWithOwnership())
                            : GetAccessPointPolicyOutcome(std::move(result.GetError()));
}

GetAccessPointPolicyForObjectLambdaOutcome S3ControlClient::GetAccessPointPolicyForObjectLambda(
    const GetAccessPointPolicyForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointPolicyForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : GetAccessPointPolicyForObjectLambdaOutcome(std::move(result.GetError()));
}

GetAccessPointPolicyStatusOutcome S3ControlClient::GetAccessPointPolicyStatus(const GetAccessPointPolicyStatusRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatus", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policyStatus");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointPolicyStatusOutcome(result.GetResultWithOwnership())
                            : GetAccessPointPolicyStatusOutcome(std::move(result.GetError()));
}

GetAccessPointPolicyStatusForObjectLambdaOutcome S3ControlClient::GetAccessPointPolicyStatusForObjectLambda(
    const GetAccessPointPolicyStatusForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPointPolicyStatusForObjectLambda", "Required field: Name, is not set");
    return GetAccessPointPolicyStatusForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policyStatus");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointPolicyStatusForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : GetAccessPointPolicyStatusForObjectLambdaOutcome(std::move(result.GetError()));
}

GetAccessPointScopeOutcome S3ControlClient::GetAccessPointScope(const GetAccessPointScopeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPointScope", "Required field: Name, is not set");
    return GetAccessPointScopeOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scope");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointScopeOutcome(result.GetResultWithOwnership())
                            : GetAccessPointScopeOutcome(std::move(result.GetError()));
}

GetBucketOutcome S3ControlClient::GetBucket(const GetBucketRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucket", "Required field: Bucket, is not set");
    return GetBucketOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketOutcome(result.GetResultWithOwnership()) : GetBucketOutcome(std::move(result.GetError()));
}

GetBucketLifecycleConfigurationOutcome S3ControlClient::GetBucketLifecycleConfiguration(
    const GetBucketLifecycleConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketLifecycleConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketLifecycleConfigurationOutcome(std::move(result.GetError()));
}

GetBucketPolicyOutcome S3ControlClient::GetBucketPolicy(const GetBucketPolicyRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketPolicyOutcome(result.GetResultWithOwnership())
                            : GetBucketPolicyOutcome(std::move(result.GetError()));
}

GetBucketReplicationOutcome S3ControlClient::GetBucketReplication(const GetBucketReplicationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketReplication", "Required field: Bucket, is not set");
    return GetBucketReplicationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketReplicationOutcome(result.GetResultWithOwnership())
                            : GetBucketReplicationOutcome(std::move(result.GetError()));
}

GetBucketTaggingOutcome S3ControlClient::GetBucketTagging(const GetBucketTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketTaggingOutcome(result.GetResultWithOwnership())
                            : GetBucketTaggingOutcome(std::move(result.GetError()));
}

GetBucketVersioningOutcome S3ControlClient::GetBucketVersioning(const GetBucketVersioningRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "Required field: Bucket, is not set");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versioning");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketVersioningOutcome(result.GetResultWithOwnership())
                            : GetBucketVersioningOutcome(std::move(result.GetError()));
}

GetDataAccessOutcome S3ControlClient::GetDataAccess(const GetDataAccessRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAccess", "Required field: AccountId, is not set");
    return GetDataAccessOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AccountId]", false));
  }
  if (!request.TargetHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAccess", "Required field: Target, is not set");
    return GetDataAccessOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Target]", false));
  }
  if (!request.PermissionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAccess", "Required field: Permission, is not set");
    return GetDataAccessOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Permission]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/dataaccess");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataAccessOutcome(result.GetResultWithOwnership()) : GetDataAccessOutcome(std::move(result.GetError()));
}

GetJobTaggingOutcome S3ControlClient::GetJobTagging(const GetJobTaggingRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobTagging", "Required field: AccountId, is not set");
    return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobTagging", "Required field: JobId, is not set");
    return GetJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetJobTaggingOutcome(result.GetResultWithOwnership()) : GetJobTaggingOutcome(std::move(result.GetError()));
}

GetMultiRegionAccessPointOutcome S3ControlClient::GetMultiRegionAccessPoint(const GetMultiRegionAccessPointRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPoint", "Required field: Name, is not set");
    return GetMultiRegionAccessPointOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMultiRegionAccessPointOutcome(result.GetResultWithOwnership())
                            : GetMultiRegionAccessPointOutcome(std::move(result.GetError()));
}

GetMultiRegionAccessPointPolicyOutcome S3ControlClient::GetMultiRegionAccessPointPolicy(
    const GetMultiRegionAccessPointPolicyRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicy", "Required field: Name, is not set");
    return GetMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMultiRegionAccessPointPolicyOutcome(result.GetResultWithOwnership())
                            : GetMultiRegionAccessPointPolicyOutcome(std::move(result.GetError()));
}

GetMultiRegionAccessPointPolicyStatusOutcome S3ControlClient::GetMultiRegionAccessPointPolicyStatus(
    const GetMultiRegionAccessPointPolicyStatusRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointPolicyStatus", "Required field: Name, is not set");
    return GetMultiRegionAccessPointPolicyStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policystatus");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMultiRegionAccessPointPolicyStatusOutcome(result.GetResultWithOwnership())
                            : GetMultiRegionAccessPointPolicyStatusOutcome(std::move(result.GetError()));
}

GetMultiRegionAccessPointRoutesOutcome S3ControlClient::GetMultiRegionAccessPointRoutes(
    const GetMultiRegionAccessPointRoutesRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointRoutes", "Required field: AccountId, is not set");
    return GetMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.MrapHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMultiRegionAccessPointRoutes", "Required field: Mrap, is not set");
    return GetMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Mrap]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetMrap());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMultiRegionAccessPointRoutesOutcome(result.GetResultWithOwnership())
                            : GetMultiRegionAccessPointRoutesOutcome(std::move(result.GetError()));
}

GetPublicAccessBlockOutcome S3ControlClient::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: AccountId, is not set");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPublicAccessBlockOutcome(result.GetResultWithOwnership())
                            : GetPublicAccessBlockOutcome(std::move(result.GetError()));
}

GetStorageLensConfigurationOutcome S3ControlClient::GetStorageLensConfiguration(const GetStorageLensConfigurationRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Required field: ConfigId, is not set");
    return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfiguration", "Required field: AccountId, is not set");
    return GetStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetStorageLensConfigurationOutcome(result.GetResultWithOwnership())
                            : GetStorageLensConfigurationOutcome(std::move(result.GetError()));
}

GetStorageLensConfigurationTaggingOutcome S3ControlClient::GetStorageLensConfigurationTagging(
    const GetStorageLensConfigurationTaggingRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return GetStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetStorageLensConfigurationTaggingOutcome(result.GetResultWithOwnership())
                            : GetStorageLensConfigurationTaggingOutcome(std::move(result.GetError()));
}

GetStorageLensGroupOutcome S3ControlClient::GetStorageLensGroup(const GetStorageLensGroupRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageLensGroup", "Required field: Name, is not set");
    return GetStorageLensGroupOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelensgroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetStorageLensGroupOutcome(result.GetResultWithOwnership())
                            : GetStorageLensGroupOutcome(std::move(result.GetError()));
}

ListAccessGrantsOutcome S3ControlClient::ListAccessGrants(const ListAccessGrantsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessGrants", "Required field: AccountId, is not set");
    return ListAccessGrantsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/grants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessGrantsOutcome(result.GetResultWithOwnership())
                            : ListAccessGrantsOutcome(std::move(result.GetError()));
}

ListAccessGrantsInstancesOutcome S3ControlClient::ListAccessGrantsInstances(const ListAccessGrantsInstancesRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessGrantsInstances", "Required field: AccountId, is not set");
    return ListAccessGrantsInstancesOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessGrantsInstancesOutcome(result.GetResultWithOwnership())
                            : ListAccessGrantsInstancesOutcome(std::move(result.GetError()));
}

ListAccessGrantsLocationsOutcome S3ControlClient::ListAccessGrantsLocations(const ListAccessGrantsLocationsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessGrantsLocations", "Required field: AccountId, is not set");
    return ListAccessGrantsLocationsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/locations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessGrantsLocationsOutcome(result.GetResultWithOwnership())
                            : ListAccessGrantsLocationsOutcome(std::move(result.GetError()));
}

ListAccessPointsOutcome S3ControlClient::ListAccessPoints(const ListAccessPointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessPointsOutcome(result.GetResultWithOwnership())
                            : ListAccessPointsOutcome(std::move(result.GetError()));
}

ListAccessPointsForDirectoryBucketsOutcome S3ControlClient::ListAccessPointsForDirectoryBuckets(
    const ListAccessPointsForDirectoryBucketsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessPointsForDirectoryBuckets", "Required field: AccountId, is not set");
    return ListAccessPointsForDirectoryBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointfordirectory");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessPointsForDirectoryBucketsOutcome(result.GetResultWithOwnership())
                            : ListAccessPointsForDirectoryBucketsOutcome(std::move(result.GetError()));
}

ListAccessPointsForObjectLambdaOutcome S3ControlClient::ListAccessPointsForObjectLambda(
    const ListAccessPointsForObjectLambdaRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessPointsForObjectLambda", "Required field: AccountId, is not set");
    return ListAccessPointsForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessPointsForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : ListAccessPointsForObjectLambdaOutcome(std::move(result.GetError()));
}

ListCallerAccessGrantsOutcome S3ControlClient::ListCallerAccessGrants(const ListCallerAccessGrantsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCallerAccessGrants", "Required field: AccountId, is not set");
    return ListCallerAccessGrantsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/caller/grants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCallerAccessGrantsOutcome(result.GetResultWithOwnership())
                            : ListCallerAccessGrantsOutcome(std::move(result.GetError()));
}

ListJobsOutcome S3ControlClient::ListJobs(const ListJobsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobsOutcome(result.GetResultWithOwnership()) : ListJobsOutcome(std::move(result.GetError()));
}

ListMultiRegionAccessPointsOutcome S3ControlClient::ListMultiRegionAccessPoints(const ListMultiRegionAccessPointsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMultiRegionAccessPoints", "Required field: AccountId, is not set");
    return ListMultiRegionAccessPointsOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMultiRegionAccessPointsOutcome(result.GetResultWithOwnership())
                            : ListMultiRegionAccessPointsOutcome(std::move(result.GetError()));
}

ListRegionalBucketsOutcome S3ControlClient::ListRegionalBuckets(const ListRegionalBucketsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRegionalBuckets", "Required field: AccountId, is not set");
    return ListRegionalBucketsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRegionalBucketsOutcome(result.GetResultWithOwnership())
                            : ListRegionalBucketsOutcome(std::move(result.GetError()));
}

ListStorageLensConfigurationsOutcome S3ControlClient::ListStorageLensConfigurations(
    const ListStorageLensConfigurationsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStorageLensConfigurations", "Required field: AccountId, is not set");
    return ListStorageLensConfigurationsOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStorageLensConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListStorageLensConfigurationsOutcome(std::move(result.GetError()));
}

ListStorageLensGroupsOutcome S3ControlClient::ListStorageLensGroups(const ListStorageLensGroupsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStorageLensGroups", "Required field: AccountId, is not set");
    return ListStorageLensGroupsOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelensgroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStorageLensGroupsOutcome(result.GetResultWithOwnership())
                            : ListStorageLensGroupsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome S3ControlClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: AccountId, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AccountId]", false));
  }
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutAccessGrantsInstanceResourcePolicyOutcome S3ControlClient::PutAccessGrantsInstanceResourcePolicy(
    const PutAccessGrantsInstanceResourcePolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAccessGrantsInstanceResourcePolicy", "Required field: AccountId, is not set");
    return PutAccessGrantsInstanceResourcePolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/resourcepolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutAccessGrantsInstanceResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutAccessGrantsInstanceResourcePolicyOutcome(std::move(result.GetError()));
}

PutAccessPointConfigurationForObjectLambdaOutcome S3ControlClient::PutAccessPointConfigurationForObjectLambda(
    const PutAccessPointConfigurationForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAccessPointConfigurationForObjectLambda", "Required field: Name, is not set");
    return PutAccessPointConfigurationForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutAccessPointConfigurationForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : PutAccessPointConfigurationForObjectLambdaOutcome(std::move(result.GetError()));
}

PutAccessPointPolicyOutcome S3ControlClient::PutAccessPointPolicy(const PutAccessPointPolicyRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicy", "Required field: Name, is not set");
    return PutAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutAccessPointPolicyOutcome(result.GetResultWithOwnership())
                            : PutAccessPointPolicyOutcome(std::move(result.GetError()));
}

PutAccessPointPolicyForObjectLambdaOutcome S3ControlClient::PutAccessPointPolicyForObjectLambda(
    const PutAccessPointPolicyForObjectLambdaRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAccessPointPolicyForObjectLambda", "Required field: Name, is not set");
    return PutAccessPointPolicyForObjectLambdaOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspointforobjectlambda/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutAccessPointPolicyForObjectLambdaOutcome(result.GetResultWithOwnership())
                            : PutAccessPointPolicyForObjectLambdaOutcome(std::move(result.GetError()));
}

PutAccessPointScopeOutcome S3ControlClient::PutAccessPointScope(const PutAccessPointScopeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAccessPointScope", "Required field: Name, is not set");
    return PutAccessPointScopeOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scope");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutAccessPointScopeOutcome(result.GetResultWithOwnership())
                            : PutAccessPointScopeOutcome(std::move(result.GetError()));
}

PutBucketLifecycleConfigurationOutcome S3ControlClient::PutBucketLifecycleConfiguration(
    const PutBucketLifecycleConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycleconfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketLifecycleConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBucketLifecycleConfigurationOutcome(std::move(result.GetError()));
}

PutBucketPolicyOutcome S3ControlClient::PutBucketPolicy(const PutBucketPolicyRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketPolicyOutcome(result.GetResultWithOwnership())
                            : PutBucketPolicyOutcome(std::move(result.GetError()));
}

PutBucketReplicationOutcome S3ControlClient::PutBucketReplication(const PutBucketReplicationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketReplication", "Required field: Bucket, is not set");
    return PutBucketReplicationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketReplicationOutcome(result.GetResultWithOwnership())
                            : PutBucketReplicationOutcome(std::move(result.GetError()));
}

PutBucketTaggingOutcome S3ControlClient::PutBucketTagging(const PutBucketTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketTaggingOutcome(result.GetResultWithOwnership())
                            : PutBucketTaggingOutcome(std::move(result.GetError()));
}

PutBucketVersioningOutcome S3ControlClient::PutBucketVersioning(const PutBucketVersioningRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "Required field: Bucket, is not set");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/bucket/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBucket());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versioning");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketVersioningOutcome(result.GetResultWithOwnership())
                            : PutBucketVersioningOutcome(std::move(result.GetError()));
}

PutJobTaggingOutcome S3ControlClient::PutJobTagging(const PutJobTaggingRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutJobTagging", "Required field: AccountId, is not set");
    return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutJobTagging", "Required field: JobId, is not set");
    return PutJobTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutJobTaggingOutcome(result.GetResultWithOwnership()) : PutJobTaggingOutcome(std::move(result.GetError()));
}

PutMultiRegionAccessPointPolicyOutcome S3ControlClient::PutMultiRegionAccessPointPolicy(
    const PutMultiRegionAccessPointPolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMultiRegionAccessPointPolicy", "Required field: AccountId, is not set");
    return PutMultiRegionAccessPointPolicyOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/async-requests/mrap/put-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutMultiRegionAccessPointPolicyOutcome(result.GetResultWithOwnership())
                            : PutMultiRegionAccessPointPolicyOutcome(std::move(result.GetError()));
}

PutPublicAccessBlockOutcome S3ControlClient::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: AccountId, is not set");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/configuration/publicAccessBlock");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutPublicAccessBlockOutcome(result.GetResultWithOwnership())
                            : PutPublicAccessBlockOutcome(std::move(result.GetError()));
}

PutStorageLensConfigurationOutcome S3ControlClient::PutStorageLensConfiguration(const PutStorageLensConfigurationRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Required field: ConfigId, is not set");
    return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfiguration", "Required field: AccountId, is not set");
    return PutStorageLensConfigurationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutStorageLensConfigurationOutcome(result.GetResultWithOwnership())
                            : PutStorageLensConfigurationOutcome(std::move(result.GetError()));
}

PutStorageLensConfigurationTaggingOutcome S3ControlClient::PutStorageLensConfigurationTagging(
    const PutStorageLensConfigurationTaggingRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Required field: ConfigId, is not set");
    return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutStorageLensConfigurationTagging", "Required field: AccountId, is not set");
    return PutStorageLensConfigurationTaggingOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutStorageLensConfigurationTaggingOutcome(result.GetResultWithOwnership())
                            : PutStorageLensConfigurationTaggingOutcome(std::move(result.GetError()));
}

SubmitMultiRegionAccessPointRoutesOutcome S3ControlClient::SubmitMultiRegionAccessPointRoutes(
    const SubmitMultiRegionAccessPointRoutesRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitMultiRegionAccessPointRoutes", "Required field: AccountId, is not set");
    return SubmitMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.MrapHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubmitMultiRegionAccessPointRoutes", "Required field: Mrap, is not set");
    return SubmitMultiRegionAccessPointRoutesOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Mrap]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/mrap/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetMrap());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? SubmitMultiRegionAccessPointRoutesOutcome(result.GetResultWithOwnership())
                            : SubmitMultiRegionAccessPointRoutesOutcome(std::move(result.GetError()));
}

TagResourceOutcome S3ControlClient::TagResource(const TagResourceRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: AccountId, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AccountId]", false));
  }
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome S3ControlClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: AccountId, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AccountId]", false));
  }
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/tags/");
    endpointResolutionOutcome.GetResult().SetRfc3986Encoded(true);
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAccessGrantsLocationOutcome S3ControlClient::UpdateAccessGrantsLocation(const UpdateAccessGrantsLocationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessGrantsLocation", "Required field: AccountId, is not set");
    return UpdateAccessGrantsLocationOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AccountId]", false));
  }
  if (!request.AccessGrantsLocationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessGrantsLocation", "Required field: AccessGrantsLocationId, is not set");
    return UpdateAccessGrantsLocationOutcome(Aws::Client::AWSError<S3ControlErrors>(
        S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessGrantsLocationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accessgrantsinstance/location/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessGrantsLocationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAccessGrantsLocationOutcome(result.GetResultWithOwnership())
                            : UpdateAccessGrantsLocationOutcome(std::move(result.GetError()));
}

UpdateJobPriorityOutcome S3ControlClient::UpdateJobPriority(const UpdateJobPriorityRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: AccountId, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: JobId, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [JobId]", false));
  }
  if (!request.PriorityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJobPriority", "Required field: Priority, is not set");
    return UpdateJobPriorityOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Priority]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/priority");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateJobPriorityOutcome(result.GetResultWithOwnership())
                            : UpdateJobPriorityOutcome(std::move(result.GetError()));
}

UpdateJobStatusOutcome S3ControlClient::UpdateJobStatus(const UpdateJobStatusRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: AccountId, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AccountId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: JobId, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [JobId]", false));
  }
  if (!request.RequestedJobStatusHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJobStatus", "Required field: RequestedJobStatus, is not set");
    return UpdateJobStatusOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RequestedJobStatus]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateJobStatusOutcome(result.GetResultWithOwnership())
                            : UpdateJobStatusOutcome(std::move(result.GetError()));
}

UpdateStorageLensGroupOutcome S3ControlClient::UpdateStorageLensGroup(const UpdateStorageLensGroupRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStorageLensGroup", "Required field: Name, is not set");
    return UpdateStorageLensGroupOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/storagelensgroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateStorageLensGroupOutcome(result.GetResultWithOwnership())
                            : UpdateStorageLensGroupOutcome(std::move(result.GetError()));
}
