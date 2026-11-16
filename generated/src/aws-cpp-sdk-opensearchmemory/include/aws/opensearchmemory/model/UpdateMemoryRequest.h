/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/MetadataMode.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class UpdateMemoryRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API UpdateMemoryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMemory"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_OPENSEARCHMEMORY_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ID of the space that owns the memory, for example
   * <code>sp-02864597b164</code>.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  UpdateMemoryRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the memory to update.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  UpdateMemoryRequest& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Replacement memory text. Supplying it re-embeds the memory. Omit to leave the
   * text unchanged.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  UpdateMemoryRequest& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata tags to apply. By default this map replaces the stored metadata,
   * and any key not present is removed. Set <code>metadataMode</code> to
   * <code>MERGE</code> to keep the keys you don't supply. Limits apply to the
   * resulting metadata, not to the request. Keys that begin with <code>x-amz-</code>
   * and the key <code>documentS3Source</code> are reserved: a request that sets one
   * fails with <code>ValidationException</code>.</p> <p>A space can use at most 50
   * distinct metadata keys across all of its events and memories. A request that
   * would add a key beyond that fails with <code>ValidationException</code>. Reuse
   * an existing key instead.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  UpdateMemoryRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  UpdateMemoryRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How <code>metadata</code> combines with what is stored. The default is
   * <code>REPLACE</code>.</p>
   */
  inline MetadataMode GetMetadataMode() const { return m_metadataMode; }
  inline bool MetadataModeHasBeenSet() const { return m_metadataModeHasBeenSet; }
  inline void SetMetadataMode(MetadataMode value) {
    m_metadataModeHasBeenSet = true;
    m_metadataMode = value;
  }
  inline UpdateMemoryRequest& WithMetadataMode(MetadataMode value) {
    SetMetadataMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the actor that the memory must belong to. Omit it to skip this
   * check. If it doesn't match the stored memory, the call fails with
   * <code>ResourceNotFoundException</code>, as if the memory did not exist.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  UpdateMemoryRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the strategy that the memory must belong to. Omit it to skip this
   * check. If it doesn't match the stored memory, the call fails with
   * <code>ResourceNotFoundException</code>, as if the memory did not exist.</p>
   */
  inline const Aws::String& GetStrategyName() const { return m_strategyName; }
  inline bool StrategyNameHasBeenSet() const { return m_strategyNameHasBeenSet; }
  template <typename StrategyNameT = Aws::String>
  void SetStrategyName(StrategyNameT&& value) {
    m_strategyNameHasBeenSet = true;
    m_strategyName = std::forward<StrategyNameT>(value);
  }
  template <typename StrategyNameT = Aws::String>
  UpdateMemoryRequest& WithStrategyName(StrategyNameT&& value) {
    SetStrategyName(std::forward<StrategyNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_memoryId;

  Aws::String m_content;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  MetadataMode m_metadataMode{MetadataMode::NOT_SET};

  Aws::String m_actorId;

  Aws::String m_strategyName;
  bool m_spaceIdHasBeenSet = false;
  bool m_memoryIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_metadataModeHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_strategyNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
