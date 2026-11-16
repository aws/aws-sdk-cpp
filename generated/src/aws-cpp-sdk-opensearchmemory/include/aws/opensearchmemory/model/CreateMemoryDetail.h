/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

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
 * <p>The memory as <code>CreateMemory</code> acknowledges it: its identifiers. The
 * memory isn't searchable yet when the call returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/CreateMemoryDetail">AWS
 * API Reference</a></p>
 */
class CreateMemoryDetail {
 public:
  AWS_OPENSEARCHMEMORY_API CreateMemoryDetail() = default;
  AWS_OPENSEARCHMEMORY_API CreateMemoryDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API CreateMemoryDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The final ID of the memory. Until the memory is indexed,
   * <code>GetMemory</code>, <code>UpdateMemory</code>, and <code>DeleteMemory</code>
   * return <code>ResourceNotFoundException</code> for it.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  CreateMemoryDetail& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

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
  CreateMemoryDetail& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the strategy the memory belongs to.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateMemoryDetail& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the actor the memory belongs to.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  CreateMemoryDetail& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the session the memory belongs to, including one the service
   * generated.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  CreateMemoryDetail& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_memoryId;

  Aws::String m_spaceId;

  Aws::String m_name;

  Aws::String m_actorId;

  Aws::String m_sessionId;
  bool m_memoryIdHasBeenSet = false;
  bool m_spaceIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
