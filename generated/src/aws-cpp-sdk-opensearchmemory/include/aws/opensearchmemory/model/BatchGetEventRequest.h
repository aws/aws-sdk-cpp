/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class BatchGetEventRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API BatchGetEventRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetEvent"; }

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
  BatchGetEventRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actor that every requested event must belong to. Omit it to skip this
   * check. The operation reports an event that doesn't match in <code>errors</code>
   * as <code>RESOURCE_NOT_FOUND</code>.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  BatchGetEventRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session that every requested event must belong to. Omit it to skip this
   * check. The operation reports an event that doesn't match in <code>errors</code>
   * as <code>RESOURCE_NOT_FOUND</code>.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  BatchGetEventRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the events to get: 1 to 10, without duplicates.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEventIds() const { return m_eventIds; }
  inline bool EventIdsHasBeenSet() const { return m_eventIdsHasBeenSet; }
  template <typename EventIdsT = Aws::Vector<Aws::String>>
  void SetEventIds(EventIdsT&& value) {
    m_eventIdsHasBeenSet = true;
    m_eventIds = std::forward<EventIdsT>(value);
  }
  template <typename EventIdsT = Aws::Vector<Aws::String>>
  BatchGetEventRequest& WithEventIds(EventIdsT&& value) {
    SetEventIds(std::forward<EventIdsT>(value));
    return *this;
  }
  template <typename EventIdsT = Aws::String>
  BatchGetEventRequest& AddEventIds(EventIdsT&& value) {
    m_eventIdsHasBeenSet = true;
    m_eventIds.emplace_back(std::forward<EventIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_actorId;

  Aws::String m_sessionId;

  Aws::Vector<Aws::String> m_eventIds;
  bool m_spaceIdHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_eventIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
