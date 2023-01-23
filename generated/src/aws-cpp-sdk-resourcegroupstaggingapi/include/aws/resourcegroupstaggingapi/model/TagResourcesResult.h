/**
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
  class TagResourcesResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API TagResourcesResult();
    AWS_RESOURCEGROUPSTAGGINGAPI_API TagResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API TagResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline const Aws::Map<Aws::String, FailureInfo>& GetFailedResourcesMap() const{ return m_failedResourcesMap; }

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline void SetFailedResourcesMap(const Aws::Map<Aws::String, FailureInfo>& value) { m_failedResourcesMap = value; }

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline void SetFailedResourcesMap(Aws::Map<Aws::String, FailureInfo>&& value) { m_failedResourcesMap = std::move(value); }

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline TagResourcesResult& WithFailedResourcesMap(const Aws::Map<Aws::String, FailureInfo>& value) { SetFailedResourcesMap(value); return *this;}

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline TagResourcesResult& WithFailedResourcesMap(Aws::Map<Aws::String, FailureInfo>&& value) { SetFailedResourcesMap(std::move(value)); return *this;}

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(const Aws::String& key, const FailureInfo& value) { m_failedResourcesMap.emplace(key, value); return *this; }

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(Aws::String&& key, const FailureInfo& value) { m_failedResourcesMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(const Aws::String& key, FailureInfo&& value) { m_failedResourcesMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(Aws::String&& key, FailureInfo&& value) { m_failedResourcesMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(const char* key, FailureInfo&& value) { m_failedResourcesMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map containing a key-value pair for each failed item that couldn't be
     * tagged. The key is the ARN of the failed resource. The value is a
     * <code>FailureInfo</code> object that contains an error code, a status code, and
     * an error message. If there are no errors, the <code>FailedResourcesMap</code> is
     * empty.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(const char* key, const FailureInfo& value) { m_failedResourcesMap.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, FailureInfo> m_failedResourcesMap;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
