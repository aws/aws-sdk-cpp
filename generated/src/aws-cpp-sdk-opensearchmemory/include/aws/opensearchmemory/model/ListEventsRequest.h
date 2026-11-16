/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class ListEventsRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API ListEventsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEvents"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_OPENSEARCHMEMORY_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  ListEventsRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actor whose events to list.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  ListEventsRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session whose events to list. To find events across sessions, use
   * <code>SearchEvents</code>.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  ListEventsRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive upper bound on <code>eventTimestamp</code>: only events at or
   * before this time are returned. Omit for no upper bound.</p>
   */
  inline const Aws::Utils::DateTime& GetEventTimestampBefore() const { return m_eventTimestampBefore; }
  inline bool EventTimestampBeforeHasBeenSet() const { return m_eventTimestampBeforeHasBeenSet; }
  template <typename EventTimestampBeforeT = Aws::Utils::DateTime>
  void SetEventTimestampBefore(EventTimestampBeforeT&& value) {
    m_eventTimestampBeforeHasBeenSet = true;
    m_eventTimestampBefore = std::forward<EventTimestampBeforeT>(value);
  }
  template <typename EventTimestampBeforeT = Aws::Utils::DateTime>
  ListEventsRequest& WithEventTimestampBefore(EventTimestampBeforeT&& value) {
    SetEventTimestampBefore(std::forward<EventTimestampBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive lower bound on <code>eventTimestamp</code>: only events at or after
   * this time are returned. Omit for no lower bound.</p> <p>If it's later than
   * <code>eventTimestampBefore</code>, the request fails with
   * <code>ValidationException</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetEventTimestampAfter() const { return m_eventTimestampAfter; }
  inline bool EventTimestampAfterHasBeenSet() const { return m_eventTimestampAfterHasBeenSet; }
  template <typename EventTimestampAfterT = Aws::Utils::DateTime>
  void SetEventTimestampAfter(EventTimestampAfterT&& value) {
    m_eventTimestampAfterHasBeenSet = true;
    m_eventTimestampAfter = std::forward<EventTimestampAfterT>(value);
  }
  template <typename EventTimestampAfterT = Aws::Utils::DateTime>
  ListEventsRequest& WithEventTimestampAfter(EventTimestampAfterT&& value) {
    SetEventTimestampAfter(std::forward<EventTimestampAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order of the results by <code>eventTimestamp</code>: <code>ASC</code> or
   * <code>DESC</code>. The default is <code>DESC</code>, most recent first.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListEventsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only events whose metadata contains every one of these key-value
   * pairs. Omit, or leave empty, for no metadata filter. The service applies the
   * filter after it reads events, so a page can hold fewer than
   * <code>maxResults</code> events, or none, and still return a
   * <code>nextToken</code>. Keep paging until <code>nextToken</code> is absent.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadataFilters() const { return m_metadataFilters; }
  inline bool MetadataFiltersHasBeenSet() const { return m_metadataFiltersHasBeenSet; }
  template <typename MetadataFiltersT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadataFilters(MetadataFiltersT&& value) {
    m_metadataFiltersHasBeenSet = true;
    m_metadataFilters = std::forward<MetadataFiltersT>(value);
  }
  template <typename MetadataFiltersT = Aws::Map<Aws::String, Aws::String>>
  ListEventsRequest& WithMetadataFilters(MetadataFiltersT&& value) {
    SetMetadataFilters(std::forward<MetadataFiltersT>(value));
    return *this;
  }
  template <typename MetadataFiltersKeyT = Aws::String, typename MetadataFiltersValueT = Aws::String>
  ListEventsRequest& AddMetadataFilters(MetadataFiltersKeyT&& key, MetadataFiltersValueT&& value) {
    m_metadataFiltersHasBeenSet = true;
    m_metadataFilters.emplace(std::forward<MetadataFiltersKeyT>(key), std::forward<MetadataFiltersValueT>(value));
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
  inline ListEventsRequest& WithMaxResults(int value) {
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
  ListEventsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_actorId;

  Aws::String m_sessionId;

  Aws::Utils::DateTime m_eventTimestampBefore{};

  Aws::Utils::DateTime m_eventTimestampAfter{};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_metadataFilters;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_spaceIdHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_eventTimestampBeforeHasBeenSet = false;
  bool m_eventTimestampAfterHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_metadataFiltersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
