/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>System-generated provenance for a memory or event: the owning actor and
 * session, and the creation and last-update timestamps.
 * <code>SearchMemories</code>, <code>SearchEvents</code>,
 * <code>ListMemories</code>, and <code>GetMemory</code> return the same block.</p>
 * <p> <code>ListMemories</code> and <code>GetMemory</code> always return
 * <code>createdAt</code> and <code>updatedAt</code>. The search operations return
 * what is recorded and omit the block when nothing is.</p> <p>In a query, the
 * timestamps are <code>system_metadata.created_at</code> and
 * <code>system_metadata.updated_at</code>. Scope by owner with the top-level
 * parameters (<code>actorId</code> on the search operations, <code>actorIds</code>
 * on <code>ListMemories</code>) and <code>sessionIds</code>
 * (<code>SearchEvents</code> and <code>ListMemories</code>). The search operations
 * reject actor and session fields inside the query or sort.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/SystemMetadata">AWS
 * API Reference</a></p>
 */
class SystemMetadata {
 public:
  AWS_OPENSEARCHMEMORY_API SystemMetadata() = default;
  AWS_OPENSEARCHMEMORY_API SystemMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API SystemMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The owning actor. Absent when none was recorded.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  SystemMetadata& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The owning session. Absent when none was recorded.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SystemMetadata& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the record was created. Always present on <code>ListMemories</code> and
   * <code>GetMemory</code>. It can be absent from search results.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SystemMetadata& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the record was last updated. Equals <code>createdAt</code> for a record
   * that has never been updated, and always for a <code>SearchEvents</code>
   * result.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SystemMetadata& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_actorId;

  Aws::String m_sessionId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_actorIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
