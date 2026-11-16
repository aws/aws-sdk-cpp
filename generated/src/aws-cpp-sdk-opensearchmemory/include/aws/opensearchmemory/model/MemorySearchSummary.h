/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/MemoryType.h>
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
 * <p>A <code>SearchMemories</code> result: a matching memory and its relevance
 * score.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/MemorySearchSummary">AWS
 * API Reference</a></p>
 */
class MemorySearchSummary {
 public:
  AWS_OPENSEARCHMEMORY_API MemorySearchSummary() = default;
  AWS_OPENSEARCHMEMORY_API MemorySearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API MemorySearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The memory's ID, assigned by the service. Always present.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  MemorySearchSummary& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory type of the result.</p>
   */
  inline MemoryType GetMemoryType() const { return m_memoryType; }
  inline bool MemoryTypeHasBeenSet() const { return m_memoryTypeHasBeenSet; }
  inline void SetMemoryType(MemoryType value) {
    m_memoryTypeHasBeenSet = true;
    m_memoryType = value;
  }
  inline MemorySearchSummary& WithMemoryType(MemoryType value) {
    SetMemoryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the strategy the memory belongs to, for example
   * <code>user-facts</code>: the strategy <code>memoryStrategies</code> selects on
   * in <code>SearchMemories</code>. Absent when the memory's strategy is no longer
   * declared on the space, for example right after the strategy is deleted.</p>
   */
  inline const Aws::String& GetStrategyName() const { return m_strategyName; }
  inline bool StrategyNameHasBeenSet() const { return m_strategyNameHasBeenSet; }
  template <typename StrategyNameT = Aws::String>
  void SetStrategyName(StrategyNameT&& value) {
    m_strategyNameHasBeenSet = true;
    m_strategyName = std::forward<StrategyNameT>(value);
  }
  template <typename StrategyNameT = Aws::String>
  MemorySearchSummary& WithStrategyName(StrategyNameT&& value) {
    SetStrategyName(std::forward<StrategyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory text.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  MemorySearchSummary& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
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
  inline MemorySearchSummary& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provenance for the memory: the actor and session that own it, and when it was
   * created and last updated. It is the same block that <code>ListMemories</code>,
   * <code>GetMemory</code>, and <code>SearchEvents</code> return.</p> <p>In a query,
   * filter or sort on the timestamps as <code>system_metadata.created_at</code> and
   * <code>system_metadata.updated_at</code>. Scope by owner with the top-level
   * <code>actorId</code>, not in the query. Searching memories doesn't filter by
   * session.</p> <p>Absent when the service has no provenance for the memory.</p>
   */
  inline const SystemMetadata& GetSystemMetadata() const { return m_systemMetadata; }
  inline bool SystemMetadataHasBeenSet() const { return m_systemMetadataHasBeenSet; }
  template <typename SystemMetadataT = SystemMetadata>
  void SetSystemMetadata(SystemMetadataT&& value) {
    m_systemMetadataHasBeenSet = true;
    m_systemMetadata = std::forward<SystemMetadataT>(value);
  }
  template <typename SystemMetadataT = SystemMetadata>
  MemorySearchSummary& WithSystemMetadata(SystemMetadataT&& value) {
    SetSystemMetadata(std::forward<SystemMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory's metadata tags. All values are strings. In a query, filter on a
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
  MemorySearchSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  MemorySearchSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the events the memory was derived from, without duplicates. Use
   * them with <code>GetEvent</code> or <code>BatchGetEvent</code>, or to search
   * those events' content with <code>SearchEvents</code> by filtering on
   * <code>event_ids</code> in the query. Absent for a memory created directly with
   * <code>CreateMemory</code>. A memory can be derived from several events. The
   * service sets this value.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSourceEventIds() const { return m_sourceEventIds; }
  inline bool SourceEventIdsHasBeenSet() const { return m_sourceEventIdsHasBeenSet; }
  template <typename SourceEventIdsT = Aws::Vector<Aws::String>>
  void SetSourceEventIds(SourceEventIdsT&& value) {
    m_sourceEventIdsHasBeenSet = true;
    m_sourceEventIds = std::forward<SourceEventIdsT>(value);
  }
  template <typename SourceEventIdsT = Aws::Vector<Aws::String>>
  MemorySearchSummary& WithSourceEventIds(SourceEventIdsT&& value) {
    SetSourceEventIds(std::forward<SourceEventIdsT>(value));
    return *this;
  }
  template <typename SourceEventIdsT = Aws::String>
  MemorySearchSummary& AddSourceEventIds(SourceEventIdsT&& value) {
    m_sourceEventIdsHasBeenSet = true;
    m_sourceEventIds.emplace_back(std::forward<SourceEventIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_memoryId;

  MemoryType m_memoryType{MemoryType::NOT_SET};

  Aws::String m_strategyName;

  Aws::String m_content;

  double m_score{0.0};

  SystemMetadata m_systemMetadata;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::Vector<Aws::String> m_sourceEventIds;
  bool m_memoryIdHasBeenSet = false;
  bool m_memoryTypeHasBeenSet = false;
  bool m_strategyNameHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
  bool m_systemMetadataHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_sourceEventIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
