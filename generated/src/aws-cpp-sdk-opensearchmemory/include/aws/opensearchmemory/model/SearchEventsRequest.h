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

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class SearchEventsRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API SearchEventsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchEvents"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_OPENSEARCHMEMORY_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The space whose events to search. Use <code>actorId</code> and
   * <code>sessionIds</code> to narrow the search within it.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  SearchEventsRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actor whose events to search (exact match). Required: every search covers
   * exactly one actor, and an event stored without an actor is never returned.
   * Narrow the search further with <code>sessionIds</code>, combined by AND. This is
   * the only way to filter by actor: a query that references
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
  SearchEventsRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only events from one of these sessions (exact match). Combined with
   * <code>actorId</code> by AND. Omit for no session filter. An empty list fails
   * validation. An event stored without a session never matches a session filter.
   * This is the only way to filter by session: a query that references
   * <code>system_metadata.session_id</code> fails with
   * <code>ValidationException</code> (reason <code>nonFilterableField</code>).</p>
   */
  inline const Aws::Vector<Aws::String>& GetSessionIds() const { return m_sessionIds; }
  inline bool SessionIdsHasBeenSet() const { return m_sessionIdsHasBeenSet; }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  void SetSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds = std::forward<SessionIdsT>(value);
  }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  SearchEventsRequest& WithSessionIds(SessionIdsT&& value) {
    SetSessionIds(std::forward<SessionIdsT>(value));
    return *this;
  }
  template <typename SessionIdsT = Aws::String>
  SearchEventsRequest& AddSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds.emplace_back(std::forward<SessionIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query: a subset of the OpenSearch Query DSL (see
   * <code>SearchQuery</code>), validated by the same rules as on
   * <code>SearchMemories</code>. Query event text as <code>text</code> and
   * embeddings as <code>vector</code>. A search covers both conversation turns and
   * chunks of documents submitted as a <code>blob</code>. You can't use actor and
   * session fields here. Use the top-level <code>actorId</code> and
   * <code>sessionIds</code>.</p> <p>To search only the content of particular events,
   * filter on <code>event_ids</code> with <code>term</code> or <code>terms</code>,
   * for example with the <code>sourceEventIds</code> that a
   * <code>SearchMemories</code> result returns. A <code>terms</code> clause on
   * <code>event_ids</code> can list up to 10 event IDs. More IDs fail with
   * <code>ValidationException</code> (reason <code>queryBodyTooLarge</code>). You
   * can use <code>event_ids</code> only in <code>term</code>, <code>terms</code>,
   * and <code>exists</code> queries.</p>
   */
  inline Aws::Utils::DocumentView GetQuery() const { return m_query; }
  inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
  template <typename QueryT = Aws::Utils::Document>
  void SetQuery(QueryT&& value) {
    m_queryHasBeenSet = true;
    m_query = std::forward<QueryT>(value);
  }
  template <typename QueryT = Aws::Utils::Document>
  SearchEventsRequest& WithQuery(QueryT&& value) {
    SetQuery(std::forward<QueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order (see <code>SearchSort</code>). Omit to return the most
   * relevant events first.</p>
   */
  inline Aws::Utils::DocumentView GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = Aws::Utils::Document>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = Aws::Utils::Document>
  SearchEventsRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of events to return, from 1 to 100. The default is 20.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchEventsRequest& WithMaxResults(int value) {
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
  SearchEventsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_actorId;

  Aws::Vector<Aws::String> m_sessionIds;

  Aws::Utils::Document m_query;

  Aws::Utils::Document m_sort;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_spaceIdHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_sessionIdsHasBeenSet = false;
  bool m_queryHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
