/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/EventBridgeConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>Notification settings for a job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/NotificationConfiguration">AWS
 * API Reference</a></p>
 */
class NotificationConfiguration {
 public:
  AWS_TEXTRACT_API NotificationConfiguration() = default;
  AWS_TEXTRACT_API NotificationConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API NotificationConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Event bus settings.</p>
   */
  inline const EventBridgeConfiguration& GetEventBridgeConfiguration() const { return m_eventBridgeConfiguration; }
  inline bool EventBridgeConfigurationHasBeenSet() const { return m_eventBridgeConfigurationHasBeenSet; }
  template <typename EventBridgeConfigurationT = EventBridgeConfiguration>
  void SetEventBridgeConfiguration(EventBridgeConfigurationT&& value) {
    m_eventBridgeConfigurationHasBeenSet = true;
    m_eventBridgeConfiguration = std::forward<EventBridgeConfigurationT>(value);
  }
  template <typename EventBridgeConfigurationT = EventBridgeConfiguration>
  NotificationConfiguration& WithEventBridgeConfiguration(EventBridgeConfigurationT&& value) {
    SetEventBridgeConfiguration(std::forward<EventBridgeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EventBridgeConfiguration m_eventBridgeConfiguration;
  bool m_eventBridgeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
