/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/SystemMetadata.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>A <code>SearchEvents</code> result: the matching chunk of an event and its
 * provenance. Unlike <code>EventSummary</code> from <code>ListEvents</code>, it
 * has a relevance score and the matched content, but not the full
 * payload.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/EventSearchSummary">AWS
 * API Reference</a></p>
 */
class EventSearchSummary {
 public:
  AWS_OPENSEARCHMEMORY_API EventSearchSummary() = default;
  AWS_OPENSEARCHMEMORY_API EventSearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API EventSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the event that the chunk belongs to. Use it with
   * <code>GetEvent</code> or <code>DeleteEvent</code>.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  EventSearchSummary& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The relevance score of the result. A higher score is more relevant. Scores
   * aren't normalized to a fixed range and can be greater than 1, so use them only
   * to order results.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline EventSearchSummary& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provenance for the chunk: the owning actor and session, and when it was
   * created and last updated. It is the same block that <code>ListMemories</code>
   * and <code>SearchMemories</code> return. Event chunks are never modified, so
   * <code>updatedAt</code> always equals <code>createdAt</code>.</p> <p>Absent when
   * the service has no provenance for the chunk.</p>
   */
  inline const SystemMetadata& GetSystemMetadata() const { return m_systemMetadata; }
  inline bool SystemMetadataHasBeenSet() const { return m_systemMetadataHasBeenSet; }
  template <typename SystemMetadataT = SystemMetadata>
  void SetSystemMetadata(SystemMetadataT&& value) {
    m_systemMetadataHasBeenSet = true;
    m_systemMetadata = std::forward<SystemMetadataT>(value);
  }
  template <typename SystemMetadataT = SystemMetadata>
  EventSearchSummary& WithSystemMetadata(SystemMetadataT&& value) {
    SetSystemMetadata(std::forward<SystemMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event's metadata tags. All values are strings. In a query, filter on a
   * tag as <code>metadata.&lt;key&gt;</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  EventSearchSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  EventSearchSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text of the matching chunk.</p>
   */
  inline const Aws::String& GetMatchedContent() const { return m_matchedContent; }
  inline bool MatchedContentHasBeenSet() const { return m_matchedContentHasBeenSet; }
  template <typename MatchedContentT = Aws::String>
  void SetMatchedContent(MatchedContentT&& value) {
    m_matchedContentHasBeenSet = true;
    m_matchedContent = std::forward<MatchedContentT>(value);
  }
  template <typename MatchedContentT = Aws::String>
  EventSearchSummary& WithMatchedContent(MatchedContentT&& value) {
    SetMatchedContent(std::forward<MatchedContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  double m_score{0.0};

  SystemMetadata m_systemMetadata;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::String m_matchedContent;
  bool m_eventIdHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
  bool m_systemMetadataHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_matchedContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
