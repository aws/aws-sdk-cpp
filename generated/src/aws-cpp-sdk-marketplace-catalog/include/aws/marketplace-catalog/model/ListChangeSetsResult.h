/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/ChangeSetSummaryListItem.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class ListChangeSetsResult
  {
  public:
    AWS_MARKETPLACECATALOG_API ListChangeSetsResult() = default;
    AWS_MARKETPLACECATALOG_API ListChangeSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API ListChangeSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Array of <code>ChangeSetSummaryListItem</code> objects.</p>
     */
    inline const Aws::Vector<ChangeSetSummaryListItem>& GetChangeSetSummaryList() const { return m_changeSetSummaryList; }
    template<typename ChangeSetSummaryListT = Aws::Vector<ChangeSetSummaryListItem>>
    void SetChangeSetSummaryList(ChangeSetSummaryListT&& value) { m_changeSetSummaryListHasBeenSet = true; m_changeSetSummaryList = std::forward<ChangeSetSummaryListT>(value); }
    template<typename ChangeSetSummaryListT = Aws::Vector<ChangeSetSummaryListItem>>
    ListChangeSetsResult& WithChangeSetSummaryList(ChangeSetSummaryListT&& value) { SetChangeSetSummaryList(std::forward<ChangeSetSummaryListT>(value)); return *this;}
    template<typename ChangeSetSummaryListT = ChangeSetSummaryListItem>
    ListChangeSetsResult& AddChangeSetSummaryList(ChangeSetSummaryListT&& value) { m_changeSetSummaryListHasBeenSet = true; m_changeSetSummaryList.emplace_back(std::forward<ChangeSetSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChangeSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChangeSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChangeSetSummaryListItem> m_changeSetSummaryList;
    bool m_changeSetSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
