/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>A summary of a memory, as returned by <code>ListMemories</code>: its ID,
 * type, provenance, and tags. It doesn't include <code>content</code>. Call
 * <code>GetMemory</code> for the full memory.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/MemoryListSummary">AWS
 * API Reference</a></p>
 */
class MemoryListSummary {
 public:
  AWS_OPENSEARCHMEMORY_API MemoryListSummary() = default;
  AWS_OPENSEARCHMEMORY_API MemoryListSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API MemoryListSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The memory's ID, assigned by the service. IDs are opaque, can contain hyphens
   * and underscores, and can be up to 512 characters long.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  MemoryListSummary& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory type.</p>
   */
  inline MemoryType GetMemoryType() const { return m_memoryType; }
  inline bool MemoryTypeHasBeenSet() const { return m_memoryTypeHasBeenSet; }
  inline void SetMemoryType(MemoryType value) {
    m_memoryTypeHasBeenSet = true;
    m_memoryType = value;
  }
  inline MemoryListSummary& WithMemoryType(MemoryType value) {
    SetMemoryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the strategy the memory belongs to, for example
   * <code>user-facts</code>: the strategy <code>memoryStrategies</code> selects on
   * in <code>ListMemories</code>. Absent when the memory's strategy is no longer
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
  MemoryListSummary& WithStrategyName(StrategyNameT&& value) {
    SetStrategyName(std::forward<StrategyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provenance for the memory: the owning actor and session, and when it was
   * created and last updated. Always present, with both timestamps.</p>
   */
  inline const SystemMetadata& GetSystemMetadata() const { return m_systemMetadata; }
  inline bool SystemMetadataHasBeenSet() const { return m_systemMetadataHasBeenSet; }
  template <typename SystemMetadataT = SystemMetadata>
  void SetSystemMetadata(SystemMetadataT&& value) {
    m_systemMetadataHasBeenSet = true;
    m_systemMetadata = std::forward<SystemMetadataT>(value);
  }
  template <typename SystemMetadataT = SystemMetadata>
  MemoryListSummary& WithSystemMetadata(SystemMetadataT&& value) {
    SetSystemMetadata(std::forward<SystemMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory's metadata tags. All values are strings.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  MemoryListSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  MemoryListSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_memoryId;

  MemoryType m_memoryType{MemoryType::NOT_SET};

  Aws::String m_strategyName;

  SystemMetadata m_systemMetadata;

  Aws::Map<Aws::String, Aws::String> m_metadata;
  bool m_memoryIdHasBeenSet = false;
  bool m_memoryTypeHasBeenSet = false;
  bool m_strategyNameHasBeenSet = false;
  bool m_systemMetadataHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
