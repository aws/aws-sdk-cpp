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

  return AssociateAccessGrantsIdentityCenterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateAccessGrantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateAccessGrantsInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateAccessGrantsLocationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateAccessPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateAccessPointForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateBucketOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateMultiRegionAccessPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateStorageLensGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteAccessGrantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAccessGrantsInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAccessGrantsInstanceResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAccessGrantsLocationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAccessPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAccessPointForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAccessPointPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAccessPointPolicyForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAccessPointScopeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBucketOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBucketLifecycleConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBucketPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBucketReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBucketTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteJobTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteMultiRegionAccessPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeletePublicAccessBlockOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteStorageLensConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteStorageLensConfigurationTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteStorageLensGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DescribeJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeMultiRegionAccessPointOperationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DissociateAccessGrantsIdentityCenterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return GetAccessGrantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessGrantsInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessGrantsInstanceForPrefixOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessGrantsInstanceResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessGrantsLocationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessPointConfigurationForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessPointForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessPointPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessPointPolicyForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessPointPolicyStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessPointPolicyStatusForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAccessPointScopeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBucketOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBucketLifecycleConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBucketPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBucketReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBucketTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBucketVersioningOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetDataAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetJobTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetMultiRegionAccessPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetMultiRegionAccessPointPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetMultiRegionAccessPointPolicyStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetMultiRegionAccessPointRoutesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetPublicAccessBlockOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetStorageLensConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetStorageLensConfigurationTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetStorageLensGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAccessGrantsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAccessGrantsInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAccessGrantsLocationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccessPointsOutcome S3ControlClient::ListAccessPoints(const ListAccessPointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20180820/accesspoint");
  };

  return ListAccessPointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAccessPointsForDirectoryBucketsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAccessPointsForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListCallerAccessGrantsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListMultiRegionAccessPointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListRegionalBucketsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListStorageLensConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListStorageLensGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return PutAccessGrantsInstanceResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutAccessPointConfigurationForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutAccessPointPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutAccessPointPolicyForObjectLambdaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutAccessPointScopeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutBucketLifecycleConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutBucketPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutBucketReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutBucketTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutBucketVersioningOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutJobTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutMultiRegionAccessPointPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return PutPublicAccessBlockOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutStorageLensConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutStorageLensConfigurationTaggingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return SubmitMultiRegionAccessPointRoutesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateAccessGrantsLocationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateJobPriorityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateJobStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateStorageLensGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
