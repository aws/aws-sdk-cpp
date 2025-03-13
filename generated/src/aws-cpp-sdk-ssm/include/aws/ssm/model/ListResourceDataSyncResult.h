/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncItem.h>
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
namespace SSM
{
namespace Model
{
  class ListResourceDataSyncResult
  {
  public:
    AWS_SSM_API ListResourceDataSyncResult() = default;
    AWS_SSM_API ListResourceDataSyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListResourceDataSyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of your current resource data sync configurations and their
     * statuses.</p>
     */
    inline const Aws::Vector<ResourceDataSyncItem>& GetResourceDataSyncItems() const { return m_resourceDataSyncItems; }
    template<typename ResourceDataSyncItemsT = Aws::Vector<ResourceDataSyncItem>>
    void SetResourceDataSyncItems(ResourceDataSyncItemsT&& value) { m_resourceDataSyncItemsHasBeenSet = true; m_resourceDataSyncItems = std::forward<ResourceDataSyncItemsT>(value); }
    template<typename ResourceDataSyncItemsT = Aws::Vector<ResourceDataSyncItem>>
    ListResourceDataSyncResult& WithResourceDataSyncItems(ResourceDataSyncItemsT&& value) { SetResourceDataSyncItems(std::forward<ResourceDataSyncItemsT>(value)); return *this;}
    template<typename ResourceDataSyncItemsT = ResourceDataSyncItem>
    ListResourceDataSyncResult& AddResourceDataSyncItems(ResourceDataSyncItemsT&& value) { m_resourceDataSyncItemsHasBeenSet = true; m_resourceDataSyncItems.emplace_back(std::forward<ResourceDataSyncItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceDataSyncResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceDataSyncResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceDataSyncItem> m_resourceDataSyncItems;
    bool m_resourceDataSyncItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
