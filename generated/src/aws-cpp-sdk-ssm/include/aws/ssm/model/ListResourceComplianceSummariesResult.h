/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceComplianceSummaryItem.h>
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
  class ListResourceComplianceSummariesResult
  {
  public:
    AWS_SSM_API ListResourceComplianceSummariesResult() = default;
    AWS_SSM_API ListResourceComplianceSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListResourceComplianceSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary count for specified or targeted managed nodes. Summary count
     * includes information about compliant and non-compliant State Manager
     * associations, patch status, or custom items according to the filter criteria
     * that you specify. </p>
     */
    inline const Aws::Vector<ResourceComplianceSummaryItem>& GetResourceComplianceSummaryItems() const { return m_resourceComplianceSummaryItems; }
    template<typename ResourceComplianceSummaryItemsT = Aws::Vector<ResourceComplianceSummaryItem>>
    void SetResourceComplianceSummaryItems(ResourceComplianceSummaryItemsT&& value) { m_resourceComplianceSummaryItemsHasBeenSet = true; m_resourceComplianceSummaryItems = std::forward<ResourceComplianceSummaryItemsT>(value); }
    template<typename ResourceComplianceSummaryItemsT = Aws::Vector<ResourceComplianceSummaryItem>>
    ListResourceComplianceSummariesResult& WithResourceComplianceSummaryItems(ResourceComplianceSummaryItemsT&& value) { SetResourceComplianceSummaryItems(std::forward<ResourceComplianceSummaryItemsT>(value)); return *this;}
    template<typename ResourceComplianceSummaryItemsT = ResourceComplianceSummaryItem>
    ListResourceComplianceSummariesResult& AddResourceComplianceSummaryItems(ResourceComplianceSummaryItemsT&& value) { m_resourceComplianceSummaryItemsHasBeenSet = true; m_resourceComplianceSummaryItems.emplace_back(std::forward<ResourceComplianceSummaryItemsT>(value)); return *this; }
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
    ListResourceComplianceSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceComplianceSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceComplianceSummaryItem> m_resourceComplianceSummaryItems;
    bool m_resourceComplianceSummaryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
