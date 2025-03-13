/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/EntitySummary.h>
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
  class ListEntitiesResult
  {
  public:
    AWS_MARKETPLACECATALOG_API ListEntitiesResult() = default;
    AWS_MARKETPLACECATALOG_API ListEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API ListEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Array of <code>EntitySummary</code> objects.</p>
     */
    inline const Aws::Vector<EntitySummary>& GetEntitySummaryList() const { return m_entitySummaryList; }
    template<typename EntitySummaryListT = Aws::Vector<EntitySummary>>
    void SetEntitySummaryList(EntitySummaryListT&& value) { m_entitySummaryListHasBeenSet = true; m_entitySummaryList = std::forward<EntitySummaryListT>(value); }
    template<typename EntitySummaryListT = Aws::Vector<EntitySummary>>
    ListEntitiesResult& WithEntitySummaryList(EntitySummaryListT&& value) { SetEntitySummaryList(std::forward<EntitySummaryListT>(value)); return *this;}
    template<typename EntitySummaryListT = EntitySummary>
    ListEntitiesResult& AddEntitySummaryList(EntitySummaryListT&& value) { m_entitySummaryListHasBeenSet = true; m_entitySummaryList.emplace_back(std::forward<EntitySummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of the next token if it exists. Null if there is no more
     * result.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEntitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEntitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EntitySummary> m_entitySummaryList;
    bool m_entitySummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
