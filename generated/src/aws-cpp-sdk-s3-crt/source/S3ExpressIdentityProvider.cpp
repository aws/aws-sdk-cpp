﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/S3ExpressIdentityProvider.h>
#include <aws/s3-crt/model/CreateSessionRequest.h>

#include <utility>
#include <thread>

using namespace Aws::S3Crt;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace std::chrono;
using CacheValueType = typename Aws::Utils::Cache<Aws::String, S3ExpressIdentity>::Value;

const char S3_EXPRESS_IDENTITY_PROVIDER[] = "S3ExpressIdentityProvider";
const int DEFAULT_CACHE_SIZE = 100;

S3ExpressIdentity S3ExpressIdentityProvider::getIdentity(const Aws::String &bucketName) {
    auto outcome = m_s3Client.CreateSession(Model::CreateSessionRequest().WithBucket(bucketName));
    // If we fail the connect call return empty credentials and log an error message.
    if (!outcome.IsSuccess()) {
        AWS_LOGSTREAM_ERROR(S3_EXPRESS_IDENTITY_PROVIDER, "Failed to make S3Express Connect Call")
        return {"", "", "", {}};
    }
    auto result = outcome.GetResult();
    const auto &credentials = result.GetCredentials();
    // if expiry is present, use it, otherwise default to 5 minutes expiry
    auto expiry = [&]() -> Aws::Utils::DateTime {
        if (credentials.ExpirationHasBeenSet()) {
            return credentials.GetExpiration();
        }
        return Aws::Utils::DateTime::Now() + minutes(5);
    }();
    return {credentials.GetAccessKeyId(),
        credentials.GetSecretAccessKey(),
        credentials.GetSessionToken(),
        expiry};
}

std::shared_ptr<std::mutex>
S3ExpressIdentityProvider::GetMutexForBucketName(const Aws::String &bucketName) {
    std::lock_guard<std::mutex> lock(m_bucketNameMapMutex);
    auto it = m_bucketNameMutex.find(bucketName);
    if (it != m_bucketNameMutex.end()) {
        return it->second;
    }
    auto bucketMutex = Aws::MakeShared<std::mutex>(S3_EXPRESS_IDENTITY_PROVIDER);
    m_bucketNameMutex.emplace(bucketName, bucketMutex);
    return bucketMutex;
}


Aws::S3Crt::DefaultS3ExpressIdentityProvider::DefaultS3ExpressIdentityProvider(const S3CrtClient &s3Client) :
    DefaultS3ExpressIdentityProvider(s3Client,
        Aws::MakeShared<Aws::Utils::ConcurrentCache<Aws::String, S3ExpressIdentity>>(S3_EXPRESS_IDENTITY_PROVIDER,
            DEFAULT_CACHE_SIZE)) {

}

Aws::S3Crt::DefaultS3ExpressIdentityProvider::DefaultS3ExpressIdentityProvider(
    const S3CrtClient &s3Client,
    std::shared_ptr<Aws::Utils::ConcurrentCache<Aws::String, S3ExpressIdentity>> credentialsCache) :
    S3ExpressIdentityProvider(s3Client),
    m_credentialsCache(std::move(credentialsCache)) {

}

S3ExpressIdentity DefaultS3ExpressIdentityProvider::GetS3ExpressIdentity(const ServiceSpecificParameters &serviceSpecificParameters) {
    auto bucketNameIter = serviceSpecificParameters.parameterMap.find("bucketName");
    if (bucketNameIter == serviceSpecificParameters.parameterMap.end()) {
        AWS_LOGSTREAM_ERROR(S3_EXPRESS_IDENTITY_PROVIDER, "property bucketName Required to make call")
        return {"", "", "", {}};
    }
    std::lock_guard<std::mutex> lock(*GetMutexForBucketName(bucketNameIter->second));
    S3ExpressIdentity identity;
    auto isInCache = m_credentialsCache->Get(bucketNameIter->second, identity);
    if (!isInCache || identity.getExpiration() - minutes(1) < Aws::Utils::DateTime::Now()) {
        identity = getIdentity(bucketNameIter->second);
        m_credentialsCache->Put(bucketNameIter->second,
            identity,
            std::chrono::milliseconds(identity.getExpiration().Millis() - Aws::Utils::DateTime::Now().Millis()));
    }
    return identity;
}

Aws::S3Crt::DefaultAsyncS3ExpressIdentityProvider::DefaultAsyncS3ExpressIdentityProvider(
    const S3CrtClient &s3Client,
    std::chrono::minutes refreshPeriod) :
    DefaultAsyncS3ExpressIdentityProvider(s3Client,
        Aws::MakeShared<Aws::Utils::ConcurrentCache<Aws::String, S3ExpressIdentity>>(S3_EXPRESS_IDENTITY_PROVIDER,
            DEFAULT_CACHE_SIZE),
        refreshPeriod) {

}

Aws::S3Crt::DefaultAsyncS3ExpressIdentityProvider::DefaultAsyncS3ExpressIdentityProvider(
    const S3CrtClient &s3Client,
    std::shared_ptr<Aws::Utils::ConcurrentCache<Aws::String, S3ExpressIdentity>> credentialsCache,
    std::chrono::minutes refreshPeriod) :
    S3ExpressIdentityProvider(s3Client),
    m_credentialsCache(std::move(credentialsCache)) {
    // Start a thread to background refresh the keys currently in the cache.
    m_shouldStopBackgroundRefresh = false;
    m_backgroundRefreshThread = Aws::MakeUnique<std::thread>(S3_EXPRESS_IDENTITY_PROVIDER,
        std::thread(&DefaultAsyncS3ExpressIdentityProvider::refreshIdentities,
            this,
            refreshPeriod));
}

DefaultAsyncS3ExpressIdentityProvider::~DefaultAsyncS3ExpressIdentityProvider() {
    {
        std::unique_lock<std::mutex> lock(m_shutDownMutex);
        m_shouldStopBackgroundRefresh = true;
        m_shutdownCondition.notify_all();
    }
    m_backgroundRefreshThread->join();
}

void DefaultAsyncS3ExpressIdentityProvider::refreshIdentities(std::chrono::minutes refreshPeriod) {
    auto filterUnusedKeys = [&](const Aws::String &bucketName, const CacheValueType &valueType) -> bool {
        std::lock_guard<std::mutex> lock(*GetMutexForBucketName(bucketName));
        AWS_UNREFERENCED_PARAM(valueType);
        return !threadSafeKeyHas(bucketName);
    };
    auto refreshIdentityWhenCloseToExpiry = [&](const Aws::String &bucketName,
        const CacheValueType &valueType) -> CacheValueType {
        std::lock_guard<std::mutex> lock(*GetMutexForBucketName(bucketName));
        if (duration_cast<milliseconds>(refreshPeriod).count() < valueType.val.getExpiration().Millis() &&
            valueType.val.getExpiration() - refreshPeriod < Aws::Utils::DateTime::Now()) {
            auto updatedIdentity = this->getIdentity(bucketName);
            return {updatedIdentity.getExpiration(), updatedIdentity};
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

S3ExpressIdentity DefaultAsyncS3ExpressIdentityProvider::GetS3ExpressIdentity(const ServiceSpecificParameters &serviceSpecificParameters) {
    auto bucketNameIter = serviceSpecificParameters.parameterMap.find("bucketName");
    if (bucketNameIter == serviceSpecificParameters.parameterMap.end()) {
        AWS_LOGSTREAM_ERROR(S3_EXPRESS_IDENTITY_PROVIDER, "property bucketName Required to make call")
        return {"", "", "", {}};
    }
    threadSafeKeyInsert(bucketNameIter->second);
    std::lock_guard<std::mutex> lock(*GetMutexForBucketName(bucketNameIter->second));
    S3ExpressIdentity identity;
    auto isInCache = m_credentialsCache->Get(bucketNameIter->second, identity);
    if (!isInCache) {
        identity = getIdentity(bucketNameIter->second);
        m_credentialsCache->Put(bucketNameIter->second,
            identity,
            std::chrono::milliseconds(identity.getExpiration().Millis() - Aws::Utils::DateTime::Now().Millis()));
    }
    return identity;
}

void DefaultAsyncS3ExpressIdentityProvider::threadSafeKeyEmpty() {
    std::lock_guard<std::mutex> lock(m_keysUsedMutex);
    m_keysUsed.clear();
}

bool DefaultAsyncS3ExpressIdentityProvider::threadSafeKeyHas(const Aws::String &key) {
    std::lock_guard<std::mutex> lock(m_keysUsedMutex);
    return m_keysUsed.find(key) != m_keysUsed.end();
}

void DefaultAsyncS3ExpressIdentityProvider::threadSafeKeyInsert(const Aws::String &key) {
    std::lock_guard<std::mutex> lock(m_keysUsedMutex);
    m_keysUsed.insert(key);
}
