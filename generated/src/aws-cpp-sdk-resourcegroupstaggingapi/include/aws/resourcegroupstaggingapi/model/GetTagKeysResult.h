/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetTagKeysResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagKeysResult() = default;
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline const Aws::String& GetPaginationToken() const { return m_paginationToken; }
    template<typename PaginationTokenT = Aws::String>
    void SetPaginationToken(PaginationTokenT&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::forward<PaginationTokenT>(value); }
    template<typename PaginationTokenT = Aws::String>
    GetTagKeysResult& WithPaginationToken(PaginationTokenT&& value) { SetPaginationToken(std::forward<PaginationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all tag keys in the Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    void SetTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::forward<TagKeysT>(value); }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    GetTagKeysResult& WithTagKeys(TagKeysT&& value) { SetTagKeys(std::forward<TagKeysT>(value)); return *this;}
    template<typename TagKeysT = Aws::String>
    GetTagKeysResult& AddTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.emplace_back(std::forward<TagKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTagKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
