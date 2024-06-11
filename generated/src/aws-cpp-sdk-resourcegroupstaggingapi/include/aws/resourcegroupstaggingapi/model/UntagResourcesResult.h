﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/FailureInfo.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class UntagResourcesResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API UntagResourcesResult();
    AWS_RESOURCEGROUPSTAGGINGAPI_API UntagResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API UntagResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * untagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline const Aws::Map<Aws::String, FailureInfo>& GetFailedResourcesMap() const{ return m_failedResourcesMap; }
    inline void SetFailedResourcesMap(const Aws::Map<Aws::String, FailureInfo>& value) { m_failedResourcesMap = value; }
    inline void SetFailedResourcesMap(Aws::Map<Aws::String, FailureInfo>&& value) { m_failedResourcesMap = std::move(value); }
    inline UntagResourcesResult& WithFailedResourcesMap(const Aws::Map<Aws::String, FailureInfo>& value) { SetFailedResourcesMap(value); return *this;}
    inline UntagResourcesResult& WithFailedResourcesMap(Aws::Map<Aws::String, FailureInfo>&& value) { SetFailedResourcesMap(std::move(value)); return *this;}
    inline UntagResourcesResult& AddFailedResourcesMap(const Aws::String& key, const FailureInfo& value) { m_failedResourcesMap.emplace(key, value); return *this; }
    inline UntagResourcesResult& AddFailedResourcesMap(Aws::String&& key, const FailureInfo& value) { m_failedResourcesMap.emplace(std::move(key), value); return *this; }
    inline UntagResourcesResult& AddFailedResourcesMap(const Aws::String& key, FailureInfo&& value) { m_failedResourcesMap.emplace(key, std::move(value)); return *this; }
    inline UntagResourcesResult& AddFailedResourcesMap(Aws::String&& key, FailureInfo&& value) { m_failedResourcesMap.emplace(std::move(key), std::move(value)); return *this; }
    inline UntagResourcesResult& AddFailedResourcesMap(const char* key, FailureInfo&& value) { m_failedResourcesMap.emplace(key, std::move(value)); return *this; }
    inline UntagResourcesResult& AddFailedResourcesMap(const char* key, const FailureInfo& value) { m_failedResourcesMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UntagResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UntagResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UntagResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, FailureInfo> m_failedResourcesMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
