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
  class UntagResourcesResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API UntagResourcesResult() = default;
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
    inline const Aws::Map<Aws::String, FailureInfo>& GetFailedResourcesMap() const { return m_failedResourcesMap; }
    template<typename FailedResourcesMapT = Aws::Map<Aws::String, FailureInfo>>
    void SetFailedResourcesMap(FailedResourcesMapT&& value) { m_failedResourcesMapHasBeenSet = true; m_failedResourcesMap = std::forward<FailedResourcesMapT>(value); }
    template<typename FailedResourcesMapT = Aws::Map<Aws::String, FailureInfo>>
    UntagResourcesResult& WithFailedResourcesMap(FailedResourcesMapT&& value) { SetFailedResourcesMap(std::forward<FailedResourcesMapT>(value)); return *this;}
    template<typename FailedResourcesMapKeyT = Aws::String, typename FailedResourcesMapValueT = FailureInfo>
    UntagResourcesResult& AddFailedResourcesMap(FailedResourcesMapKeyT&& key, FailedResourcesMapValueT&& value) {
      m_failedResourcesMapHasBeenSet = true; m_failedResourcesMap.emplace(std::forward<FailedResourcesMapKeyT>(key), std::forward<FailedResourcesMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UntagResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, FailureInfo> m_failedResourcesMap;
    bool m_failedResourcesMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
