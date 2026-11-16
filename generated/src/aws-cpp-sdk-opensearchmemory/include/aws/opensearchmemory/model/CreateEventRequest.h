/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/EventPayload.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class CreateEventRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API CreateEventRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateEvent"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_OPENSEARCHMEMORY_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ID of the space that owns the event, for example
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
  CreateEventRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the actor (end user or agent) that the event belongs to.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  CreateEventRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session the event belongs to. Send every event of one conversation with
   * the same session ID, so that <code>SUMMARY</code> strategies summarize the
   * conversation as one session. If you omit it, the service generates a session ID
   * and returns it.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  CreateEventRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the event occurred. The default is the time that the service receives
   * the request.</p>
   */
  inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
  inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  void SetEventTimestamp(EventTimestampT&& value) {
    m_eventTimestampHasBeenSet = true;
    m_eventTimestamp = std::forward<EventTimestampT>(value);
  }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  CreateEventRequest& WithEventTimestamp(EventTimestampT&& value) {
    SetEventTimestamp(std::forward<EventTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event content. Set exactly one union member.</p>
   */
  inline const EventPayload& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = EventPayload>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = EventPayload>
  CreateEventRequest& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata tags to store with the event. Memories derived from the event carry
   * the same tags. Keys that begin with <code>x-amz-</code>, the keys
   * <code>documentS3Source</code> and <code>documentS3Url</code>, and other keys
   * that the service uses internally are reserved: a request that sets one fails
   * with <code>ValidationException</code>, and the message names the key.</p> <p>A
   * space can use at most 50 distinct metadata keys across all of its events and
   * memories. A request that would add a key beyond that fails with
   * <code>ValidationException</code>. Reuse an existing key instead.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  CreateEventRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  CreateEventRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that makes the request idempotent. Within
   * 2 hours of the first request, a retry with the same token and the same request,
   * including the same <code>sessionId</code>, returns the same event. If you omit
   * <code>sessionId</code>, the service generates a new one on each attempt, so a
   * retry fails with <code>ConflictException</code>. Reusing the token with
   * different request content also fails with <code>ConflictException</code>.
   * <code>eventTimestamp</code> isn't compared. After 2 hours, the token starts a
   * new event.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateEventRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to extract memories from this event. The default is
   * <code>true</code>. Set it to <code>false</code> to store the event without
   * extraction: the service skips strategies that infer memories, and still indexes
   * the event's turns for <code>SearchEvents</code>. A document submitted as a
   * <code>blob</code> is still extracted.</p>
   */
  inline bool GetInfer() const { return m_infer; }
  inline bool InferHasBeenSet() const { return m_inferHasBeenSet; }
  inline void SetInfer(bool value) {
    m_inferHasBeenSet = true;
    m_infer = value;
  }
  inline CreateEventRequest& WithInfer(bool value) {
    SetInfer(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_actorId;

  Aws::String m_sessionId;

  Aws::Utils::DateTime m_eventTimestamp{};

  EventPayload m_payload;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_infer{false};
  bool m_spaceIdHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_eventTimestampHasBeenSet = false;
  bool m_payloadHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_inferHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
