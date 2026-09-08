/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/EventHoldDuration.h>
#include <aws/s3/model/ObjectLockEventHold.h>
#include <aws/s3/model/ObjectLockRetentionMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3 {
namespace Model {

/**
 * <p>A Retention configuration for an object.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ObjectLockRetention">AWS
 * API Reference</a></p>
 */
class ObjectLockRetention {
 public:
  AWS_S3_API ObjectLockRetention() = default;
  AWS_S3_API ObjectLockRetention(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3_API ObjectLockRetention& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>Indicates the Retention mode for the specified object.</p>
   */
  inline ObjectLockRetentionMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(ObjectLockRetentionMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline ObjectLockRetention& WithMode(ObjectLockRetentionMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date on which this Object Lock Retention will expire.</p>
   */
  inline const Aws::Utils::DateTime& GetRetainUntilDate() const { return m_retainUntilDate; }
  inline bool RetainUntilDateHasBeenSet() const { return m_retainUntilDateHasBeenSet; }
  template <typename RetainUntilDateT = Aws::Utils::DateTime>
  void SetRetainUntilDate(RetainUntilDateT&& value) {
    m_retainUntilDateHasBeenSet = true;
    m_retainUntilDate = std::forward<RetainUntilDateT>(value);
  }
  template <typename RetainUntilDateT = Aws::Utils::DateTime>
  ObjectLockRetention& WithRetainUntilDate(RetainUntilDateT&& value) {
    SetRetainUntilDate(std::forward<RetainUntilDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event hold status for the object. Set to <code>ON</code> to enable an
   * event hold or <code>OFF</code> to disable it.</p>
   */
  inline ObjectLockEventHold GetEventHold() const { return m_eventHold; }
  inline bool EventHoldHasBeenSet() const { return m_eventHoldHasBeenSet; }
  inline void SetEventHold(ObjectLockEventHold value) {
    m_eventHoldHasBeenSet = true;
    m_eventHold = value;
  }
  inline ObjectLockRetention& WithEventHold(ObjectLockEventHold value) {
    SetEventHold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event hold duration for the object. Specifies how long the object remains
   * protected after the event hold is released.</p>
   */
  inline const EventHoldDuration& GetEventHoldDuration() const { return m_eventHoldDuration; }
  inline bool EventHoldDurationHasBeenSet() const { return m_eventHoldDurationHasBeenSet; }
  template <typename EventHoldDurationT = EventHoldDuration>
  void SetEventHoldDuration(EventHoldDurationT&& value) {
    m_eventHoldDurationHasBeenSet = true;
    m_eventHoldDuration = std::forward<EventHoldDurationT>(value);
  }
  template <typename EventHoldDurationT = EventHoldDuration>
  ObjectLockRetention& WithEventHoldDuration(EventHoldDurationT&& value) {
    SetEventHoldDuration(std::forward<EventHoldDurationT>(value));
    return *this;
  }
  ///@}
 private:
  ObjectLockRetentionMode m_mode{ObjectLockRetentionMode::NOT_SET};

  Aws::Utils::DateTime m_retainUntilDate{};

  ObjectLockEventHold m_eventHold{ObjectLockEventHold::NOT_SET};

  EventHoldDuration m_eventHoldDuration;
  bool m_modeHasBeenSet = false;
  bool m_retainUntilDateHasBeenSet = false;
  bool m_eventHoldHasBeenSet = false;
  bool m_eventHoldDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
