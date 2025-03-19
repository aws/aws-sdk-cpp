/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/RelatedItem.h>
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
namespace SSMIncidents
{
namespace Model
{
  class ListRelatedItemsResult
  {
  public:
    AWS_SSMINCIDENTS_API ListRelatedItemsResult() = default;
    AWS_SSMINCIDENTS_API ListRelatedItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListRelatedItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRelatedItemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about each related item.</p>
     */
    inline const Aws::Vector<RelatedItem>& GetRelatedItems() const { return m_relatedItems; }
    template<typename RelatedItemsT = Aws::Vector<RelatedItem>>
    void SetRelatedItems(RelatedItemsT&& value) { m_relatedItemsHasBeenSet = true; m_relatedItems = std::forward<RelatedItemsT>(value); }
    template<typename RelatedItemsT = Aws::Vector<RelatedItem>>
    ListRelatedItemsResult& WithRelatedItems(RelatedItemsT&& value) { SetRelatedItems(std::forward<RelatedItemsT>(value)); return *this;}
    template<typename RelatedItemsT = RelatedItem>
    ListRelatedItemsResult& AddRelatedItems(RelatedItemsT&& value) { m_relatedItemsHasBeenSet = true; m_relatedItems.emplace_back(std::forward<RelatedItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRelatedItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RelatedItem> m_relatedItems;
    bool m_relatedItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
