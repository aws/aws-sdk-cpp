/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>A summary of an event, as returned by <code>ListEvents</code>. It doesn't
 * include the payload.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/EventSummary">AWS
 * API Reference</a></p>
 */
class EventSummary {
 public:
  AWS_OPENSEARCHMEMORY_API EventSummary() = default;
  AWS_OPENSEARCHMEMORY_API EventSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API EventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The event's ID.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  EventSummary& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event's metadata tags, as supplied to <code>CreateEvent</code>. May be
   * empty.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  EventSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  EventSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the event occurred.</p>
   */
  inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
  inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  void SetEventTimestamp(EventTimestampT&& value) {
    m_eventTimestampHasBeenSet = true;
    m_eventTimestamp = std::forward<EventTimestampT>(value);
  }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  EventSummary& WithEventTimestamp(EventTimestampT&& value) {
    SetEventTimestamp(std::forward<EventTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::Utils::DateTime m_eventTimestamp{};
  bool m_eventIdHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_eventTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
