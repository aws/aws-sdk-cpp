/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/MemorySortField.h>
#include <aws/opensearchmemory/model/SortOrder.h>
#include <aws/opensearchmemory/model/StrategySelector.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class ListMemoriesRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API ListMemoriesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMemories"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_OPENSEARCHMEMORY_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The space whose memories to list.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  ListMemoriesRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The strategies to list, as selectors. A selector without
   * <code>memoryStrategyNames</code> lists every strategy of its type, and omitting
   * <code>memoryStrategies</code> lists every strategy in the space. A name that is
   * not a declared strategy of that type fails with
   * <code>ValidationException</code>.</p>
   */
  inline const Aws::Vector<StrategySelector>& GetMemoryStrategies() const { return m_memoryStrategies; }
  inline bool MemoryStrategiesHasBeenSet() const { return m_memoryStrategiesHasBeenSet; }
  template <typename MemoryStrategiesT = Aws::Vector<StrategySelector>>
  void SetMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies = std::forward<MemoryStrategiesT>(value);
  }
  template <typename MemoryStrategiesT = Aws::Vector<StrategySelector>>
  ListMemoriesRequest& WithMemoryStrategies(MemoryStrategiesT&& value) {
    SetMemoryStrategies(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  template <typename MemoryStrategiesT = StrategySelector>
  ListMemoriesRequest& AddMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies.emplace_back(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists only memories owned by one of these actors. Combined with
   * <code>sessionIds</code> by AND: a memory must match both filters when both are
   * given. Omit for no actor filter. An empty list fails validation. A memory stored
   * without an actor never matches an actor filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetActorIds() const { return m_actorIds; }
  inline bool ActorIdsHasBeenSet() const { return m_actorIdsHasBeenSet; }
  template <typename ActorIdsT = Aws::Vector<Aws::String>>
  void SetActorIds(ActorIdsT&& value) {
    m_actorIdsHasBeenSet = true;
    m_actorIds = std::forward<ActorIdsT>(value);
  }
  template <typename ActorIdsT = Aws::Vector<Aws::String>>
  ListMemoriesRequest& WithActorIds(ActorIdsT&& value) {
    SetActorIds(std::forward<ActorIdsT>(value));
    return *this;
  }
  template <typename ActorIdsT = Aws::String>
  ListMemoriesRequest& AddActorIds(ActorIdsT&& value) {
    m_actorIdsHasBeenSet = true;
    m_actorIds.emplace_back(std::forward<ActorIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists only memories from one of these sessions. Combined with
   * <code>actorIds</code> by AND. Omit for no session filter. An empty list fails
   * validation. A memory stored without a session never matches a session
   * filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSessionIds() const { return m_sessionIds; }
  inline bool SessionIdsHasBeenSet() const { return m_sessionIdsHasBeenSet; }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  void SetSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds = std::forward<SessionIdsT>(value);
  }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  ListMemoriesRequest& WithSessionIds(SessionIdsT&& value) {
    SetSessionIds(std::forward<SessionIdsT>(value));
    return *this;
  }
  template <typename SessionIdsT = Aws::String>
  ListMemoriesRequest& AddSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds.emplace_back(std::forward<SessionIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp to sort by, as returned in <code>systemMetadata</code>:
   * <code>CREATED_AT</code> (the default) or <code>UPDATED_AT</code>.</p>
   */
  inline MemorySortField GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(MemorySortField value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListMemoriesRequest& WithSortBy(MemorySortField value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order: <code>ASC</code> or <code>DESC</code>. The default is
   * <code>DESC</code>, most recent first.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListMemoriesRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of memories to return, from 1 to 100. The default is
   * 20.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListMemoriesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Use the value returned in the previous
   * response in the next request to retrieve the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMemoriesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::Vector<StrategySelector> m_memoryStrategies;

  Aws::Vector<Aws::String> m_actorIds;

  Aws::Vector<Aws::String> m_sessionIds;

  MemorySortField m_sortBy{MemorySortField::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_spaceIdHasBeenSet = false;
  bool m_memoryStrategiesHasBeenSet = false;
  bool m_actorIdsHasBeenSet = false;
  bool m_sessionIdsHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
