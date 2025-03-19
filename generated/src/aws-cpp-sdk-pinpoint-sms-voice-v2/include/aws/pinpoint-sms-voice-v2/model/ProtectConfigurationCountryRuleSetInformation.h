/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The types of statuses that can be used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ProtectConfigurationCountryRuleSetInformation">AWS
   * API Reference</a></p>
   */
  class ProtectConfigurationCountryRuleSetInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationCountryRuleSetInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationCountryRuleSetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationCountryRuleSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The types of protection that can be used.</p>
     */
    inline ProtectStatus GetProtectStatus() const { return m_protectStatus; }
    inline bool ProtectStatusHasBeenSet() const { return m_protectStatusHasBeenSet; }
    inline void SetProtectStatus(ProtectStatus value) { m_protectStatusHasBeenSet = true; m_protectStatus = value; }
    inline ProtectConfigurationCountryRuleSetInformation& WithProtectStatus(ProtectStatus value) { SetProtectStatus(value); return *this;}
    ///@}
  private:

    ProtectStatus m_protectStatus{ProtectStatus::NOT_SET};
    bool m_protectStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
