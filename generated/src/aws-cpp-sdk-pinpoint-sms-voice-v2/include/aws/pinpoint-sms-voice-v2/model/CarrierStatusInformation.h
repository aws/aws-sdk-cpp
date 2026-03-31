/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/CarrierStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>Contains carrier-level launch status details for an RCS agent within a
 * country.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CarrierStatusInformation">AWS
 * API Reference</a></p>
 */
class CarrierStatusInformation {
 public:
  AWS_PINPOINTSMSVOICEV2_API CarrierStatusInformation() = default;
  AWS_PINPOINTSMSVOICEV2_API CarrierStatusInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API CarrierStatusInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the carrier.</p>
   */
  inline const Aws::String& GetCarrierName() const { return m_carrierName; }
  inline bool CarrierNameHasBeenSet() const { return m_carrierNameHasBeenSet; }
  template <typename CarrierNameT = Aws::String>
  void SetCarrierName(CarrierNameT&& value) {
    m_carrierNameHasBeenSet = true;
    m_carrierName = std::forward<CarrierNameT>(value);
  }
  template <typename CarrierNameT = Aws::String>
  CarrierStatusInformation& WithCarrierName(CarrierNameT&& value) {
    SetCarrierName(std::forward<CarrierNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The launch status for this carrier.</p>
   */
  inline CarrierStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CarrierStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CarrierStatusInformation& WithStatus(CarrierStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_carrierName;

  CarrierStatus m_status{CarrierStatus::NOT_SET};
  bool m_carrierNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
