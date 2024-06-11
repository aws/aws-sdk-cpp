﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/Authorization.h>
#include <aws/mediapackage-vod/model/EgressAccessLogs.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaPackageVod
{
namespace Model
{
  class DescribePackagingGroupResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API DescribePackagingGroupResult();
    AWS_MEDIAPACKAGEVOD_API DescribePackagingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API DescribePackagingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The approximate asset count of the PackagingGroup.
     */
    inline int GetApproximateAssetCount() const{ return m_approximateAssetCount; }
    inline void SetApproximateAssetCount(int value) { m_approximateAssetCount = value; }
    inline DescribePackagingGroupResult& WithApproximateAssetCount(int value) { SetApproximateAssetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the PackagingGroup.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribePackagingGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribePackagingGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribePackagingGroupResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Authorization& GetAuthorization() const{ return m_authorization; }
    inline void SetAuthorization(const Authorization& value) { m_authorization = value; }
    inline void SetAuthorization(Authorization&& value) { m_authorization = std::move(value); }
    inline DescribePackagingGroupResult& WithAuthorization(const Authorization& value) { SetAuthorization(value); return *this;}
    inline DescribePackagingGroupResult& WithAuthorization(Authorization&& value) { SetAuthorization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time the PackagingGroup was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }
    inline DescribePackagingGroupResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline DescribePackagingGroupResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline DescribePackagingGroupResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline DescribePackagingGroupResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DescribePackagingGroupResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DescribePackagingGroupResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    
    inline const EgressAccessLogs& GetEgressAccessLogs() const{ return m_egressAccessLogs; }
    inline void SetEgressAccessLogs(const EgressAccessLogs& value) { m_egressAccessLogs = value; }
    inline void SetEgressAccessLogs(EgressAccessLogs&& value) { m_egressAccessLogs = std::move(value); }
    inline DescribePackagingGroupResult& WithEgressAccessLogs(const EgressAccessLogs& value) { SetEgressAccessLogs(value); return *this;}
    inline DescribePackagingGroupResult& WithEgressAccessLogs(EgressAccessLogs&& value) { SetEgressAccessLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the PackagingGroup.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DescribePackagingGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribePackagingGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribePackagingGroupResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribePackagingGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribePackagingGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribePackagingGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribePackagingGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribePackagingGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribePackagingGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribePackagingGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribePackagingGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribePackagingGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePackagingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePackagingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePackagingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_approximateAssetCount;

    Aws::String m_arn;

    Authorization m_authorization;

    Aws::String m_createdAt;

    Aws::String m_domainName;

    EgressAccessLogs m_egressAccessLogs;

    Aws::String m_id;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
