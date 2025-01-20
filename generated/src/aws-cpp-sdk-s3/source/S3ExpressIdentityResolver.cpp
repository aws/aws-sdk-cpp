/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/S3ExpressIdentityResolver.h>
#include <aws/s3/model/CreateSessionRequest.h>

#include <utility>
#include <thread>

using namespace Aws::S3;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace std::chrono;
using namespace smithy;
using CacheValueType = typename Aws::Utils::Cache<Aws::String, AwsCredentialIdentity>::Value;

namespace{
const char S3_EXPRESS_IDENTITY_PROVIDER[] = "S3ExpressIdentityProvider";
const int DEFAULT_CACHE_SIZE = 100;
}

S3ExpressIdentityResolver::S3ExpressIdentityResolver(const S3Client& s3Client) : m_s3Client(s3Client) {}

S3ExpressIdentityResolver::ResolveIdentityFutureOutcome S3ExpressIdentityResolver::getIdentity(
    const IdentityProperties& identityProperties, const AdditionalParameters& additionalParameters){
  // find bucket name
  auto bucketNameIter = additionalParameters.find("bucketName");
  if (bucketNameIter == additionalParameters.end()) {
    AWS_LOGSTREAM_ERROR(S3_EXPRESS_IDENTITY_PROVIDER, "Failed to find BucketName in IdentityProperties");
    return S3ExpressIdentityResolver::ResolveIdentityFutureOutcome(Aws::Client::AWSError<Aws::Client::CoreErrors>{
        Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE, "", "Failed to find BucketName in IdentityProperties",
        false /*retryable*/});
  }

  auto bucketName = bucketNameIter->second.get<Aws::String>();

  return getCredentialsFromBucket(bucketName);
}

std::shared_ptr<std::mutex> S3ExpressIdentityResolver::GetMutexForBucketName(const Aws::String& bucketName) {
  std::lock_guard<std::mutex> lock(m_bucketNameMapMutex);
  auto it = m_bucketNameMutex.find(bucketName);
  if (it != m_bucketNameMutex.end()) {
    return it->second;
  }
  auto bucketMutex = Aws::MakeShared<std::mutex>(S3_EXPRESS_IDENTITY_PROVIDER);
  m_bucketNameMutex.emplace(bucketName, bucketMutex);
  return bucketMutex;
}

S3ExpressIdentityResolver::ResolveIdentityFutureOutcome S3ExpressIdentityResolver::getCredentialsFromBucket(const Aws::String& bucketName) const {
  auto outcome = m_s3Client.CreateSession(Model::CreateSessionRequest().WithBucket(bucketName));
  // If we fail the connect call return empty credentials and log an error message.
  if (!outcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(S3_EXPRESS_IDENTITY_PROVIDER, "Failed to make S3Express Connect Call");

    return S3ExpressIdentityResolver::ResolveIdentityFutureOutcome(Aws::Client::AWSError<Aws::Client::CoreErrors>{
        Aws::Client::CoreErrors::INTERNAL_FAILURE, "", "Failed to make S3Express Connect Call",
        false /*retryable*/});
  }
  auto result = outcome.GetResult();
  const auto& credentials = result.GetCredentials();
  // if expiry is present, use it, otherwise default to 5 minutes expiry
  auto expiry = [&]() -> Aws::Utils::DateTime {
    if (credentials.ExpirationHasBeenSet()) {
      return credentials.GetExpiration();
    }
    return Aws::Utils::DateTime::Now() + minutes(5);
  }();

  auto smithyCreds = Aws::MakeUnique<AwsCredentialIdentity>(
      "DefaultAwsCredentialIdentityResolver", credentials.GetAccessKeyId(), credentials.GetSecretAccessKey(),
      credentials.GetSessionToken().empty() ? Aws::Crt::Optional<Aws::String>() : credentials.GetSessionToken(),
      expiry);

  return S3ExpressIdentityResolver::ResolveIdentityFutureOutcome(std::move(smithyCreds));
}

DefaultS3ExpressIdentityResolver::DefaultS3ExpressIdentityResolver(const S3Client& s3Client)
    : S3ExpressIdentityResolver{s3Client} {};

DefaultS3ExpressIdentityResolver::DefaultS3ExpressIdentityResolver(
    const S3Client& s3Client,
    std::shared_ptr<Utils::ConcurrentCache<Aws::String, AwsCredentialIdentity>> credentialsCache)
    : S3ExpressIdentityResolver{s3Client}, m_credentialsCache{credentialsCache} {};

DefaultS3ExpressIdentityResolver::ResolveIdentityFutureOutcome DefaultS3ExpressIdentityResolver::getIdentity(const IdentityProperties& identityProperties,
                                           const AdditionalParameters& additionalParameters){
  auto bucketNameIter = additionalParameters.find("bucketName");
  if (bucketNameIter == additionalParameters.end()) {
    AWS_LOGSTREAM_ERROR(S3_EXPRESS_IDENTITY_PROVIDER, "Failed to find BucketName in IdentityProperties");
    return ResolveIdentityFutureOutcome(Aws::Client::AWSError<Aws::Client::CoreErrors>{
        Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE, "", "Failed to find BucketName in IdentityProperties",
        false /*retryable*/});
  }

  auto bucketName = bucketNameIter->second.get<Aws::String>();
  std::lock_guard<std::mutex> lock(*GetMutexForBucketName(bucketName));
  Aws::UniquePtr<AwsCredentialIdentity> smithyCreds;
  AwsCredentialIdentity identity;
  auto isInCache = m_credentialsCache->Get(bucketName, identity);

  if (!isInCache || (identity.expiration().has_value() && identity.expiration().value() - minutes(1) < Aws::Utils::DateTime::Now())) {
    ResolveIdentityFutureOutcome outcome = S3ExpressIdentityResolver::getIdentity(identityProperties, additionalParameters);

    smithyCreds = Aws::MakeUnique<AwsCredentialIdentity>("DefaultAwsCredentialIdentityResolver",
                                                         outcome.GetResult()->accessKeyId(),
                                                         outcome.GetResult()->secretAccessKey(),
                                                         outcome.GetResult()->sessionToken(),
                                                         outcome.GetResult()->expiration());
    m_credentialsCache->Put(bucketName, *smithyCreds,
                            std::chrono::milliseconds(identity.expiration().value().Millis() - Aws::Utils::DateTime::Now().Millis()));
  }

  smithyCreds = Aws::MakeUnique<AwsCredentialIdentity>("DefaultAwsCredentialIdentityResolver",
                                                       identity.accessKeyId(), identity.secretAccessKey(),
                                                       identity.sessionToken(), identity.expiration());

  return ResolveIdentityFutureOutcome(std::move(smithyCreds));
}

DefaultAsyncS3ExpressIdentityResolver::DefaultAsyncS3ExpressIdentityResolver(
    const S3Client& s3Client, std::chrono::minutes refreshPeriod = std::chrono::minutes(1))
    : DefaultAsyncS3ExpressIdentityResolver(s3Client,
                                            Aws::MakeShared<Aws::Utils::ConcurrentCache<Aws::String, AwsCredentialIdentity>>(
                                                S3_EXPRESS_IDENTITY_PROVIDER, DEFAULT_CACHE_SIZE),
                                            refreshPeriod) {}

DefaultAsyncS3ExpressIdentityResolver::DefaultAsyncS3ExpressIdentityResolver(
    const S3Client& s3Client, std::shared_ptr<Utils::ConcurrentCache<Aws::String, AwsCredentialIdentity>> credentialsCache,
    std::chrono::minutes refreshPeriod = std::chrono::minutes(1))
    : S3ExpressIdentityResolver(s3Client), m_credentialsCache(std::move(credentialsCache)) {
  // Start a thread to background refresh the keys currently in the cache.
  m_shouldStopBackgroundRefresh = false;
  m_backgroundRefreshThread = Aws::MakeUnique<std::thread>(
      S3_EXPRESS_IDENTITY_PROVIDER, std::thread(&DefaultAsyncS3ExpressIdentityResolver::refreshIdentities, this, refreshPeriod));
}

DefaultAsyncS3ExpressIdentityResolver::~DefaultAsyncS3ExpressIdentityResolver(){
  {
    std::unique_lock<std::mutex> lock(m_shutDownMutex);
    m_shouldStopBackgroundRefresh = true;
    m_shutdownCondition.notify_all();
  }
  m_backgroundRefreshThread->join();
}

DefaultAsyncS3ExpressIdentityResolver::ResolveIdentityFutureOutcome DefaultAsyncS3ExpressIdentityResolver::getIdentity(
    const IdentityProperties& identityProperties, const AdditionalParameters& additionalParameters){
  auto bucketNameIter = additionalParameters.find("bucketName");
  if (bucketNameIter == additionalParameters.end()) {
    AWS_LOGSTREAM_ERROR(S3_EXPRESS_IDENTITY_PROVIDER, "Failed to find BucketName in IdentityProperties");
    return ResolveIdentityFutureOutcome(Aws::Client::AWSError<Aws::Client::CoreErrors>{
        Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE, "", "Failed to find BucketName in IdentityProperties",
        false /*retryable*/});
  }

  auto bucketName = bucketNameIter->second.get<Aws::String>();
  threadSafeKeyInsert(bucketName);
  std::lock_guard<std::mutex> lock(*GetMutexForBucketName(bucketName));
  Aws::UniquePtr<AwsCredentialIdentity> smithyCreds;
  AwsCredentialIdentity identity;
  auto isInCache = m_credentialsCache->Get(bucketName, identity);
  if (!isInCache) {
    ResolveIdentityFutureOutcome outcome = S3ExpressIdentityResolver::getIdentity(identityProperties, additionalParameters);

    smithyCreds = Aws::MakeUnique<AwsCredentialIdentity>("DefaultAwsCredentialIdentityResolver",
                                                         outcome.GetResult()->accessKeyId(),
                                                         outcome.GetResult()->secretAccessKey(),
                                                         outcome.GetResult()->sessionToken(),
                                                         outcome.GetResult()->expiration());
    m_credentialsCache->Put(bucketName, *smithyCreds,
                            std::chrono::milliseconds(identity.expiration().value().Millis() - Aws::Utils::DateTime::Now().Millis()));
  }

  smithyCreds = Aws::MakeUnique<AwsCredentialIdentity>("DefaultAwsCredentialIdentityResolver",
                                                       identity.accessKeyId(), identity.secretAccessKey(),
                                                       identity.sessionToken(), identity.expiration());

  return ResolveIdentityFutureOutcome(std::move(smithyCreds));
}

void DefaultAsyncS3ExpressIdentityResolver::threadSafeKeyEmpty() {
  std::lock_guard<std::mutex> lock(m_keysUsedMutex);
  m_keysUsed.clear();
}

bool DefaultAsyncS3ExpressIdentityResolver::threadSafeKeyHas(const Aws::String& key) {
  std::lock_guard<std::mutex> lock(m_keysUsedMutex);
  return m_keysUsed.find(key) != m_keysUsed.end();
}

void DefaultAsyncS3ExpressIdentityResolver::threadSafeKeyInsert(const Aws::String& key) {
  std::lock_guard<std::mutex> lock(m_keysUsedMutex);
  m_keysUsed.insert(key);
}

void DefaultAsyncS3ExpressIdentityResolver::refreshIdentities(std::chrono::minutes refreshPeriod) {
  auto filterUnusedKeys = [&](const Aws::String& bucketName, const CacheValueType& valueType) -> bool {
    std::lock_guard<std::mutex> lock(*GetMutexForBucketName(bucketName));
    AWS_UNREFERENCED_PARAM(valueType);
    return !threadSafeKeyHas(bucketName);
  };
  auto refreshIdentityWhenCloseToExpiry = [&](const Aws::String& bucketName, const CacheValueType& valueType)
      -> CacheValueType {
    std::lock_guard<std::mutex> lock(*GetMutexForBucketName(bucketName));
    if (valueType.val.expiration().has_value() &&
        (duration_cast<milliseconds>(refreshPeriod).count() < valueType.val.expiration().value().Millis()) &&
        (valueType.val.expiration().value() - refreshPeriod < Aws::Utils::DateTime::Now())) {
      auto outcome = S3ExpressIdentityResolver::getCredentialsFromBucket(bucketName);

      if (outcome.IsSuccess() && outcome.GetResult()->expiration().has_value()) {
        return {outcome.GetResult()->expiration().value(),
                AwsCredentialIdentity{outcome.GetResult()->accessKeyId(), outcome.GetResult()->secretAccessKey(),
                                      outcome.GetResult()->sessionToken(), outcome.GetResult()->expiration()}};
      }
    }
    return valueType;
  };
  std::unique_lock<std::mutex> lock(m_shutDownMutex);
  while (!m_shouldStopBackgroundRefresh) {
    m_credentialsCache->Filter(filterUnusedKeys);
    m_credentialsCache->Transform(refreshIdentityWhenCloseToExpiry);
    threadSafeKeyEmpty();
    m_shutdownCondition.wait_for(lock, refreshPeriod, [this] { return m_shouldStopBackgroundRefresh; });
  }
}
