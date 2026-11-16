/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/MemoryStrategy.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class UpdateSpaceRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API UpdateSpaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSpace"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the space to update.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  UpdateSpaceRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The complete new list of memory strategies. The service removes strategies
   * that aren't in the list from the space. Removing a strategy stops extraction for
   * it but doesn't delete its memories: they're kept, until they expire if the space
   * sets <code>memoryExpiryDays</code>, and they're available again if you later add
   * a strategy with the same <code>type</code> and <code>name</code>. To delete
   * them, use <code>DeleteMemory</code> before you remove the strategy, or delete
   * the space.</p> <p>To keep a strategy, include it with the same <code>type</code>
   * and <code>name</code> that <code>GetSpace</code> returns. For a kept strategy,
   * any <code>configuration</code> member you omit keeps its current value. It
   * doesn't return to the default, and you can't clear a member once it's set. Omit
   * this field to leave the strategies unchanged. The list must name at least one
   * strategy. You can't remove every strategy from a space with
   * <code>UpdateSpace</code>.</p> <p>The serialized list can be at most 384 KiB.</p>
   */
  inline const Aws::Vector<MemoryStrategy>& GetMemoryStrategies() const { return m_memoryStrategies; }
  inline bool MemoryStrategiesHasBeenSet() const { return m_memoryStrategiesHasBeenSet; }
  template <typename MemoryStrategiesT = Aws::Vector<MemoryStrategy>>
  void SetMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies = std::forward<MemoryStrategiesT>(value);
  }
  template <typename MemoryStrategiesT = Aws::Vector<MemoryStrategy>>
  UpdateSpaceRequest& WithMemoryStrategies(MemoryStrategiesT&& value) {
    SetMemoryStrategies(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  template <typename MemoryStrategiesT = MemoryStrategy>
  UpdateSpaceRequest& AddMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies.emplace_back(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many days the space keeps each event, from 1 to 365. Omit it to leave the
   * current value unchanged. Events already stored keep the expiry they were written
   * with.</p>
   */
  inline int GetEventExpiryDays() const { return m_eventExpiryDays; }
  inline bool EventExpiryDaysHasBeenSet() const { return m_eventExpiryDaysHasBeenSet; }
  inline void SetEventExpiryDays(int value) {
    m_eventExpiryDaysHasBeenSet = true;
    m_eventExpiryDays = value;
  }
  inline UpdateSpaceRequest& WithEventExpiryDays(int value) {
    SetEventExpiryDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many days the space keeps each memory, from 0 to 3650. 0 means memories
   * never expire. Omit it to leave the current value unchanged. You can't clear the
   * setting. To make memories written from then on never expire, send 0.
   * <code>GetSpace</code> then returns 0.</p> <p>A change applies to memories
   * written after it. Memories already stored keep the expiry they were written
   * with. A memory the service rewrites later, such as a summary it keeps up to
   * date, takes the setting in force at that rewrite. A change moves the space to
   * <code>UPDATING</code>. Sending the value that the space has stored doesn't.</p>
   */
  inline int GetMemoryExpiryDays() const { return m_memoryExpiryDays; }
  inline bool MemoryExpiryDaysHasBeenSet() const { return m_memoryExpiryDaysHasBeenSet; }
  inline void SetMemoryExpiryDays(int value) {
    m_memoryExpiryDaysHasBeenSet = true;
    m_memoryExpiryDays = value;
  }
  inline UpdateSpaceRequest& WithMemoryExpiryDays(int value) {
    SetMemoryExpiryDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model that extracts and consolidates memories for every strategy in the
   * space: <code>anthropic.claude-opus-5-5</code> or
   * <code>anthropic.claude-haiku-5-5</code>. Omit it to leave the current value
   * unchanged. Once set, it can't be cleared back to the service default.</p>
   */
  inline const Aws::String& GetExtractionModelId() const { return m_extractionModelId; }
  inline bool ExtractionModelIdHasBeenSet() const { return m_extractionModelIdHasBeenSet; }
  template <typename ExtractionModelIdT = Aws::String>
  void SetExtractionModelId(ExtractionModelIdT&& value) {
    m_extractionModelIdHasBeenSet = true;
    m_extractionModelId = std::forward<ExtractionModelIdT>(value);
  }
  template <typename ExtractionModelIdT = Aws::String>
  UpdateSpaceRequest& WithExtractionModelId(ExtractionModelIdT&& value) {
    SetExtractionModelId(std::forward<ExtractionModelIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::Vector<MemoryStrategy> m_memoryStrategies;

  int m_eventExpiryDays{0};

  int m_memoryExpiryDays{0};

  Aws::String m_extractionModelId;
  bool m_spaceIdHasBeenSet = false;
  bool m_memoryStrategiesHasBeenSet = false;
  bool m_eventExpiryDaysHasBeenSet = false;
  bool m_memoryExpiryDaysHasBeenSet = false;
  bool m_extractionModelIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
