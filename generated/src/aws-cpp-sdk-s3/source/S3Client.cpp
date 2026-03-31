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
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/S3EndpointProvider.h>
#include <aws/s3/S3ErrorMarshaller.h>
#include <aws/s3/S3ExpressSignerProvider.h>
#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <aws/s3/model/CopyObjectRequest.h>
#include <aws/s3/model/CreateBucketMetadataConfigurationRequest.h>
#include <aws/s3/model/CreateBucketMetadataTableConfigurationRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/CreateSessionRequest.h>
#include <aws/s3/model/DeleteBucketAnalyticsConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketCorsRequest.h>
#include <aws/s3/model/DeleteBucketEncryptionRequest.h>
#include <aws/s3/model/DeleteBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketInventoryConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketLifecycleRequest.h>
#include <aws/s3/model/DeleteBucketMetadataConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketMetadataTableConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketMetricsConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketOwnershipControlsRequest.h>
#include <aws/s3/model/DeleteBucketPolicyRequest.h>
#include <aws/s3/model/DeleteBucketReplicationRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteBucketTaggingRequest.h>
#include <aws/s3/model/DeleteBucketWebsiteRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/DeleteObjectTaggingRequest.h>
#include <aws/s3/model/DeleteObjectsRequest.h>
#include <aws/s3/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3/model/GetBucketAbacRequest.h>
#include <aws/s3/model/GetBucketAccelerateConfigurationRequest.h>
#include <aws/s3/model/GetBucketAclRequest.h>
#include <aws/s3/model/GetBucketAnalyticsConfigurationRequest.h>
#include <aws/s3/model/GetBucketCorsRequest.h>
#include <aws/s3/model/GetBucketEncryptionRequest.h>
#include <aws/s3/model/GetBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3/model/GetBucketInventoryConfigurationRequest.h>
#include <aws/s3/model/GetBucketLifecycleConfigurationRequest.h>
#include <aws/s3/model/GetBucketLocationRequest.h>
#include <aws/s3/model/GetBucketLoggingRequest.h>
#include <aws/s3/model/GetBucketMetadataConfigurationRequest.h>
#include <aws/s3/model/GetBucketMetadataTableConfigurationRequest.h>
#include <aws/s3/model/GetBucketMetricsConfigurationRequest.h>
#include <aws/s3/model/GetBucketNotificationConfigurationRequest.h>
#include <aws/s3/model/GetBucketOwnershipControlsRequest.h>
#include <aws/s3/model/GetBucketPolicyRequest.h>
#include <aws/s3/model/GetBucketPolicyStatusRequest.h>
#include <aws/s3/model/GetBucketReplicationRequest.h>
#include <aws/s3/model/GetBucketRequestPaymentRequest.h>
#include <aws/s3/model/GetBucketTaggingRequest.h>
#include <aws/s3/model/GetBucketVersioningRequest.h>
#include <aws/s3/model/GetBucketWebsiteRequest.h>
#include <aws/s3/model/GetObjectAclRequest.h>
#include <aws/s3/model/GetObjectAttributesRequest.h>
#include <aws/s3/model/GetObjectLegalHoldRequest.h>
#include <aws/s3/model/GetObjectLockConfigurationRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/GetObjectRetentionRequest.h>
#include <aws/s3/model/GetObjectTaggingRequest.h>
#include <aws/s3/model/GetObjectTorrentRequest.h>
#include <aws/s3/model/GetPublicAccessBlockRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/ListBucketAnalyticsConfigurationsRequest.h>
#include <aws/s3/model/ListBucketIntelligentTieringConfigurationsRequest.h>
#include <aws/s3/model/ListBucketInventoryConfigurationsRequest.h>
#include <aws/s3/model/ListBucketMetricsConfigurationsRequest.h>
#include <aws/s3/model/ListBucketsRequest.h>
#include <aws/s3/model/ListDirectoryBucketsRequest.h>
#include <aws/s3/model/ListMultipartUploadsRequest.h>
#include <aws/s3/model/ListObjectVersionsRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/ListPartsRequest.h>
#include <aws/s3/model/PutBucketAbacRequest.h>
#include <aws/s3/model/PutBucketAccelerateConfigurationRequest.h>
#include <aws/s3/model/PutBucketAclRequest.h>
#include <aws/s3/model/PutBucketAnalyticsConfigurationRequest.h>
#include <aws/s3/model/PutBucketCorsRequest.h>
#include <aws/s3/model/PutBucketEncryptionRequest.h>
#include <aws/s3/model/PutBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3/model/PutBucketInventoryConfigurationRequest.h>
#include <aws/s3/model/PutBucketLifecycleConfigurationRequest.h>
#include <aws/s3/model/PutBucketLoggingRequest.h>
#include <aws/s3/model/PutBucketMetricsConfigurationRequest.h>
#include <aws/s3/model/PutBucketNotificationConfigurationRequest.h>
#include <aws/s3/model/PutBucketOwnershipControlsRequest.h>
#include <aws/s3/model/PutBucketPolicyRequest.h>
#include <aws/s3/model/PutBucketReplicationRequest.h>
#include <aws/s3/model/PutBucketRequestPaymentRequest.h>
#include <aws/s3/model/PutBucketTaggingRequest.h>
#include <aws/s3/model/PutBucketVersioningRequest.h>
#include <aws/s3/model/PutBucketWebsiteRequest.h>
#include <aws/s3/model/PutObjectAclRequest.h>
#include <aws/s3/model/PutObjectLegalHoldRequest.h>
#include <aws/s3/model/PutObjectLockConfigurationRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/PutObjectRetentionRequest.h>
#include <aws/s3/model/PutObjectTaggingRequest.h>
#include <aws/s3/model/PutPublicAccessBlockRequest.h>
#include <aws/s3/model/RenameObjectRequest.h>
#include <aws/s3/model/RestoreObjectRequest.h>
#include <aws/s3/model/SelectObjectContentRequest.h>
#include <aws/s3/model/UpdateBucketMetadataInventoryTableConfigurationRequest.h>
#include <aws/s3/model/UpdateBucketMetadataJournalTableConfigurationRequest.h>
#include <aws/s3/model/UpdateObjectEncryptionRequest.h>
#include <aws/s3/model/UploadPartCopyRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/s3/model/WriteGetObjectResponseRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;
using namespace Aws::Utils;

namespace Aws {
namespace S3 {
const char SERVICE_NAME[] = "s3";
const char ALLOCATION_TAG[] = "S3Client";
}  // namespace S3
}  // namespace Aws
const char* S3Client::GetServiceName() { return SERVICE_NAME; }
const char* S3Client::GetAllocationTag() { return ALLOCATION_TAG; }

S3Client::S3Client(const S3Client& rhs)
    : BASECLASS(rhs.m_clientConfiguration,
                Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
                    ALLOCATION_TAG, rhs.GetCredentialsProvider(), rhs.m_clientConfiguration.identityProviderSupplier(*this), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(rhs.m_clientConfiguration.region), rhs.m_clientConfiguration.payloadSigningPolicy,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
      Aws::Client::ClientWithAsyncTemplateMethods<S3Client>(),
      m_clientConfiguration(rhs.m_clientConfiguration),
      m_endpointProvider(rhs.m_endpointProvider) {}

S3Client& S3Client::operator=(const S3Client& rhs) {
  if (&rhs == this) {
    return *this;
  }
  BASECLASS::operator=(rhs);
  m_signerProvider = Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
      ALLOCATION_TAG, rhs.GetCredentialsProvider(), rhs.m_clientConfiguration.identityProviderSupplier(*this), SERVICE_NAME,
      Aws::Region::ComputeSignerRegion(rhs.m_clientConfiguration.region), rhs.m_clientConfiguration.payloadSigningPolicy,
      /*doubleEncodeValue*/ false);
  m_clientConfiguration = rhs.m_clientConfiguration;
  m_endpointProvider = rhs.m_endpointProvider;
  init(m_clientConfiguration);
  return *this;
}

S3Client::S3Client(S3Client&& rhs) noexcept
    : BASECLASS(rhs.m_clientConfiguration,
                Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
                    ALLOCATION_TAG, rhs.GetCredentialsProvider(), rhs.m_clientConfiguration.identityProviderSupplier(*this), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(rhs.m_clientConfiguration.region), rhs.m_clientConfiguration.payloadSigningPolicy,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
      Aws::Client::ClientWithAsyncTemplateMethods<S3Client>(),
      m_clientConfiguration(std::move(rhs.m_clientConfiguration)),
      m_endpointProvider(std::move(rhs.m_endpointProvider)) {}

S3Client& S3Client::operator=(S3Client&& rhs) noexcept {
  if (&rhs == this) {
    return *this;
  }
  BASECLASS::operator=(std::move(rhs));
  m_signerProvider = Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
      ALLOCATION_TAG, rhs.GetCredentialsProvider(), rhs.m_clientConfiguration.identityProviderSupplier(*this), SERVICE_NAME,
      Aws::Region::ComputeSignerRegion(rhs.m_clientConfiguration.region), rhs.m_clientConfiguration.payloadSigningPolicy,
      /*doubleEncodeValue*/ false);
  m_clientConfiguration = std::move(rhs.m_clientConfiguration);
  m_endpointProvider = std::move(rhs.m_endpointProvider);
  init(m_clientConfiguration);
  return *this;
}

S3Client::S3Client(const S3::S3ClientConfiguration& clientConfiguration, std::shared_ptr<S3EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    clientConfiguration.identityProviderSupplier(*this), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region), clientConfiguration.payloadSigningPolicy,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3Client::S3Client(const AWSCredentials& credentials, std::shared_ptr<S3EndpointProviderBase> endpointProvider,
                   const S3::S3ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                    clientConfiguration.identityProviderSupplier(*this), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region), clientConfiguration.payloadSigningPolicy,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3Client::S3Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<S3EndpointProviderBase> endpointProvider, const S3::S3ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
                    ALLOCATION_TAG, credentialsProvider, clientConfiguration.identityProviderSupplier(*this), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region), clientConfiguration.payloadSigningPolicy,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
S3Client::S3Client(const Aws::Client::ClientConfiguration& clientConfiguration,
                   Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/, bool useVirtualAddressing /*= true*/,
                   Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
      m_endpointProvider(Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3Client::S3Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration,
                   Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/, bool useVirtualAddressing /*= true*/,
                   Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                    Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
      m_endpointProvider(Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3Client::S3Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration,
                   Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/, bool useVirtualAddressing /*= true*/,
                   Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::S3ExpressSignerProvider>(
                    ALLOCATION_TAG, credentialsProvider, Aws::MakeShared<DefaultS3ExpressIdentityProvider>(ALLOCATION_TAG, *this),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region), signPayloads,
                    /*doubleEncodeValue*/ false),
                Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption),
      m_endpointProvider(Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
S3Client::~S3Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<S3EndpointProviderBase>& S3Client::accessEndpointProvider() { return m_endpointProvider; }

void S3Client::init(const S3::S3ClientConfiguration& config) {
  AWSClient::SetServiceClientName("S3");
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

void S3Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

S3Client::InvokeOperationOutcome S3Client::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::String bucketName, Aws::Http::HttpMethod httpMethod) const {
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

  if (!bucketName.empty()) {
    request.SetServiceSpecificParameters([bucketName]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
      Aws::Map<Aws::String, Aws::String> params;
      params.emplace("bucketName", bucketName);
      ServiceSpecificParameters serviceSpecificParameters{params};
      return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
    }());
  }

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
AbortMultipartUploadOutcome S3Client::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Bucket, is not set");
    return AbortMultipartUploadOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Key, is not set");
    return AbortMultipartUploadOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: UploadId, is not set");
    return AbortMultipartUploadOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? AbortMultipartUploadOutcome(result.GetResultWithOwnership())
                            : AbortMultipartUploadOutcome(std::move(result.GetError()));
}

CompleteMultipartUploadOutcome S3Client::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Bucket, is not set");
    return CompleteMultipartUploadOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Key, is not set");
    return CompleteMultipartUploadOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: UploadId, is not set");
    return CompleteMultipartUploadOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CompleteMultipartUploadOutcome(result.GetResultWithOwnership())
                            : CompleteMultipartUploadOutcome(std::move(result.GetError()));
}

CopyObjectOutcome S3Client::CopyObject(const CopyObjectRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Bucket, is not set");
    return CopyObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: CopySource, is not set");
    return CopyObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Key, is not set");
    return CopyObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CopyObjectOutcome(result.GetResultWithOwnership()) : CopyObjectOutcome(std::move(result.GetError()));
}

CopyObjectOutcomeCallable S3Client::CopyObjectCallable(const CopyObjectRequest& request) const {
  auto task =
      Aws::MakeShared<std::packaged_task<CopyObjectOutcome()> >(ALLOCATION_TAG, [this, request]() { return this->CopyObject(request); });
  auto packagedFunction = [task]() { (*task)(); };
  m_clientConfiguration.executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::CopyObjectAsync(const CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const {
  m_clientConfiguration.executor->Submit([this, request, handler, context]() { handler(this, request, CopyObject(request), context); });
}

CreateBucketOutcome S3Client::CreateBucket(const CreateBucketRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) { (void)endpointResolutionOutcome; };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBucketOutcome(result.GetResultWithOwnership()) : CreateBucketOutcome(std::move(result.GetError()));
}

CreateBucketMetadataConfigurationOutcome S3Client::CreateBucketMetadataConfiguration(
    const CreateBucketMetadataConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBucketMetadataConfiguration", "Required field: Bucket, is not set");
    return CreateBucketMetadataConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metadataConfiguration");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBucketMetadataConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateBucketMetadataConfigurationOutcome(std::move(result.GetError()));
}

CreateBucketMetadataTableConfigurationOutcome S3Client::CreateBucketMetadataTableConfiguration(
    const CreateBucketMetadataTableConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBucketMetadataTableConfiguration", "Required field: Bucket, is not set");
    return CreateBucketMetadataTableConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metadataTable");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBucketMetadataTableConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateBucketMetadataTableConfigurationOutcome(std::move(result.GetError()));
}

CreateMultipartUploadOutcome S3Client::CreateMultipartUpload(const CreateMultipartUploadRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Bucket, is not set");
    return CreateMultipartUploadOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Key, is not set");
    return CreateMultipartUploadOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?uploads");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMultipartUploadOutcome(result.GetResultWithOwnership())
                            : CreateMultipartUploadOutcome(std::move(result.GetError()));
}

CreateSessionOutcome S3Client::CreateSession(const CreateSessionRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: Bucket, is not set");
    return CreateSessionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?session");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? CreateSessionOutcome(result.GetResultWithOwnership()) : CreateSessionOutcome(std::move(result.GetError()));
}

DeleteBucketOutcome S3Client::DeleteBucket(const DeleteBucketRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) { (void)endpointResolutionOutcome; };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketOutcome(result.GetResultWithOwnership()) : DeleteBucketOutcome(std::move(result.GetError()));
}

DeleteBucketAnalyticsConfigurationOutcome S3Client::DeleteBucketAnalyticsConfiguration(
    const DeleteBucketAnalyticsConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?analytics");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketAnalyticsConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketAnalyticsConfigurationOutcome(std::move(result.GetError()));
}

DeleteBucketCorsOutcome S3Client::DeleteBucketCors(const DeleteBucketCorsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketCors", "Required field: Bucket, is not set");
    return DeleteBucketCorsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?cors");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketCorsOutcome(result.GetResultWithOwnership())
                            : DeleteBucketCorsOutcome(std::move(result.GetError()));
}

DeleteBucketEncryptionOutcome S3Client::DeleteBucketEncryption(const DeleteBucketEncryptionRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketEncryption", "Required field: Bucket, is not set");
    return DeleteBucketEncryptionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?encryption");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketEncryptionOutcome(result.GetResultWithOwnership())
                            : DeleteBucketEncryptionOutcome(std::move(result.GetError()));
}

DeleteBucketIntelligentTieringConfigurationOutcome S3Client::DeleteBucketIntelligentTieringConfiguration(
    const DeleteBucketIntelligentTieringConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?intelligent-tiering");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketIntelligentTieringConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketIntelligentTieringConfigurationOutcome(std::move(result.GetError()));
}

DeleteBucketInventoryConfigurationOutcome S3Client::DeleteBucketInventoryConfiguration(
    const DeleteBucketInventoryConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketInventoryConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Id, is not set");
    return DeleteBucketInventoryConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?inventory");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketInventoryConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketInventoryConfigurationOutcome(std::move(result.GetError()));
}

DeleteBucketLifecycleOutcome S3Client::DeleteBucketLifecycle(const DeleteBucketLifecycleRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycle", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?lifecycle");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketLifecycleOutcome(result.GetResultWithOwnership())
                            : DeleteBucketLifecycleOutcome(std::move(result.GetError()));
}

DeleteBucketMetadataConfigurationOutcome S3Client::DeleteBucketMetadataConfiguration(
    const DeleteBucketMetadataConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetadataConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketMetadataConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metadataConfiguration");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketMetadataConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketMetadataConfigurationOutcome(std::move(result.GetError()));
}

DeleteBucketMetadataTableConfigurationOutcome S3Client::DeleteBucketMetadataTableConfiguration(
    const DeleteBucketMetadataTableConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetadataTableConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketMetadataTableConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metadataTable");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketMetadataTableConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketMetadataTableConfigurationOutcome(std::move(result.GetError()));
}

DeleteBucketMetricsConfigurationOutcome S3Client::DeleteBucketMetricsConfiguration(
    const DeleteBucketMetricsConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketMetricsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Id, is not set");
    return DeleteBucketMetricsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metrics");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketMetricsConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketMetricsConfigurationOutcome(std::move(result.GetError()));
}

DeleteBucketOwnershipControlsOutcome S3Client::DeleteBucketOwnershipControls(const DeleteBucketOwnershipControlsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketOwnershipControls", "Required field: Bucket, is not set");
    return DeleteBucketOwnershipControlsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?ownershipControls");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketOwnershipControlsOutcome(result.GetResultWithOwnership())
                            : DeleteBucketOwnershipControlsOutcome(std::move(result.GetError()));
}

DeleteBucketPolicyOutcome S3Client::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?policy");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteBucketPolicyOutcome(std::move(result.GetError()));
}

DeleteBucketReplicationOutcome S3Client::DeleteBucketReplication(const DeleteBucketReplicationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketReplication", "Required field: Bucket, is not set");
    return DeleteBucketReplicationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?replication");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketReplicationOutcome(result.GetResultWithOwnership())
                            : DeleteBucketReplicationOutcome(std::move(result.GetError()));
}

DeleteBucketTaggingOutcome S3Client::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?tagging");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketTaggingOutcome(result.GetResultWithOwnership())
                            : DeleteBucketTaggingOutcome(std::move(result.GetError()));
}

DeleteBucketWebsiteOutcome S3Client::DeleteBucketWebsite(const DeleteBucketWebsiteRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBucketWebsite", "Required field: Bucket, is not set");
    return DeleteBucketWebsiteOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?website");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBucketWebsiteOutcome(result.GetResultWithOwnership())
                            : DeleteBucketWebsiteOutcome(std::move(result.GetError()));
}

DeleteObjectOutcome S3Client::DeleteObject(const DeleteObjectRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Bucket, is not set");
    return DeleteObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Key, is not set");
    return DeleteObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteObjectOutcome(result.GetResultWithOwnership()) : DeleteObjectOutcome(std::move(result.GetError()));
}

DeleteObjectTaggingOutcome S3Client::DeleteObjectTagging(const DeleteObjectTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Bucket, is not set");
    return DeleteObjectTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Key, is not set");
    return DeleteObjectTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?tagging");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteObjectTaggingOutcome(result.GetResultWithOwnership())
                            : DeleteObjectTaggingOutcome(std::move(result.GetError()));
}

DeleteObjectsOutcome S3Client::DeleteObjects(const DeleteObjectsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteObjects", "Required field: Bucket, is not set");
    return DeleteObjectsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?delete");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteObjectsOutcome(result.GetResultWithOwnership()) : DeleteObjectsOutcome(std::move(result.GetError()));
}

DeletePublicAccessBlockOutcome S3Client::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: Bucket, is not set");
    return DeletePublicAccessBlockOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?publicAccessBlock");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePublicAccessBlockOutcome(result.GetResultWithOwnership())
                            : DeletePublicAccessBlockOutcome(std::move(result.GetError()));
}

GetBucketAbacOutcome S3Client::GetBucketAbac(const GetBucketAbacRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketAbac", "Required field: Bucket, is not set");
    return GetBucketAbacOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?abac");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketAbacOutcome(result.GetResultWithOwnership()) : GetBucketAbacOutcome(std::move(result.GetError()));
}

GetBucketAccelerateConfigurationOutcome S3Client::GetBucketAccelerateConfiguration(
    const GetBucketAccelerateConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return GetBucketAccelerateConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?accelerate");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketAccelerateConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketAccelerateConfigurationOutcome(std::move(result.GetError()));
}

GetBucketAclOutcome S3Client::GetBucketAcl(const GetBucketAclRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketAcl", "Required field: Bucket, is not set");
    return GetBucketAclOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?acl");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketAclOutcome(result.GetResultWithOwnership()) : GetBucketAclOutcome(std::move(result.GetError()));
}

GetBucketAnalyticsConfigurationOutcome S3Client::GetBucketAnalyticsConfiguration(
    const GetBucketAnalyticsConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return GetBucketAnalyticsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return GetBucketAnalyticsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?analytics");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketAnalyticsConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketAnalyticsConfigurationOutcome(std::move(result.GetError()));
}

GetBucketCorsOutcome S3Client::GetBucketCors(const GetBucketCorsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketCors", "Required field: Bucket, is not set");
    return GetBucketCorsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?cors");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketCorsOutcome(result.GetResultWithOwnership()) : GetBucketCorsOutcome(std::move(result.GetError()));
}

GetBucketEncryptionOutcome S3Client::GetBucketEncryption(const GetBucketEncryptionRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketEncryption", "Required field: Bucket, is not set");
    return GetBucketEncryptionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?encryption");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketEncryptionOutcome(result.GetResultWithOwnership())
                            : GetBucketEncryptionOutcome(std::move(result.GetError()));
}

GetBucketIntelligentTieringConfigurationOutcome S3Client::GetBucketIntelligentTieringConfiguration(
    const GetBucketIntelligentTieringConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?intelligent-tiering");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketIntelligentTieringConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketIntelligentTieringConfigurationOutcome(std::move(result.GetError()));
}

GetBucketInventoryConfigurationOutcome S3Client::GetBucketInventoryConfiguration(
    const GetBucketInventoryConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return GetBucketInventoryConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Id, is not set");
    return GetBucketInventoryConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?inventory");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketInventoryConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketInventoryConfigurationOutcome(std::move(result.GetError()));
}

GetBucketLifecycleConfigurationOutcome S3Client::GetBucketLifecycleConfiguration(
    const GetBucketLifecycleConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?lifecycle");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketLifecycleConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketLifecycleConfigurationOutcome(std::move(result.GetError()));
}

GetBucketLocationOutcome S3Client::GetBucketLocation(const GetBucketLocationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketLocation", "Required field: Bucket, is not set");
    return GetBucketLocationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?location");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketLocationOutcome(result.GetResultWithOwnership())
                            : GetBucketLocationOutcome(std::move(result.GetError()));
}

GetBucketLoggingOutcome S3Client::GetBucketLogging(const GetBucketLoggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketLogging", "Required field: Bucket, is not set");
    return GetBucketLoggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?logging");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketLoggingOutcome(result.GetResultWithOwnership())
                            : GetBucketLoggingOutcome(std::move(result.GetError()));
}

GetBucketMetadataConfigurationOutcome S3Client::GetBucketMetadataConfiguration(const GetBucketMetadataConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketMetadataConfiguration", "Required field: Bucket, is not set");
    return GetBucketMetadataConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metadataConfiguration");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketMetadataConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketMetadataConfigurationOutcome(std::move(result.GetError()));
}

GetBucketMetadataTableConfigurationOutcome S3Client::GetBucketMetadataTableConfiguration(
    const GetBucketMetadataTableConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketMetadataTableConfiguration", "Required field: Bucket, is not set");
    return GetBucketMetadataTableConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metadataTable");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketMetadataTableConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketMetadataTableConfigurationOutcome(std::move(result.GetError()));
}

GetBucketMetricsConfigurationOutcome S3Client::GetBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return GetBucketMetricsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Id, is not set");
    return GetBucketMetricsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metrics");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketMetricsConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketMetricsConfigurationOutcome(std::move(result.GetError()));
}

GetBucketNotificationConfigurationOutcome S3Client::GetBucketNotificationConfiguration(
    const GetBucketNotificationConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return GetBucketNotificationConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?notification");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetBucketNotificationConfigurationOutcome(std::move(result.GetError()));
}

GetBucketOwnershipControlsOutcome S3Client::GetBucketOwnershipControls(const GetBucketOwnershipControlsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketOwnershipControls", "Required field: Bucket, is not set");
    return GetBucketOwnershipControlsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?ownershipControls");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketOwnershipControlsOutcome(result.GetResultWithOwnership())
                            : GetBucketOwnershipControlsOutcome(std::move(result.GetError()));
}

GetBucketPolicyOutcome S3Client::GetBucketPolicy(const GetBucketPolicyRequest& request) const {
  AWS_OPERATION_GUARD(GetBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketPolicyOutcome>(
      [&]() -> GetBucketPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        Aws::StringStream ss;
        ss.str("?policy");
        endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
        request.SetServiceSpecificParameters([&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetBucketPolicyOutcome(result.GetResultWithOwnership())
                                  : GetBucketPolicyOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketPolicyStatusOutcome S3Client::GetBucketPolicyStatus(const GetBucketPolicyStatusRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketPolicyStatus", "Required field: Bucket, is not set");
    return GetBucketPolicyStatusOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?policyStatus");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketPolicyStatusOutcome(result.GetResultWithOwnership())
                            : GetBucketPolicyStatusOutcome(std::move(result.GetError()));
}

GetBucketReplicationOutcome S3Client::GetBucketReplication(const GetBucketReplicationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketReplication", "Required field: Bucket, is not set");
    return GetBucketReplicationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?replication");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketReplicationOutcome(result.GetResultWithOwnership())
                            : GetBucketReplicationOutcome(std::move(result.GetError()));
}

GetBucketRequestPaymentOutcome S3Client::GetBucketRequestPayment(const GetBucketRequestPaymentRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketRequestPayment", "Required field: Bucket, is not set");
    return GetBucketRequestPaymentOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?requestPayment");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketRequestPaymentOutcome(result.GetResultWithOwnership())
                            : GetBucketRequestPaymentOutcome(std::move(result.GetError()));
}

GetBucketTaggingOutcome S3Client::GetBucketTagging(const GetBucketTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?tagging");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketTaggingOutcome(result.GetResultWithOwnership())
                            : GetBucketTaggingOutcome(std::move(result.GetError()));
}

GetBucketVersioningOutcome S3Client::GetBucketVersioning(const GetBucketVersioningRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "Required field: Bucket, is not set");
    return GetBucketVersioningOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?versioning");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketVersioningOutcome(result.GetResultWithOwnership())
                            : GetBucketVersioningOutcome(std::move(result.GetError()));
}

GetBucketWebsiteOutcome S3Client::GetBucketWebsite(const GetBucketWebsiteRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBucketWebsite", "Required field: Bucket, is not set");
    return GetBucketWebsiteOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?website");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBucketWebsiteOutcome(result.GetResultWithOwnership())
                            : GetBucketWebsiteOutcome(std::move(result.GetError()));
}

GetObjectOutcome S3Client::GetObject(const GetObjectRequest& request) const {
  AWS_OPERATION_GUARD(GetObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Bucket, is not set");
    return GetObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Key, is not set");
    return GetObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectOutcome>(
      [&]() -> GetObjectOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
        request.SetServiceSpecificParameters([&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetObjectOutcome(result.GetResultWithOwnership()) : GetObjectOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectOutcomeCallable S3Client::GetObjectCallable(const GetObjectRequest& request) const {
  auto task =
      Aws::MakeShared<std::packaged_task<GetObjectOutcome()> >(ALLOCATION_TAG, [this, request]() { return this->GetObject(request); });
  auto packagedFunction = [task]() { (*task)(); };
  m_clientConfiguration.executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectAsync(const GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const {
  m_clientConfiguration.executor->Submit([this, request, handler, context]() { handler(this, request, GetObject(request), context); });
}

GetObjectAclOutcome S3Client::GetObjectAcl(const GetObjectAclRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Bucket, is not set");
    return GetObjectAclOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Key, is not set");
    return GetObjectAclOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?acl");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetObjectAclOutcome(result.GetResultWithOwnership()) : GetObjectAclOutcome(std::move(result.GetError()));
}

GetObjectAttributesOutcome S3Client::GetObjectAttributes(const GetObjectAttributesRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Bucket, is not set");
    return GetObjectAttributesOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Key, is not set");
    return GetObjectAttributesOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.ObjectAttributesHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: ObjectAttributes, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ObjectAttributes]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?attributes");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetObjectAttributesOutcome(result.GetResultWithOwnership())
                            : GetObjectAttributesOutcome(std::move(result.GetError()));
}

GetObjectLegalHoldOutcome S3Client::GetObjectLegalHold(const GetObjectLegalHoldRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Bucket, is not set");
    return GetObjectLegalHoldOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Key, is not set");
    return GetObjectLegalHoldOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?legal-hold");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetObjectLegalHoldOutcome(result.GetResultWithOwnership())
                            : GetObjectLegalHoldOutcome(std::move(result.GetError()));
}

GetObjectLockConfigurationOutcome S3Client::GetObjectLockConfiguration(const GetObjectLockConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectLockConfiguration", "Required field: Bucket, is not set");
    return GetObjectLockConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?object-lock");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetObjectLockConfigurationOutcome(result.GetResultWithOwnership())
                            : GetObjectLockConfigurationOutcome(std::move(result.GetError()));
}

GetObjectRetentionOutcome S3Client::GetObjectRetention(const GetObjectRetentionRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Bucket, is not set");
    return GetObjectRetentionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Key, is not set");
    return GetObjectRetentionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?retention");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetObjectRetentionOutcome(result.GetResultWithOwnership())
                            : GetObjectRetentionOutcome(std::move(result.GetError()));
}

GetObjectTaggingOutcome S3Client::GetObjectTagging(const GetObjectTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Bucket, is not set");
    return GetObjectTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Key, is not set");
    return GetObjectTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?tagging");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetObjectTaggingOutcome(result.GetResultWithOwnership())
                            : GetObjectTaggingOutcome(std::move(result.GetError()));
}

GetObjectTorrentOutcome S3Client::GetObjectTorrent(const GetObjectTorrentRequest& request) const {
  AWS_OPERATION_GUARD(GetObjectTorrent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Bucket, is not set");
    return GetObjectTorrentOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Key, is not set");
    return GetObjectTorrentOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectTorrent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectTorrent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectTorrentOutcome>(
      [&]() -> GetObjectTorrentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        Aws::StringStream ss;
        endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
        ss.str("?torrent");
        endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
        request.SetServiceSpecificParameters([&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetObjectTorrentOutcome(result.GetResultWithOwnership())
                                  : GetObjectTorrentOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPublicAccessBlockOutcome S3Client::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: Bucket, is not set");
    return GetPublicAccessBlockOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?publicAccessBlock");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPublicAccessBlockOutcome(result.GetResultWithOwnership())
                            : GetPublicAccessBlockOutcome(std::move(result.GetError()));
}

HeadBucketOutcome S3Client::HeadBucket(const HeadBucketRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HeadBucket", "Required field: Bucket, is not set");
    return HeadBucketOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) { (void)endpointResolutionOutcome; };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_HEAD);
  return result.IsSuccess() ? HeadBucketOutcome(result.GetResultWithOwnership()) : HeadBucketOutcome(std::move(result.GetError()));
}

HeadObjectOutcome S3Client::HeadObject(const HeadObjectRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Bucket, is not set");
    return HeadObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Key, is not set");
    return HeadObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_HEAD);
  return result.IsSuccess() ? HeadObjectOutcome(result.GetResultWithOwnership()) : HeadObjectOutcome(std::move(result.GetError()));
}

ListBucketAnalyticsConfigurationsOutcome S3Client::ListBucketAnalyticsConfigurations(
    const ListBucketAnalyticsConfigurationsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBucketAnalyticsConfigurations", "Required field: Bucket, is not set");
    return ListBucketAnalyticsConfigurationsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?analytics");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBucketAnalyticsConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListBucketAnalyticsConfigurationsOutcome(std::move(result.GetError()));
}

ListBucketIntelligentTieringConfigurationsOutcome S3Client::ListBucketIntelligentTieringConfigurations(
    const ListBucketIntelligentTieringConfigurationsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBucketIntelligentTieringConfigurations", "Required field: Bucket, is not set");
    return ListBucketIntelligentTieringConfigurationsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?intelligent-tiering");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBucketIntelligentTieringConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListBucketIntelligentTieringConfigurationsOutcome(std::move(result.GetError()));
}

ListBucketInventoryConfigurationsOutcome S3Client::ListBucketInventoryConfigurations(
    const ListBucketInventoryConfigurationsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBucketInventoryConfigurations", "Required field: Bucket, is not set");
    return ListBucketInventoryConfigurationsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?inventory");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBucketInventoryConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListBucketInventoryConfigurationsOutcome(std::move(result.GetError()));
}

ListBucketMetricsConfigurationsOutcome S3Client::ListBucketMetricsConfigurations(
    const ListBucketMetricsConfigurationsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBucketMetricsConfigurations", "Required field: Bucket, is not set");
    return ListBucketMetricsConfigurationsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metrics");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBucketMetricsConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListBucketMetricsConfigurationsOutcome(std::move(result.GetError()));
}

ListBucketsOutcome S3Client::ListBuckets(const ListBucketsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) { (void)endpointResolutionOutcome; };

  auto result = InvokeServiceOperation(request, uriResolver, "", Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBucketsOutcome(result.GetResultWithOwnership()) : ListBucketsOutcome(std::move(result.GetError()));
}

ListDirectoryBucketsOutcome S3Client::ListDirectoryBuckets(const ListDirectoryBucketsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) { (void)endpointResolutionOutcome; };

  auto result = InvokeServiceOperation(request, uriResolver, "", Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDirectoryBucketsOutcome(result.GetResultWithOwnership())
                            : ListDirectoryBucketsOutcome(std::move(result.GetError()));
}

ListMultipartUploadsOutcome S3Client::ListMultipartUploads(const ListMultipartUploadsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: Bucket, is not set");
    return ListMultipartUploadsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?uploads");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMultipartUploadsOutcome(result.GetResultWithOwnership())
                            : ListMultipartUploadsOutcome(std::move(result.GetError()));
}

ListObjectVersionsOutcome S3Client::ListObjectVersions(const ListObjectVersionsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectVersions", "Required field: Bucket, is not set");
    return ListObjectVersionsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?versions");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListObjectVersionsOutcome(result.GetResultWithOwnership())
                            : ListObjectVersionsOutcome(std::move(result.GetError()));
}

ListObjectsOutcome S3Client::ListObjects(const ListObjectsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjects", "Required field: Bucket, is not set");
    return ListObjectsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) { (void)endpointResolutionOutcome; };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListObjectsOutcome(result.GetResultWithOwnership()) : ListObjectsOutcome(std::move(result.GetError()));
}

ListObjectsV2Outcome S3Client::ListObjectsV2(const ListObjectsV2Request& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListObjectsV2", "Required field: Bucket, is not set");
    return ListObjectsV2Outcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?list-type=2");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListObjectsV2Outcome(result.GetResultWithOwnership()) : ListObjectsV2Outcome(std::move(result.GetError()));
}

ListPartsOutcome S3Client::ListParts(const ListPartsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Bucket, is not set");
    return ListPartsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Key, is not set");
    return ListPartsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: UploadId, is not set");
    return ListPartsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPartsOutcome(result.GetResultWithOwnership()) : ListPartsOutcome(std::move(result.GetError()));
}

PutBucketAbacOutcome S3Client::PutBucketAbac(const PutBucketAbacRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketAbac", "Required field: Bucket, is not set");
    return PutBucketAbacOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?abac");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketAbacOutcome(result.GetResultWithOwnership()) : PutBucketAbacOutcome(std::move(result.GetError()));
}

PutBucketAccelerateConfigurationOutcome S3Client::PutBucketAccelerateConfiguration(
    const PutBucketAccelerateConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return PutBucketAccelerateConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?accelerate");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketAccelerateConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBucketAccelerateConfigurationOutcome(std::move(result.GetError()));
}

PutBucketAclOutcome S3Client::PutBucketAcl(const PutBucketAclRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketAcl", "Required field: Bucket, is not set");
    return PutBucketAclOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?acl");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketAclOutcome(result.GetResultWithOwnership()) : PutBucketAclOutcome(std::move(result.GetError()));
}

PutBucketAnalyticsConfigurationOutcome S3Client::PutBucketAnalyticsConfiguration(
    const PutBucketAnalyticsConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return PutBucketAnalyticsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return PutBucketAnalyticsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?analytics");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketAnalyticsConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBucketAnalyticsConfigurationOutcome(std::move(result.GetError()));
}

PutBucketCorsOutcome S3Client::PutBucketCors(const PutBucketCorsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketCors", "Required field: Bucket, is not set");
    return PutBucketCorsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?cors");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketCorsOutcome(result.GetResultWithOwnership()) : PutBucketCorsOutcome(std::move(result.GetError()));
}

PutBucketEncryptionOutcome S3Client::PutBucketEncryption(const PutBucketEncryptionRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketEncryption", "Required field: Bucket, is not set");
    return PutBucketEncryptionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?encryption");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketEncryptionOutcome(result.GetResultWithOwnership())
                            : PutBucketEncryptionOutcome(std::move(result.GetError()));
}

PutBucketIntelligentTieringConfigurationOutcome S3Client::PutBucketIntelligentTieringConfiguration(
    const PutBucketIntelligentTieringConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?intelligent-tiering");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketIntelligentTieringConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBucketIntelligentTieringConfigurationOutcome(std::move(result.GetError()));
}

PutBucketInventoryConfigurationOutcome S3Client::PutBucketInventoryConfiguration(
    const PutBucketInventoryConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return PutBucketInventoryConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Id, is not set");
    return PutBucketInventoryConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?inventory");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketInventoryConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBucketInventoryConfigurationOutcome(std::move(result.GetError()));
}

PutBucketLifecycleConfigurationOutcome S3Client::PutBucketLifecycleConfiguration(
    const PutBucketLifecycleConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?lifecycle");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketLifecycleConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBucketLifecycleConfigurationOutcome(std::move(result.GetError()));
}

PutBucketLoggingOutcome S3Client::PutBucketLogging(const PutBucketLoggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketLogging", "Required field: Bucket, is not set");
    return PutBucketLoggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?logging");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketLoggingOutcome(result.GetResultWithOwnership())
                            : PutBucketLoggingOutcome(std::move(result.GetError()));
}

PutBucketMetricsConfigurationOutcome S3Client::PutBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return PutBucketMetricsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Id, is not set");
    return PutBucketMetricsConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metrics");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketMetricsConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBucketMetricsConfigurationOutcome(std::move(result.GetError()));
}

PutBucketNotificationConfigurationOutcome S3Client::PutBucketNotificationConfiguration(
    const PutBucketNotificationConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return PutBucketNotificationConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?notification");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBucketNotificationConfigurationOutcome(std::move(result.GetError()));
}

PutBucketOwnershipControlsOutcome S3Client::PutBucketOwnershipControls(const PutBucketOwnershipControlsRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketOwnershipControls", "Required field: Bucket, is not set");
    return PutBucketOwnershipControlsOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?ownershipControls");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketOwnershipControlsOutcome(result.GetResultWithOwnership())
                            : PutBucketOwnershipControlsOutcome(std::move(result.GetError()));
}

PutBucketPolicyOutcome S3Client::PutBucketPolicy(const PutBucketPolicyRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?policy");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketPolicyOutcome(result.GetResultWithOwnership())
                            : PutBucketPolicyOutcome(std::move(result.GetError()));
}

PutBucketReplicationOutcome S3Client::PutBucketReplication(const PutBucketReplicationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketReplication", "Required field: Bucket, is not set");
    return PutBucketReplicationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?replication");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketReplicationOutcome(result.GetResultWithOwnership())
                            : PutBucketReplicationOutcome(std::move(result.GetError()));
}

PutBucketRequestPaymentOutcome S3Client::PutBucketRequestPayment(const PutBucketRequestPaymentRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketRequestPayment", "Required field: Bucket, is not set");
    return PutBucketRequestPaymentOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?requestPayment");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketRequestPaymentOutcome(result.GetResultWithOwnership())
                            : PutBucketRequestPaymentOutcome(std::move(result.GetError()));
}

PutBucketTaggingOutcome S3Client::PutBucketTagging(const PutBucketTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?tagging");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketTaggingOutcome(result.GetResultWithOwnership())
                            : PutBucketTaggingOutcome(std::move(result.GetError()));
}

PutBucketVersioningOutcome S3Client::PutBucketVersioning(const PutBucketVersioningRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "Required field: Bucket, is not set");
    return PutBucketVersioningOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?versioning");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketVersioningOutcome(result.GetResultWithOwnership())
                            : PutBucketVersioningOutcome(std::move(result.GetError()));
}

PutBucketWebsiteOutcome S3Client::PutBucketWebsite(const PutBucketWebsiteRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBucketWebsite", "Required field: Bucket, is not set");
    return PutBucketWebsiteOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?website");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBucketWebsiteOutcome(result.GetResultWithOwnership())
                            : PutBucketWebsiteOutcome(std::move(result.GetError()));
}

PutObjectOutcome S3Client::PutObject(const PutObjectRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Bucket, is not set");
    return PutObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Key, is not set");
    return PutObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutObjectOutcome(result.GetResultWithOwnership()) : PutObjectOutcome(std::move(result.GetError()));
}

PutObjectOutcomeCallable S3Client::PutObjectCallable(const PutObjectRequest& request) const {
  auto task =
      Aws::MakeShared<std::packaged_task<PutObjectOutcome()> >(ALLOCATION_TAG, [this, request]() { return this->PutObject(request); });
  auto packagedFunction = [task]() { (*task)(); };
  m_clientConfiguration.executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutObjectAsync(const PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const {
  m_clientConfiguration.executor->Submit([this, request, handler, context]() { handler(this, request, PutObject(request), context); });
}

PutObjectAclOutcome S3Client::PutObjectAcl(const PutObjectAclRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Bucket, is not set");
    return PutObjectAclOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Key, is not set");
    return PutObjectAclOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?acl");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutObjectAclOutcome(result.GetResultWithOwnership()) : PutObjectAclOutcome(std::move(result.GetError()));
}

PutObjectLegalHoldOutcome S3Client::PutObjectLegalHold(const PutObjectLegalHoldRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Bucket, is not set");
    return PutObjectLegalHoldOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Key, is not set");
    return PutObjectLegalHoldOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?legal-hold");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutObjectLegalHoldOutcome(result.GetResultWithOwnership())
                            : PutObjectLegalHoldOutcome(std::move(result.GetError()));
}

PutObjectLockConfigurationOutcome S3Client::PutObjectLockConfiguration(const PutObjectLockConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectLockConfiguration", "Required field: Bucket, is not set");
    return PutObjectLockConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?object-lock");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutObjectLockConfigurationOutcome(result.GetResultWithOwnership())
                            : PutObjectLockConfigurationOutcome(std::move(result.GetError()));
}

PutObjectRetentionOutcome S3Client::PutObjectRetention(const PutObjectRetentionRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Bucket, is not set");
    return PutObjectRetentionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Key, is not set");
    return PutObjectRetentionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?retention");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutObjectRetentionOutcome(result.GetResultWithOwnership())
                            : PutObjectRetentionOutcome(std::move(result.GetError()));
}

PutObjectTaggingOutcome S3Client::PutObjectTagging(const PutObjectTaggingRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Bucket, is not set");
    return PutObjectTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Key, is not set");
    return PutObjectTaggingOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?tagging");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutObjectTaggingOutcome(result.GetResultWithOwnership())
                            : PutObjectTaggingOutcome(std::move(result.GetError()));
}

PutPublicAccessBlockOutcome S3Client::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: Bucket, is not set");
    return PutPublicAccessBlockOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?publicAccessBlock");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutPublicAccessBlockOutcome(result.GetResultWithOwnership())
                            : PutPublicAccessBlockOutcome(std::move(result.GetError()));
}

RenameObjectOutcome S3Client::RenameObject(const RenameObjectRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RenameObject", "Required field: Bucket, is not set");
    return RenameObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RenameObject", "Required field: Key, is not set");
    return RenameObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.RenameSourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RenameObject", "Required field: RenameSource, is not set");
    return RenameObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RenameSource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?renameObject");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RenameObjectOutcome(result.GetResultWithOwnership()) : RenameObjectOutcome(std::move(result.GetError()));
}

RestoreObjectOutcome S3Client::RestoreObject(const RestoreObjectRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Bucket, is not set");
    return RestoreObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Key, is not set");
    return RestoreObjectOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?restore");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreObjectOutcome(result.GetResultWithOwnership()) : RestoreObjectOutcome(std::move(result.GetError()));
}

SelectObjectContentOutcome S3Client::SelectObjectContent(SelectObjectContentRequest& request) const {
  AWS_OPERATION_GUARD(SelectObjectContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Bucket, is not set");
    return SelectObjectContentOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Key, is not set");
    return SelectObjectContentOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SelectObjectContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SelectObjectContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SelectObjectContentOutcome>(
      [&]() -> SelectObjectContentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        Aws::StringStream ss;
        endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
        ss.str("?select&select-type=2");
        endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
        request.SetServiceSpecificParameters([&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
          Aws::Map<Aws::String, Aws::String> params;
          params.emplace("bucketName", request.GetBucket());
          ServiceSpecificParameters serviceSpecificParameters{params};
          return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
        }());
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        auto result = MakeRequestWithEventStream(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? SelectObjectContentOutcome(result.GetResultWithOwnership())
                                  : SelectObjectContentOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBucketMetadataInventoryTableConfigurationOutcome S3Client::UpdateBucketMetadataInventoryTableConfiguration(
    const UpdateBucketMetadataInventoryTableConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBucketMetadataInventoryTableConfiguration", "Required field: Bucket, is not set");
    return UpdateBucketMetadataInventoryTableConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metadataInventoryTable");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBucketMetadataInventoryTableConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateBucketMetadataInventoryTableConfigurationOutcome(std::move(result.GetError()));
}

UpdateBucketMetadataJournalTableConfigurationOutcome S3Client::UpdateBucketMetadataJournalTableConfiguration(
    const UpdateBucketMetadataJournalTableConfigurationRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBucketMetadataJournalTableConfiguration", "Required field: Bucket, is not set");
    return UpdateBucketMetadataJournalTableConfigurationOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    ss.str("?metadataJournalTable");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBucketMetadataJournalTableConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateBucketMetadataJournalTableConfigurationOutcome(std::move(result.GetError()));
}

UpdateObjectEncryptionOutcome S3Client::UpdateObjectEncryption(const UpdateObjectEncryptionRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateObjectEncryption", "Required field: Bucket, is not set");
    return UpdateObjectEncryptionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateObjectEncryption", "Required field: Key, is not set");
    return UpdateObjectEncryptionOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
    ss.str("?encryption");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateObjectEncryptionOutcome(result.GetResultWithOwnership())
                            : UpdateObjectEncryptionOutcome(std::move(result.GetError()));
}

UploadPartOutcome S3Client::UploadPart(const UploadPartRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Bucket, is not set");
    return UploadPartOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Key, is not set");
    return UploadPartOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: PartNumber, is not set");
    return UploadPartOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: UploadId, is not set");
    return UploadPartOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UploadPartOutcome(result.GetResultWithOwnership()) : UploadPartOutcome(std::move(result.GetError()));
}

UploadPartCopyOutcome S3Client::UploadPartCopy(const UploadPartCopyRequest& request) const {
  if (!request.BucketHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Bucket, is not set");
    return UploadPartCopyOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: CopySource, is not set");
    return UploadPartCopyOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Key, is not set");
    return UploadPartCopyOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: PartNumber, is not set");
    return UploadPartCopyOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: UploadId, is not set");
    return UploadPartCopyOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetKey());
  };

  auto result = InvokeServiceOperation(request, uriResolver, request.GetBucket(), Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UploadPartCopyOutcome(result.GetResultWithOwnership()) : UploadPartCopyOutcome(std::move(result.GetError()));
}

WriteGetObjectResponseOutcome S3Client::WriteGetObjectResponse(const WriteGetObjectResponseRequest& request) const {
  if (!request.RequestRouteHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestRoute, is not set");
    return WriteGetObjectResponseOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestRoute]", false));
  }
  if (!request.RequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestToken, is not set");
    return WriteGetObjectResponseOutcome(
        Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/WriteGetObjectResponse");
  };

  auto result = InvokeServiceOperation(request, uriResolver, "", Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? WriteGetObjectResponseOutcome(result.GetResultWithOwnership())
                            : WriteGetObjectResponseOutcome(std::move(result.GetError()));
}

#include <aws/core/utils/HashingUtils.h>
Aws::String S3Client::GeneratePresignedUrl(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method,
                                           uint64_t expirationInSeconds) {
  return GeneratePresignedUrl(bucket, key, method, {}, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrl(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method,
                                           const Http::HeaderValueCollection& customizedHeaders, uint64_t expirationInSeconds) {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return {};
  }
  ResolveEndpointOutcome computeEndpointOutcome = m_endpointProvider->ResolveEndpoint({{Aws::String("Bucket"), bucket}});
  if (!computeEndpointOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG,
                        "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError().GetMessage());
    return {};
  }
  Aws::Endpoint::AWSEndpoint& endpoint = computeEndpointOutcome.GetResult();
  endpoint.AddPathSegments(key);
  Aws::Map<Aws::String, Aws::String> params;
  params.emplace("bucketName", bucket);
  ServiceSpecificParameters serviceSpecificParameters{params};
  auto serviceParams = Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
  return AWSClient::GeneratePresignedUrl(endpoint, method, customizedHeaders, expirationInSeconds, Aws::Auth::SIGV4_SIGNER, nullptr,
                                         nullptr, serviceParams);
}

Aws::String S3Client::GeneratePresignedUrlWithSSES3(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method,
                                                    uint64_t expirationInSeconds) {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                  Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
  return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSES3(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method,
                                                    Http::HeaderValueCollection customizedHeaders, uint64_t expirationInSeconds) {
  customizedHeaders.emplace(
      Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION,
      Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
  return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method,
                                                     const Aws::String& kmsMasterKeyId, uint64_t expirationInSeconds) {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(
                                                                   Aws::S3::Model::ServerSideEncryption::aws_kms));
  headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
  return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method,
                                                     Http::HeaderValueCollection customizedHeaders, const Aws::String& kmsMasterKeyId,
                                                     uint64_t expirationInSeconds) {
  customizedHeaders.emplace(
      Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION,
      Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::aws_kms));
  customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
  return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEC(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method,
                                                   const Aws::String& base64EncodedAES256Key, uint64_t expirationInSeconds) {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM,
                  Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
  headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
  Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
  Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
  headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5,
                  Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
  return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEC(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method,
                                                   Http::HeaderValueCollection customizedHeaders, const Aws::String& base64EncodedAES256Key,
                                                   uint64_t expirationInSeconds) {
  customizedHeaders.emplace(
      Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM,
      Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
  customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
  Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
  Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
  customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5,
                            Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
  return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

bool S3Client::MultipartUploadSupported() const { return true; }
