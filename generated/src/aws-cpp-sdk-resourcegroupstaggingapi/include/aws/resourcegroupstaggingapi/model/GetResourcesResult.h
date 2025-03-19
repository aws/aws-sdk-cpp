/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resourcegroupstaggingapi/model/ResourceTagMapping.h>
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
  class GetResourcesResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetResourcesResult() = default;
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    GetResourcesResult& WithPaginationToken(PaginationTokenT&& value) { SetPaginationToken(std::forward<PaginationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource ARNs and the tags (keys and values) associated with
     * each.</p>
     */
    inline const Aws::Vector<ResourceTagMapping>& GetResourceTagMappingList() const { return m_resourceTagMappingList; }
    template<typename ResourceTagMappingListT = Aws::Vector<ResourceTagMapping>>
    void SetResourceTagMappingList(ResourceTagMappingListT&& value) { m_resourceTagMappingListHasBeenSet = true; m_resourceTagMappingList = std::forward<ResourceTagMappingListT>(value); }
    template<typename ResourceTagMappingListT = Aws::Vector<ResourceTagMapping>>
    GetResourcesResult& WithResourceTagMappingList(ResourceTagMappingListT&& value) { SetResourceTagMappingList(std::forward<ResourceTagMappingListT>(value)); return *this;}
    template<typename ResourceTagMappingListT = ResourceTagMapping>
    GetResourcesResult& AddResourceTagMappingList(ResourceTagMappingListT&& value) { m_resourceTagMappingListHasBeenSet = true; m_resourceTagMappingList.emplace_back(std::forward<ResourceTagMappingListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::Vector<ResourceTagMapping> m_resourceTagMappingList;
    bool m_resourceTagMappingListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
