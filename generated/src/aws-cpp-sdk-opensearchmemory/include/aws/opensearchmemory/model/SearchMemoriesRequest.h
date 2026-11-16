/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/StrategySelector.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class SearchMemoriesRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API SearchMemoriesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchMemories"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_OPENSEARCHMEMORY_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The space to search. Use <code>actorId</code> to narrow the search within
   * it.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  SearchMemoriesRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The strategies to search, as a list of selectors. Each selector names a
   * memory type and, optionally, specific strategy names of that type. A space can
   * hold several strategies of the same type. A selector without
   * <code>memoryStrategyNames</code> searches every strategy of its type, and
   * omitting <code>memoryStrategies</code> searches every strategy in the space. A
   * name that is not a declared strategy of that type fails with
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
  SearchMemoriesRequest& WithMemoryStrategies(MemoryStrategiesT&& value) {
    SetMemoryStrategies(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  template <typename MemoryStrategiesT = StrategySelector>
  SearchMemoriesRequest& AddMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies.emplace_back(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actor whose memories to search (exact match). Required: every search
   * covers exactly one actor, and a memory stored without an actor is never
   * returned. This is the only way to filter by actor: a query that references
   * <code>system_metadata.actor_id</code> fails with
   * <code>ValidationException</code> (reason <code>nonFilterableField</code>).</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  SearchMemoriesRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query: a subset of the OpenSearch Query DSL (see
   * <code>SearchQuery</code>). You can't use the actor and session fields
   * <code>system_metadata.actor_id</code> and
   * <code>system_metadata.session_id</code> here. Use the top-level
   * <code>actorId</code> to filter by actor. Searching memories doesn't filter by
   * session.</p>
   */
  inline Aws::Utils::DocumentView GetQuery() const { return m_query; }
  inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
  template <typename QueryT = Aws::Utils::Document>
  void SetQuery(QueryT&& value) {
    m_queryHasBeenSet = true;
    m_query = std::forward<QueryT>(value);
  }
  template <typename QueryT = Aws::Utils::Document>
  SearchMemoriesRequest& WithQuery(QueryT&& value) {
    SetQuery(std::forward<QueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order (see <code>SearchSort</code>). Omit to return the most
   * relevant memories first.</p>
   */
  inline Aws::Utils::DocumentView GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = Aws::Utils::Document>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = Aws::Utils::Document>
  SearchMemoriesRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
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
  inline SearchMemoriesRequest& WithMaxResults(int value) {
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
  SearchMemoriesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::Vector<StrategySelector> m_memoryStrategies;

  Aws::String m_actorId;

  Aws::Utils::Document m_query;

  Aws::Utils::Document m_sort;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_spaceIdHasBeenSet = false;
  bool m_memoryStrategiesHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_queryHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
