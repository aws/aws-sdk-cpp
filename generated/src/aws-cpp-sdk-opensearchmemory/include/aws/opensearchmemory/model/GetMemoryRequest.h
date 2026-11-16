/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class GetMemoryRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API GetMemoryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetMemory"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_OPENSEARCHMEMORY_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ID of the space that holds the memory.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  GetMemoryRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory's ID, as returned by <code>SearchMemories</code> or
   * <code>ListMemories</code>.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  GetMemoryRequest& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the actor the memory must belong to. Omit it to skip this check. If
   * it doesn't match the stored memory, the call fails with
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
  GetMemoryRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the strategy the memory must belong to. Omit it to skip this
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
  GetMemoryRequest& WithStrategyName(StrategyNameT&& value) {
    SetStrategyName(std::forward<StrategyNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_memoryId;

  Aws::String m_actorId;

  Aws::String m_strategyName;
  bool m_spaceIdHasBeenSet = false;
  bool m_memoryIdHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_strategyNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
