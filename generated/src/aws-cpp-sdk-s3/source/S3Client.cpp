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
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/platform/Environment.h>

#include <aws/s3/S3Client.h>
#include <aws/s3/S3ErrorMarshaller.h>
#include <aws/s3/S3EndpointProvider.h>
#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <aws/s3/model/CopyObjectRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/CreateBucketMetadataTableConfigurationRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/CreateSessionRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteBucketAnalyticsConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketCorsRequest.h>
#include <aws/s3/model/DeleteBucketEncryptionRequest.h>
#include <aws/s3/model/DeleteBucketIntelligentTieringConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketInventoryConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketLifecycleRequest.h>
#include <aws/s3/model/DeleteBucketMetadataTableConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketMetricsConfigurationRequest.h>
#include <aws/s3/model/DeleteBucketOwnershipControlsRequest.h>
#include <aws/s3/model/DeleteBucketPolicyRequest.h>
#include <aws/s3/model/DeleteBucketReplicationRequest.h>
#include <aws/s3/model/DeleteBucketTaggingRequest.h>
#include <aws/s3/model/DeleteBucketWebsiteRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/DeleteObjectTaggingRequest.h>
#include <aws/s3/model/DeleteObjectsRequest.h>
#include <aws/s3/model/DeletePublicAccessBlockRequest.h>
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
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/GetObjectAclRequest.h>
#include <aws/s3/model/GetObjectAttributesRequest.h>
#include <aws/s3/model/GetObjectLegalHoldRequest.h>
#include <aws/s3/model/GetObjectLockConfigurationRequest.h>
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
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/PutObjectAclRequest.h>
#include <aws/s3/model/PutObjectLegalHoldRequest.h>
#include <aws/s3/model/PutObjectLockConfigurationRequest.h>
#include <aws/s3/model/PutObjectRetentionRequest.h>
#include <aws/s3/model/PutObjectTaggingRequest.h>
#include <aws/s3/model/PutPublicAccessBlockRequest.h>
#include <aws/s3/model/RestoreObjectRequest.h>
#include <aws/s3/model/SelectObjectContentRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/s3/model/UploadPartCopyRequest.h>
#include <aws/s3/model/WriteGetObjectResponseRequest.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <aws/s3/S3ExpressIdentityResolver.h>
#include <smithy/identity/signer/built-in/S3ExpressSigner.h>

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


namespace Aws
{
  namespace S3
  {
    const char SERVICE_NAME[] = "s3";
    const char ALLOCATION_TAG[] = "S3Client";
  }
}
const char* S3Client::GetServiceName() {return SERVICE_NAME;}
const char* S3Client::GetAllocationTag() {return ALLOCATION_TAG;}

S3Client::S3Client(const S3::S3ClientConfiguration& clientConfiguration,
                           std::shared_ptr<S3EndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<DefaultS3ExpressIdentityResolver>(ALLOCATION_TAG, *this), GetServiceName(), clientConfiguration.region}},
        })
{
  init(m_clientConfiguration);
}

S3Client::S3Client(const AWSCredentials& credentials,
                           std::shared_ptr<S3EndpointProviderBase> endpointProvider,
                           const S3::S3ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{
  init(m_clientConfiguration);
}

S3Client::S3Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<S3EndpointProviderBase> endpointProvider,
                           const S3::S3ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<DefaultS3ExpressIdentityResolver>(ALLOCATION_TAG,  *this, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
S3Client::S3Client(const Client::ClientConfiguration& clientConfiguration,
        Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/,
        bool useVirtualAddressing /*= true*/,
        Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption):
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
        {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme(Aws::MakeShared<DefaultS3ExpressIdentityResolver>(ALLOCATION_TAG, *this), GetServiceName(), clientConfiguration.region, 
            Aws::MakeShared<smithy::S3ExpressSigner<smithy::AwsSigV4Signer>>( ALLOCATION_TAG, GetServiceName(), clientConfiguration.region, signPayloads))},
      }),
      m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption)
{
}

S3Client::S3Client(
        const Aws::Auth::AWSCredentials& credentials,
        const Client::ClientConfiguration& clientConfiguration,
        Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/,
        bool useVirtualAddressing /*= true*/,
        Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption):
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
        {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme(Aws::MakeShared<DefaultS3ExpressIdentityResolver>(ALLOCATION_TAG, *this), GetServiceName(), clientConfiguration.region, 
            Aws::MakeShared<smithy::S3ExpressSigner<smithy::AwsSigV4Signer>>( ALLOCATION_TAG, GetServiceName(), clientConfiguration.region, signPayloads))},
      }),
      m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption)
{
}

S3Client::S3Client(
        const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration,
        Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads /*= Never*/,
        bool useVirtualAddressing /*= true*/,
        Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption):
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<S3ErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
        {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme(Aws::MakeShared<DefaultS3ExpressIdentityResolver>(ALLOCATION_TAG, *this), GetServiceName(), clientConfiguration.region, 
            Aws::MakeShared<smithy::S3ExpressSigner<smithy::AwsSigV4Signer>>( ALLOCATION_TAG, GetServiceName(), clientConfiguration.region, signPayloads))},
      }),
      m_clientConfiguration(clientConfiguration, signPayloads, useVirtualAddressing, USEast1RegionalEndPointOption)
{
}
/* End of legacy constructors due deprecation */

S3Client::~S3Client()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<S3EndpointProviderBase>& S3Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void S3Client::init(const S3::S3ClientConfiguration& config)
{
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void S3Client::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}

AbortMultipartUploadOutcome S3Client::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(AbortMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AbortMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Bucket, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: Key, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: UploadId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AbortMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AbortMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AbortMultipartUploadOutcome>(
      [&]()-> AbortMultipartUploadOutcome {
      return AbortMultipartUploadOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CompleteMultipartUploadOutcome S3Client::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(CompleteMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Bucket, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: Key, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: UploadId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CompleteMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CompleteMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CompleteMultipartUploadOutcome>(
      [&]()-> CompleteMultipartUploadOutcome {
      return CompleteMultipartUploadOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CopyObjectOutcome S3Client::CopyObject(const CopyObjectRequest& request) const
{
  AWS_OPERATION_GUARD(CopyObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Bucket, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: CopySource, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyObject", "Required field: Key, is not set");
    return CopyObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CopyObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CopyObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CopyObjectOutcome>(
      [&]()-> CopyObjectOutcome {
      return CopyObjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CopyObjectOutcomeCallable S3Client::CopyObjectCallable(const CopyObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_clientConfiguration.executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::CopyObjectAsync(const CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_clientConfiguration.executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopyObject(request), context);
    } );
}

CreateBucketOutcome S3Client::CreateBucket(const CreateBucketRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBucket", "Required field: Bucket, is not set");
    return CreateBucketOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBucketOutcome>(
      [&]()-> CreateBucketOutcome {
      return CreateBucketOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBucketMetadataTableConfigurationOutcome S3Client::CreateBucketMetadataTableConfiguration(const CreateBucketMetadataTableConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBucketMetadataTableConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucketMetadataTableConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucketMetadataTableConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBucketMetadataTableConfiguration", "Required field: Bucket, is not set");
    return CreateBucketMetadataTableConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBucketMetadataTableConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBucketMetadataTableConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBucketMetadataTableConfigurationOutcome>(
      [&]()-> CreateBucketMetadataTableConfigurationOutcome {
      return CreateBucketMetadataTableConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?metadataTable");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMultipartUploadOutcome S3Client::CreateMultipartUpload(const CreateMultipartUploadRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMultipartUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMultipartUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Bucket, is not set");
    return CreateMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultipartUpload", "Required field: Key, is not set");
    return CreateMultipartUploadOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMultipartUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMultipartUploadOutcome>(
      [&]()-> CreateMultipartUploadOutcome {
      return CreateMultipartUploadOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?uploads");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSessionOutcome S3Client::CreateSession(const CreateSessionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: Bucket, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSessionOutcome>(
      [&]()-> CreateSessionOutcome {
      return CreateSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?session");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketOutcome S3Client::DeleteBucket(const DeleteBucketRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucket", "Required field: Bucket, is not set");
    return DeleteBucketOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketOutcome>(
      [&]()-> DeleteBucketOutcome {
      return DeleteBucketOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketAnalyticsConfigurationOutcome S3Client::DeleteBucketAnalyticsConfiguration(const DeleteBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketAnalyticsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return DeleteBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketAnalyticsConfigurationOutcome>(
      [&]()-> DeleteBucketAnalyticsConfigurationOutcome {
      return DeleteBucketAnalyticsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?analytics");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketCorsOutcome S3Client::DeleteBucketCors(const DeleteBucketCorsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketCors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketCors", "Required field: Bucket, is not set");
    return DeleteBucketCorsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketCorsOutcome>(
      [&]()-> DeleteBucketCorsOutcome {
      return DeleteBucketCorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?cors");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketEncryptionOutcome S3Client::DeleteBucketEncryption(const DeleteBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketEncryption", "Required field: Bucket, is not set");
    return DeleteBucketEncryptionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketEncryptionOutcome>(
      [&]()-> DeleteBucketEncryptionOutcome {
      return DeleteBucketEncryptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?encryption");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketIntelligentTieringConfigurationOutcome S3Client::DeleteBucketIntelligentTieringConfiguration(const DeleteBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketIntelligentTieringConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return DeleteBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketIntelligentTieringConfigurationOutcome>(
      [&]()-> DeleteBucketIntelligentTieringConfigurationOutcome {
      return DeleteBucketIntelligentTieringConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?intelligent-tiering");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketInventoryConfigurationOutcome S3Client::DeleteBucketInventoryConfiguration(const DeleteBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketInventoryConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketInventoryConfiguration", "Required field: Id, is not set");
    return DeleteBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketInventoryConfigurationOutcome>(
      [&]()-> DeleteBucketInventoryConfigurationOutcome {
      return DeleteBucketInventoryConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?inventory");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketLifecycleOutcome S3Client::DeleteBucketLifecycle(const DeleteBucketLifecycleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketLifecycle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketLifecycle", "Required field: Bucket, is not set");
    return DeleteBucketLifecycleOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketLifecycleOutcome>(
      [&]()-> DeleteBucketLifecycleOutcome {
      return DeleteBucketLifecycleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?lifecycle");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketMetadataTableConfigurationOutcome S3Client::DeleteBucketMetadataTableConfiguration(const DeleteBucketMetadataTableConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketMetadataTableConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketMetadataTableConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketMetadataTableConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetadataTableConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketMetadataTableConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketMetadataTableConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketMetadataTableConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketMetadataTableConfigurationOutcome>(
      [&]()-> DeleteBucketMetadataTableConfigurationOutcome {
      return DeleteBucketMetadataTableConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?metadataTable");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketMetricsConfigurationOutcome S3Client::DeleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketMetricsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return DeleteBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketMetricsConfiguration", "Required field: Id, is not set");
    return DeleteBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketMetricsConfigurationOutcome>(
      [&]()-> DeleteBucketMetricsConfigurationOutcome {
      return DeleteBucketMetricsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?metrics");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketOwnershipControlsOutcome S3Client::DeleteBucketOwnershipControls(const DeleteBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketOwnershipControls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketOwnershipControls", "Required field: Bucket, is not set");
    return DeleteBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketOwnershipControlsOutcome>(
      [&]()-> DeleteBucketOwnershipControlsOutcome {
      return DeleteBucketOwnershipControlsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?ownershipControls");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketPolicyOutcome S3Client::DeleteBucketPolicy(const DeleteBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketPolicy", "Required field: Bucket, is not set");
    return DeleteBucketPolicyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketPolicyOutcome>(
      [&]()-> DeleteBucketPolicyOutcome {
      return DeleteBucketPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?policy");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketReplicationOutcome S3Client::DeleteBucketReplication(const DeleteBucketReplicationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketReplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketReplication", "Required field: Bucket, is not set");
    return DeleteBucketReplicationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketReplicationOutcome>(
      [&]()-> DeleteBucketReplicationOutcome {
      return DeleteBucketReplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?replication");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketTaggingOutcome S3Client::DeleteBucketTagging(const DeleteBucketTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketTagging", "Required field: Bucket, is not set");
    return DeleteBucketTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketTaggingOutcome>(
      [&]()-> DeleteBucketTaggingOutcome {
      return DeleteBucketTaggingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?tagging");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBucketWebsiteOutcome S3Client::DeleteBucketWebsite(const DeleteBucketWebsiteRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBucketWebsite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBucketWebsite", "Required field: Bucket, is not set");
    return DeleteBucketWebsiteOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBucketWebsiteOutcome>(
      [&]()-> DeleteBucketWebsiteOutcome {
      return DeleteBucketWebsiteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?website");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteObjectOutcome S3Client::DeleteObject(const DeleteObjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Bucket, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Key, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteObjectOutcome>(
      [&]()-> DeleteObjectOutcome {
      return DeleteObjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteObjectTaggingOutcome S3Client::DeleteObjectTagging(const DeleteObjectTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteObjectTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Bucket, is not set");
    return DeleteObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjectTagging", "Required field: Key, is not set");
    return DeleteObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteObjectTaggingOutcome>(
      [&]()-> DeleteObjectTaggingOutcome {
      return DeleteObjectTaggingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?tagging");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteObjectsOutcome S3Client::DeleteObjects(const DeleteObjectsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteObjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObjects", "Required field: Bucket, is not set");
    return DeleteObjectsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteObjectsOutcome>(
      [&]()-> DeleteObjectsOutcome {
      return DeleteObjectsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?delete");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePublicAccessBlockOutcome S3Client::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePublicAccessBlock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicAccessBlock", "Required field: Bucket, is not set");
    return DeletePublicAccessBlockOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeletePublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePublicAccessBlockOutcome>(
      [&]()-> DeletePublicAccessBlockOutcome {
      return DeletePublicAccessBlockOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?publicAccessBlock");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketAccelerateConfigurationOutcome S3Client::GetBucketAccelerateConfiguration(const GetBucketAccelerateConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketAccelerateConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return GetBucketAccelerateConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketAccelerateConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketAccelerateConfigurationOutcome>(
      [&]()-> GetBucketAccelerateConfigurationOutcome {
      return GetBucketAccelerateConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?accelerate");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketAclOutcome S3Client::GetBucketAcl(const GetBucketAclRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketAcl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAcl", "Required field: Bucket, is not set");
    return GetBucketAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketAclOutcome>(
      [&]()-> GetBucketAclOutcome {
      return GetBucketAclOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?acl");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketAnalyticsConfigurationOutcome S3Client::GetBucketAnalyticsConfiguration(const GetBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketAnalyticsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return GetBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return GetBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketAnalyticsConfigurationOutcome>(
      [&]()-> GetBucketAnalyticsConfigurationOutcome {
      return GetBucketAnalyticsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?analytics");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketCorsOutcome S3Client::GetBucketCors(const GetBucketCorsRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketCors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketCors", "Required field: Bucket, is not set");
    return GetBucketCorsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketCorsOutcome>(
      [&]()-> GetBucketCorsOutcome {
      return GetBucketCorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?cors");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketEncryptionOutcome S3Client::GetBucketEncryption(const GetBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketEncryption", "Required field: Bucket, is not set");
    return GetBucketEncryptionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketEncryptionOutcome>(
      [&]()-> GetBucketEncryptionOutcome {
      return GetBucketEncryptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?encryption");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketIntelligentTieringConfigurationOutcome S3Client::GetBucketIntelligentTieringConfiguration(const GetBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketIntelligentTieringConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return GetBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketIntelligentTieringConfigurationOutcome>(
      [&]()-> GetBucketIntelligentTieringConfigurationOutcome {
      return GetBucketIntelligentTieringConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?intelligent-tiering");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketInventoryConfigurationOutcome S3Client::GetBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketInventoryConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return GetBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketInventoryConfiguration", "Required field: Id, is not set");
    return GetBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketInventoryConfigurationOutcome>(
      [&]()-> GetBucketInventoryConfigurationOutcome {
      return GetBucketInventoryConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?inventory");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketLifecycleConfigurationOutcome S3Client::GetBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketLifecycleConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return GetBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketLifecycleConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketLifecycleConfigurationOutcome>(
      [&]()-> GetBucketLifecycleConfigurationOutcome {
      return GetBucketLifecycleConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?lifecycle");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketLocationOutcome S3Client::GetBucketLocation(const GetBucketLocationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLocation", "Required field: Bucket, is not set");
    return GetBucketLocationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketLocationOutcome>(
      [&]()-> GetBucketLocationOutcome {
      return GetBucketLocationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?location");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketLoggingOutcome S3Client::GetBucketLogging(const GetBucketLoggingRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketLogging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketLogging", "Required field: Bucket, is not set");
    return GetBucketLoggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketLogging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketLogging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketLoggingOutcome>(
      [&]()-> GetBucketLoggingOutcome {
      return GetBucketLoggingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?logging");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketMetadataTableConfigurationOutcome S3Client::GetBucketMetadataTableConfiguration(const GetBucketMetadataTableConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketMetadataTableConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketMetadataTableConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketMetadataTableConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetadataTableConfiguration", "Required field: Bucket, is not set");
    return GetBucketMetadataTableConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketMetadataTableConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketMetadataTableConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketMetadataTableConfigurationOutcome>(
      [&]()-> GetBucketMetadataTableConfigurationOutcome {
      return GetBucketMetadataTableConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?metadataTable");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketMetricsConfigurationOutcome S3Client::GetBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketMetricsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return GetBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketMetricsConfiguration", "Required field: Id, is not set");
    return GetBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketMetricsConfigurationOutcome>(
      [&]()-> GetBucketMetricsConfigurationOutcome {
      return GetBucketMetricsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?metrics");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketNotificationConfigurationOutcome S3Client::GetBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketNotificationConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return GetBucketNotificationConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketNotificationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketNotificationConfigurationOutcome>(
      [&]()-> GetBucketNotificationConfigurationOutcome {
      return GetBucketNotificationConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?notification");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketOwnershipControlsOutcome S3Client::GetBucketOwnershipControls(const GetBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketOwnershipControls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketOwnershipControls", "Required field: Bucket, is not set");
    return GetBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketOwnershipControlsOutcome>(
      [&]()-> GetBucketOwnershipControlsOutcome {
      return GetBucketOwnershipControlsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?ownershipControls");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketPolicyOutcome S3Client::GetBucketPolicy(const GetBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicy", "Required field: Bucket, is not set");
    return GetBucketPolicyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketPolicyOutcome>(
      [&]()-> GetBucketPolicyOutcome {
      return GetBucketPolicyOutcome(MakeRequestWithUnparsedResponse(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?policy");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketPolicyStatusOutcome S3Client::GetBucketPolicyStatus(const GetBucketPolicyStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketPolicyStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketPolicyStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketPolicyStatus", "Required field: Bucket, is not set");
    return GetBucketPolicyStatusOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketPolicyStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketPolicyStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketPolicyStatusOutcome>(
      [&]()-> GetBucketPolicyStatusOutcome {
      return GetBucketPolicyStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?policyStatus");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketReplicationOutcome S3Client::GetBucketReplication(const GetBucketReplicationRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketReplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketReplication", "Required field: Bucket, is not set");
    return GetBucketReplicationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketReplicationOutcome>(
      [&]()-> GetBucketReplicationOutcome {
      return GetBucketReplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?replication");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketRequestPaymentOutcome S3Client::GetBucketRequestPayment(const GetBucketRequestPaymentRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketRequestPayment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketRequestPayment", "Required field: Bucket, is not set");
    return GetBucketRequestPaymentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketRequestPayment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketRequestPayment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketRequestPaymentOutcome>(
      [&]()-> GetBucketRequestPaymentOutcome {
      return GetBucketRequestPaymentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?requestPayment");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketTaggingOutcome S3Client::GetBucketTagging(const GetBucketTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketTagging", "Required field: Bucket, is not set");
    return GetBucketTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketTaggingOutcome>(
      [&]()-> GetBucketTaggingOutcome {
      return GetBucketTaggingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?tagging");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketVersioningOutcome S3Client::GetBucketVersioning(const GetBucketVersioningRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketVersioning);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketVersioning", "Required field: Bucket, is not set");
    return GetBucketVersioningOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketVersioning, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketVersioning, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketVersioningOutcome>(
      [&]()-> GetBucketVersioningOutcome {
      return GetBucketVersioningOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?versioning");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBucketWebsiteOutcome S3Client::GetBucketWebsite(const GetBucketWebsiteRequest& request) const
{
  AWS_OPERATION_GUARD(GetBucketWebsite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBucketWebsite", "Required field: Bucket, is not set");
    return GetBucketWebsiteOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBucketWebsiteOutcome>(
      [&]()-> GetBucketWebsiteOutcome {
      return GetBucketWebsiteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?website");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectOutcome S3Client::GetObject(const GetObjectRequest& request) const
{
  AWS_OPERATION_GUARD(GetObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Bucket, is not set");
    return GetObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Key, is not set");
    return GetObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectOutcome>(
      [&]()-> GetObjectOutcome {
      return GetObjectOutcome(MakeRequestWithUnparsedResponse(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectOutcomeCallable S3Client::GetObjectCallable(const GetObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_clientConfiguration.executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::GetObjectAsync(const GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_clientConfiguration.executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObject(request), context);
    } );
}

GetObjectAclOutcome S3Client::GetObjectAcl(const GetObjectAclRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectAcl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Bucket, is not set");
    return GetObjectAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAcl", "Required field: Key, is not set");
    return GetObjectAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetObjectAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectAclOutcome>(
      [&]()-> GetObjectAclOutcome {
      return GetObjectAclOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?acl");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectAttributesOutcome S3Client::GetObjectAttributes(const GetObjectAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Bucket, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: Key, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.ObjectAttributesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: ObjectAttributes, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectAttributes]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetObjectAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectAttributesOutcome>(
      [&]()-> GetObjectAttributesOutcome {
      return GetObjectAttributesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?attributes");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectLegalHoldOutcome S3Client::GetObjectLegalHold(const GetObjectLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Bucket, is not set");
    return GetObjectLegalHoldOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLegalHold", "Required field: Key, is not set");
    return GetObjectLegalHoldOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetObjectLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectLegalHoldOutcome>(
      [&]()-> GetObjectLegalHoldOutcome {
      return GetObjectLegalHoldOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?legal-hold");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectLockConfigurationOutcome S3Client::GetObjectLockConfiguration(const GetObjectLockConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectLockConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectLockConfiguration", "Required field: Bucket, is not set");
    return GetObjectLockConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetObjectLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectLockConfigurationOutcome>(
      [&]()-> GetObjectLockConfigurationOutcome {
      return GetObjectLockConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?object-lock");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectRetentionOutcome S3Client::GetObjectRetention(const GetObjectRetentionRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectRetention);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Bucket, is not set");
    return GetObjectRetentionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectRetention", "Required field: Key, is not set");
    return GetObjectRetentionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetObjectRetention, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectRetention, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectRetentionOutcome>(
      [&]()-> GetObjectRetentionOutcome {
      return GetObjectRetentionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?retention");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectTaggingOutcome S3Client::GetObjectTagging(const GetObjectTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Bucket, is not set");
    return GetObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTagging", "Required field: Key, is not set");
    return GetObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectTaggingOutcome>(
      [&]()-> GetObjectTaggingOutcome {
      return GetObjectTaggingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?tagging");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectTorrentOutcome S3Client::GetObjectTorrent(const GetObjectTorrentRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectTorrent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectTorrent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Bucket, is not set");
    return GetObjectTorrentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectTorrent", "Required field: Key, is not set");
    return GetObjectTorrentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetObjectTorrent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectTorrent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectTorrentOutcome>(
      [&]()-> GetObjectTorrentOutcome {
      return GetObjectTorrentOutcome(MakeRequestWithUnparsedResponse(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?torrent");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPublicAccessBlockOutcome S3Client::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_GUARD(GetPublicAccessBlock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicAccessBlock", "Required field: Bucket, is not set");
    return GetPublicAccessBlockOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPublicAccessBlockOutcome>(
      [&]()-> GetPublicAccessBlockOutcome {
      return GetPublicAccessBlockOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?publicAccessBlock");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HeadBucketOutcome S3Client::HeadBucket(const HeadBucketRequest& request) const
{
  AWS_OPERATION_GUARD(HeadBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HeadBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HeadBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadBucket", "Required field: Bucket, is not set");
    return HeadBucketOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, HeadBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HeadBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HeadBucketOutcome>(
      [&]()-> HeadBucketOutcome {
      return HeadBucketOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_HEAD, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HeadObjectOutcome S3Client::HeadObject(const HeadObjectRequest& request) const
{
  AWS_OPERATION_GUARD(HeadObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HeadObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HeadObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Bucket, is not set");
    return HeadObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("HeadObject", "Required field: Key, is not set");
    return HeadObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, HeadObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HeadObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HeadObjectOutcome>(
      [&]()-> HeadObjectOutcome {
      return HeadObjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_HEAD, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBucketAnalyticsConfigurationsOutcome S3Client::ListBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBucketAnalyticsConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketAnalyticsConfigurations", "Required field: Bucket, is not set");
    return ListBucketAnalyticsConfigurationsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBucketAnalyticsConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketAnalyticsConfigurationsOutcome>(
      [&]()-> ListBucketAnalyticsConfigurationsOutcome {
      return ListBucketAnalyticsConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?analytics");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBucketIntelligentTieringConfigurationsOutcome S3Client::ListBucketIntelligentTieringConfigurations(const ListBucketIntelligentTieringConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBucketIntelligentTieringConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketIntelligentTieringConfigurations", "Required field: Bucket, is not set");
    return ListBucketIntelligentTieringConfigurationsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBucketIntelligentTieringConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketIntelligentTieringConfigurationsOutcome>(
      [&]()-> ListBucketIntelligentTieringConfigurationsOutcome {
      return ListBucketIntelligentTieringConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?intelligent-tiering");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBucketInventoryConfigurationsOutcome S3Client::ListBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBucketInventoryConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketInventoryConfigurations", "Required field: Bucket, is not set");
    return ListBucketInventoryConfigurationsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBucketInventoryConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketInventoryConfigurationsOutcome>(
      [&]()-> ListBucketInventoryConfigurationsOutcome {
      return ListBucketInventoryConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?inventory");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBucketMetricsConfigurationsOutcome S3Client::ListBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBucketMetricsConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBucketMetricsConfigurations", "Required field: Bucket, is not set");
    return ListBucketMetricsConfigurationsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBucketMetricsConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketMetricsConfigurationsOutcome>(
      [&]()-> ListBucketMetricsConfigurationsOutcome {
      return ListBucketMetricsConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?metrics");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBucketsOutcome S3Client::ListBuckets(const ListBucketsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBuckets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBucketsOutcome>(
      [&]()-> ListBucketsOutcome {
      return ListBucketsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDirectoryBucketsOutcome S3Client::ListDirectoryBuckets(const ListDirectoryBucketsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDirectoryBuckets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDirectoryBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDirectoryBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDirectoryBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDirectoryBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDirectoryBucketsOutcome>(
      [&]()-> ListDirectoryBucketsOutcome {
      return ListDirectoryBucketsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMultipartUploadsOutcome S3Client::ListMultipartUploads(const ListMultipartUploadsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMultipartUploads);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultipartUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: Bucket, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMultipartUploads, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMultipartUploads, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMultipartUploadsOutcome>(
      [&]()-> ListMultipartUploadsOutcome {
      return ListMultipartUploadsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?uploads");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListObjectVersionsOutcome S3Client::ListObjectVersions(const ListObjectVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListObjectVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectVersions", "Required field: Bucket, is not set");
    return ListObjectVersionsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListObjectVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListObjectVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListObjectVersionsOutcome>(
      [&]()-> ListObjectVersionsOutcome {
      return ListObjectVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?versions");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListObjectsOutcome S3Client::ListObjects(const ListObjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListObjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjects", "Required field: Bucket, is not set");
    return ListObjectsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListObjectsOutcome>(
      [&]()-> ListObjectsOutcome {
      return ListObjectsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListObjectsV2Outcome S3Client::ListObjectsV2(const ListObjectsV2Request& request) const
{
  AWS_OPERATION_GUARD(ListObjectsV2);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjectsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjectsV2, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectsV2", "Required field: Bucket, is not set");
    return ListObjectsV2Outcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListObjectsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListObjectsV2, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListObjectsV2Outcome>(
      [&]()-> ListObjectsV2Outcome {
      return ListObjectsV2Outcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?list-type=2");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPartsOutcome S3Client::ListParts(const ListPartsRequest& request) const
{
  AWS_OPERATION_GUARD(ListParts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Bucket, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: Key, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: UploadId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPartsOutcome>(
      [&]()-> ListPartsOutcome {
      return ListPartsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketAccelerateConfigurationOutcome S3Client::PutBucketAccelerateConfiguration(const PutBucketAccelerateConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketAccelerateConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAccelerateConfiguration", "Required field: Bucket, is not set");
    return PutBucketAccelerateConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketAccelerateConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketAccelerateConfigurationOutcome>(
      [&]()-> PutBucketAccelerateConfigurationOutcome {
      return PutBucketAccelerateConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?accelerate");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketAclOutcome S3Client::PutBucketAcl(const PutBucketAclRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketAcl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAcl", "Required field: Bucket, is not set");
    return PutBucketAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketAclOutcome>(
      [&]()-> PutBucketAclOutcome {
      return PutBucketAclOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?acl");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketAnalyticsConfigurationOutcome S3Client::PutBucketAnalyticsConfiguration(const PutBucketAnalyticsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketAnalyticsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Bucket, is not set");
    return PutBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketAnalyticsConfiguration", "Required field: Id, is not set");
    return PutBucketAnalyticsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketAnalyticsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketAnalyticsConfigurationOutcome>(
      [&]()-> PutBucketAnalyticsConfigurationOutcome {
      return PutBucketAnalyticsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?analytics");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketCorsOutcome S3Client::PutBucketCors(const PutBucketCorsRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketCors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketCors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketCors", "Required field: Bucket, is not set");
    return PutBucketCorsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketCors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketCorsOutcome>(
      [&]()-> PutBucketCorsOutcome {
      return PutBucketCorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?cors");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketEncryptionOutcome S3Client::PutBucketEncryption(const PutBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketEncryption", "Required field: Bucket, is not set");
    return PutBucketEncryptionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketEncryptionOutcome>(
      [&]()-> PutBucketEncryptionOutcome {
      return PutBucketEncryptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?encryption");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketIntelligentTieringConfigurationOutcome S3Client::PutBucketIntelligentTieringConfiguration(const PutBucketIntelligentTieringConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketIntelligentTieringConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Bucket, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketIntelligentTieringConfiguration", "Required field: Id, is not set");
    return PutBucketIntelligentTieringConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketIntelligentTieringConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketIntelligentTieringConfigurationOutcome>(
      [&]()-> PutBucketIntelligentTieringConfigurationOutcome {
      return PutBucketIntelligentTieringConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?intelligent-tiering");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketInventoryConfigurationOutcome S3Client::PutBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketInventoryConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Bucket, is not set");
    return PutBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketInventoryConfiguration", "Required field: Id, is not set");
    return PutBucketInventoryConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketInventoryConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketInventoryConfigurationOutcome>(
      [&]()-> PutBucketInventoryConfigurationOutcome {
      return PutBucketInventoryConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?inventory");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketLifecycleConfigurationOutcome S3Client::PutBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketLifecycleConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLifecycleConfiguration", "Required field: Bucket, is not set");
    return PutBucketLifecycleConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketLifecycleConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketLifecycleConfigurationOutcome>(
      [&]()-> PutBucketLifecycleConfigurationOutcome {
      return PutBucketLifecycleConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?lifecycle");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketLoggingOutcome S3Client::PutBucketLogging(const PutBucketLoggingRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketLogging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketLogging", "Required field: Bucket, is not set");
    return PutBucketLoggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketLogging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketLogging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketLoggingOutcome>(
      [&]()-> PutBucketLoggingOutcome {
      return PutBucketLoggingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?logging");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketMetricsConfigurationOutcome S3Client::PutBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketMetricsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Bucket, is not set");
    return PutBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketMetricsConfiguration", "Required field: Id, is not set");
    return PutBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketMetricsConfigurationOutcome>(
      [&]()-> PutBucketMetricsConfigurationOutcome {
      return PutBucketMetricsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?metrics");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketNotificationConfigurationOutcome S3Client::PutBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketNotificationConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketNotificationConfiguration", "Required field: Bucket, is not set");
    return PutBucketNotificationConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketNotificationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketNotificationConfigurationOutcome>(
      [&]()-> PutBucketNotificationConfigurationOutcome {
      return PutBucketNotificationConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?notification");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketOwnershipControlsOutcome S3Client::PutBucketOwnershipControls(const PutBucketOwnershipControlsRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketOwnershipControls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketOwnershipControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketOwnershipControls", "Required field: Bucket, is not set");
    return PutBucketOwnershipControlsOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketOwnershipControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketOwnershipControlsOutcome>(
      [&]()-> PutBucketOwnershipControlsOutcome {
      return PutBucketOwnershipControlsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?ownershipControls");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketPolicyOutcome S3Client::PutBucketPolicy(const PutBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketPolicy", "Required field: Bucket, is not set");
    return PutBucketPolicyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketPolicyOutcome>(
      [&]()-> PutBucketPolicyOutcome {
      return PutBucketPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?policy");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketReplicationOutcome S3Client::PutBucketReplication(const PutBucketReplicationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketReplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketReplication", "Required field: Bucket, is not set");
    return PutBucketReplicationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketReplicationOutcome>(
      [&]()-> PutBucketReplicationOutcome {
      return PutBucketReplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?replication");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketRequestPaymentOutcome S3Client::PutBucketRequestPayment(const PutBucketRequestPaymentRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketRequestPayment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketRequestPayment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketRequestPayment", "Required field: Bucket, is not set");
    return PutBucketRequestPaymentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketRequestPayment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketRequestPayment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketRequestPaymentOutcome>(
      [&]()-> PutBucketRequestPaymentOutcome {
      return PutBucketRequestPaymentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?requestPayment");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketTaggingOutcome S3Client::PutBucketTagging(const PutBucketTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketTagging", "Required field: Bucket, is not set");
    return PutBucketTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketTaggingOutcome>(
      [&]()-> PutBucketTaggingOutcome {
      return PutBucketTaggingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?tagging");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketVersioningOutcome S3Client::PutBucketVersioning(const PutBucketVersioningRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketVersioning);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketVersioning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketVersioning", "Required field: Bucket, is not set");
    return PutBucketVersioningOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketVersioning, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketVersioning, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketVersioningOutcome>(
      [&]()-> PutBucketVersioningOutcome {
      return PutBucketVersioningOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?versioning");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBucketWebsiteOutcome S3Client::PutBucketWebsite(const PutBucketWebsiteRequest& request) const
{
  AWS_OPERATION_GUARD(PutBucketWebsite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBucketWebsite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBucketWebsite", "Required field: Bucket, is not set");
    return PutBucketWebsiteOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBucketWebsite, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBucketWebsiteOutcome>(
      [&]()-> PutBucketWebsiteOutcome {
      return PutBucketWebsiteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?website");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutObjectOutcome S3Client::PutObject(const PutObjectRequest& request) const
{
  AWS_OPERATION_GUARD(PutObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Bucket, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Key, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectOutcome>(
      [&]()-> PutObjectOutcome {
      return PutObjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutObjectOutcomeCallable S3Client::PutObjectCallable(const PutObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_clientConfiguration.executor->Submit(packagedFunction);
  return task->get_future();
}

void S3Client::PutObjectAsync(const PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_clientConfiguration.executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObject(request), context);
    } );
}

PutObjectAclOutcome S3Client::PutObjectAcl(const PutObjectAclRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectAcl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Bucket, is not set");
    return PutObjectAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectAcl", "Required field: Key, is not set");
    return PutObjectAclOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutObjectAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectAcl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectAclOutcome>(
      [&]()-> PutObjectAclOutcome {
      return PutObjectAclOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?acl");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutObjectLegalHoldOutcome S3Client::PutObjectLegalHold(const PutObjectLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Bucket, is not set");
    return PutObjectLegalHoldOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLegalHold", "Required field: Key, is not set");
    return PutObjectLegalHoldOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutObjectLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectLegalHoldOutcome>(
      [&]()-> PutObjectLegalHoldOutcome {
      return PutObjectLegalHoldOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?legal-hold");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutObjectLockConfigurationOutcome S3Client::PutObjectLockConfiguration(const PutObjectLockConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectLockConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectLockConfiguration", "Required field: Bucket, is not set");
    return PutObjectLockConfigurationOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutObjectLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectLockConfigurationOutcome>(
      [&]()-> PutObjectLockConfigurationOutcome {
      return PutObjectLockConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?object-lock");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutObjectRetentionOutcome S3Client::PutObjectRetention(const PutObjectRetentionRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectRetention);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectRetention, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Bucket, is not set");
    return PutObjectRetentionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectRetention", "Required field: Key, is not set");
    return PutObjectRetentionOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutObjectRetention, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectRetention, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectRetentionOutcome>(
      [&]()-> PutObjectRetentionOutcome {
      return PutObjectRetentionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?retention");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutObjectTaggingOutcome S3Client::PutObjectTagging(const PutObjectTaggingRequest& request) const
{
  AWS_OPERATION_GUARD(PutObjectTagging);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObjectTagging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Bucket, is not set");
    return PutObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObjectTagging", "Required field: Key, is not set");
    return PutObjectTaggingOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObjectTagging, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectTaggingOutcome>(
      [&]()-> PutObjectTaggingOutcome {
      return PutObjectTaggingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?tagging");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutPublicAccessBlockOutcome S3Client::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const
{
  AWS_OPERATION_GUARD(PutPublicAccessBlock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPublicAccessBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPublicAccessBlock", "Required field: Bucket, is not set");
    return PutPublicAccessBlockOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutPublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutPublicAccessBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutPublicAccessBlockOutcome>(
      [&]()-> PutPublicAccessBlockOutcome {
      return PutPublicAccessBlockOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      ss.str("?publicAccessBlock");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestoreObjectOutcome S3Client::RestoreObject(const RestoreObjectRequest& request) const
{
  AWS_OPERATION_GUARD(RestoreObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Bucket, is not set");
    return RestoreObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreObject", "Required field: Key, is not set");
    return RestoreObjectOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RestoreObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestoreObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestoreObjectOutcome>(
      [&]()-> RestoreObjectOutcome {
      return RestoreObjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?restore");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SelectObjectContentOutcome S3Client::SelectObjectContent(SelectObjectContentRequest& request) const
{
  AWS_OPERATION_GUARD(SelectObjectContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SelectObjectContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Bucket, is not set");
    return SelectObjectContentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SelectObjectContent", "Required field: Key, is not set");
    return SelectObjectContentOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SelectObjectContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SelectObjectContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SelectObjectContentOutcome>(
      [&]()-> SelectObjectContentOutcome {
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      return SelectObjectContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      Aws::StringStream ss;
      resolvedEndpoint.AddPathSegments(request.GetKey());
      ss.str("?select&select-type=2");
      resolvedEndpoint.SetQueryString(ss.str());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));                        
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UploadPartOutcome S3Client::UploadPart(const UploadPartRequest& request) const
{
  AWS_OPERATION_GUARD(UploadPart);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Bucket, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: Key, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: PartNumber, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPart", "Required field: UploadId, is not set");
    return UploadPartOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UploadPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UploadPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UploadPartOutcome>(
      [&]()-> UploadPartOutcome {
      return UploadPartOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       auto isExpress = resolvedEndpoint.AccessAttributes().value().backend == "S3Express";
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress) {
         params.emplace("overrideChecksumDisable", "noop");
       }
       if (!request.ChecksumAlgorithmHasBeenSet() && isExpress && request.GetChecksumAlgorithmName() == "md5") {
           params.emplace("overrideChecksum", "crc32");
       }
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UploadPartCopyOutcome S3Client::UploadPartCopy(const UploadPartCopyRequest& request) const
{
  AWS_OPERATION_GUARD(UploadPartCopy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadPartCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadPartCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BucketHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Bucket, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Bucket]", false));
  }
  if (!request.CopySourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: CopySource, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopySource]", false));
  }
  if (!request.KeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: Key, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.PartNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: PartNumber, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartNumber]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadPartCopy", "Required field: UploadId, is not set");
    return UploadPartCopyOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UploadPartCopy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UploadPartCopy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UploadPartCopyOutcome>(
      [&]()-> UploadPartCopyOutcome {
      return UploadPartCopyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments(request.GetKey());
      request.SetServiceSpecificParameters(
       [&]() -> std::shared_ptr<Http::ServiceSpecificParameters> {
       Aws::Map<Aws::String, Aws::String> params;
       params.emplace("bucketName", request.GetBucket());
       ServiceSpecificParameters serviceSpecificParameters{params};
       return Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
      }());
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

WriteGetObjectResponseOutcome S3Client::WriteGetObjectResponse(const WriteGetObjectResponseRequest& request) const
{
  AWS_OPERATION_GUARD(WriteGetObjectResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WriteGetObjectResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WriteGetObjectResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RequestRouteHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestRoute, is not set");
    return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestRoute]", false));
  }
  if (!request.RequestTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("WriteGetObjectResponse", "Required field: RequestToken, is not set");
    return WriteGetObjectResponseOutcome(Aws::Client::AWSError<S3Errors>(S3Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, WriteGetObjectResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, WriteGetObjectResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
      {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
      smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<WriteGetObjectResponseOutcome>(
      [&]()-> WriteGetObjectResponseOutcome {
      return WriteGetObjectResponseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/WriteGetObjectResponse");
       }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}



#include<aws/core/utils/HashingUtils.h>
Aws::String S3Client::GeneratePresignedUrl(const Aws::String& bucket,
                                           const Aws::String& key,
                                           Aws::Http::HttpMethod method,
                                           uint64_t expirationInSeconds)
{
    return GeneratePresignedUrl(bucket, key, method, {}, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrl(const Aws::String& bucket,
                                           const Aws::String& key,
                                           Aws::Http::HttpMethod method,
                                           const Http::HeaderValueCollection& customizedHeaders,
                                           uint64_t expirationInSeconds)
{
    if (!m_endpointProvider)
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
        return {};
    }
    ResolveEndpointOutcome computeEndpointOutcome = m_endpointProvider->ResolveEndpoint({{Aws::String("Bucket"), bucket}});
    if (!computeEndpointOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Encountered error: " << computeEndpointOutcome.GetError().GetMessage());
        return {};
    }
    Aws::Endpoint::AWSEndpoint& endpoint = computeEndpointOutcome.GetResult();
    endpoint.AddPathSegments(key);
    Aws::Map<Aws::String, Aws::String> params;
    params.emplace("bucketName", bucket);
    ServiceSpecificParameters serviceSpecificParameters{params};
    auto serviceParams = Aws::MakeShared<ServiceSpecificParameters>(ALLOCATION_TAG, serviceSpecificParameters);
    return AwsSmithyClientT::GeneratePresignedUrl(endpoint, method, {}, {}, expirationInSeconds, customizedHeaders, serviceParams);
}

Aws::String S3Client::GeneratePresignedUrlWithSSES3(const Aws::String& bucket,
                                                    const Aws::String& key,
                                                    Aws::Http::HttpMethod method,
                                                    uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSES3(const Aws::String& bucket,
                                                    const Aws::String& key,
                                                    Aws::Http::HttpMethod method,
                                                    Http::HeaderValueCollection customizedHeaders,
                                                    uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket,
                                                     const Aws::String& key,
                                                     Aws::Http::HttpMethod method,
                                                     const Aws::String& kmsMasterKeyId,
                                                     uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::aws_kms));
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket,
                                                     const Aws::String& key,
                                                     Aws::Http::HttpMethod method,
                                                     Http::HeaderValueCollection customizedHeaders,
                                                     const Aws::String& kmsMasterKeyId,
                                                     uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::aws_kms));
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID, kmsMasterKeyId);
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEC(const Aws::String& bucket,
                                                   const Aws::String& key,
                                                   Aws::Http::HttpMethod method,
                                                   const Aws::String& base64EncodedAES256Key,
                                                   uint64_t expirationInSeconds)
{
    Aws::Http::HeaderValueCollection headers;
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
    Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
    Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
    headers.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
    return GeneratePresignedUrl(bucket, key, method, headers, expirationInSeconds);
}

Aws::String S3Client::GeneratePresignedUrlWithSSEC(const Aws::String& bucket,
                                                   const Aws::String& key,
                                                   Aws::Http::HttpMethod method,
                                                   Http::HeaderValueCollection customizedHeaders,
                                                   const Aws::String& base64EncodedAES256Key,
                                                   uint64_t expirationInSeconds)
{
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM, Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, base64EncodedAES256Key);
    Aws::Utils::ByteBuffer buffer = Aws::Utils::HashingUtils::Base64Decode(base64EncodedAES256Key);
    Aws::String strBuffer(reinterpret_cast<char*>(buffer.GetUnderlyingData()), buffer.GetLength());
    customizedHeaders.emplace(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(strBuffer)));
    return GeneratePresignedUrl(bucket, key, method, customizedHeaders, expirationInSeconds);
}


bool S3Client::MultipartUploadSupported() const
{
    return true;
}
