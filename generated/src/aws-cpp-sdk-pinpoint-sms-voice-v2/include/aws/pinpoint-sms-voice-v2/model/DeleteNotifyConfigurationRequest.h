/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class DeleteNotifyConfigurationRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API DeleteNotifyConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteNotifyConfiguration"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of the notify configuration to delete. The
   * NotifyConfigurationId can be found using the <a>DescribeNotifyConfigurations</a>
   * operation.</p>
   */
  inline const Aws::String& GetNotifyConfigurationId() const { return m_notifyConfigurationId; }
  inline bool NotifyConfigurationIdHasBeenSet() const { return m_notifyConfigurationIdHasBeenSet; }
  template <typename NotifyConfigurationIdT = Aws::String>
  void SetNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    m_notifyConfigurationIdHasBeenSet = true;
    m_notifyConfigurationId = std::forward<NotifyConfigurationIdT>(value);
  }
  template <typename NotifyConfigurationIdT = Aws::String>
  DeleteNotifyConfigurationRequest& WithNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    SetNotifyConfigurationId(std::forward<NotifyConfigurationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyConfigurationId;
  bool m_notifyConfigurationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
