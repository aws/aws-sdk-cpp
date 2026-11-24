/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>A reference to an event actor that is associated with an API security
 * event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/EventActorReference">AWS
 * API Reference</a></p>
 */
class EventActorReference {
 public:
  AWS_WAFV2_API EventActorReference() = default;
  AWS_WAFV2_API EventActorReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API EventActorReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the event actor. You provide this to
   * <a>GetEventActor</a> to retrieve the details of the event actor.</p>
   */
  inline const Aws::String& GetEventActorId() const { return m_eventActorId; }
  inline bool EventActorIdHasBeenSet() const { return m_eventActorIdHasBeenSet; }
  template <typename EventActorIdT = Aws::String>
  void SetEventActorId(EventActorIdT&& value) {
    m_eventActorIdHasBeenSet = true;
    m_eventActorId = std::forward<EventActorIdT>(value);
  }
  template <typename EventActorIdT = Aws::String>
  EventActorReference& WithEventActorId(EventActorIdT&& value) {
    SetEventActorId(std::forward<EventActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The observed identifier of the event actor. For example, a client IP address
   * or an authentication fingerprint.</p>
   */
  inline const Aws::String& GetEventActorValue() const { return m_eventActorValue; }
  inline bool EventActorValueHasBeenSet() const { return m_eventActorValueHasBeenSet; }
  template <typename EventActorValueT = Aws::String>
  void SetEventActorValue(EventActorValueT&& value) {
    m_eventActorValueHasBeenSet = true;
    m_eventActorValue = std::forward<EventActorValueT>(value);
  }
  template <typename EventActorValueT = Aws::String>
  EventActorReference& WithEventActorValue(EventActorValueT&& value) {
    SetEventActorValue(std::forward<EventActorValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventActorId;

  Aws::String m_eventActorValue;
  bool m_eventActorIdHasBeenSet = false;
  bool m_eventActorValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
