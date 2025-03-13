/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class GetProtectConfigurationCountryRuleSetRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API GetProtectConfigurationCountryRuleSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProtectConfigurationCountryRuleSet"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const { return m_protectConfigurationId; }
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
    template<typename ProtectConfigurationIdT = Aws::String>
    void SetProtectConfigurationId(ProtectConfigurationIdT&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::forward<ProtectConfigurationIdT>(value); }
    template<typename ProtectConfigurationIdT = Aws::String>
    GetProtectConfigurationCountryRuleSetRequest& WithProtectConfigurationId(ProtectConfigurationIdT&& value) { SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capability type to return the CountryRuleSet for. Valid values are
     * <code>SMS</code>, <code>VOICE</code>, or <code>MMS</code>.</p>
     */
    inline NumberCapability GetNumberCapability() const { return m_numberCapability; }
    inline bool NumberCapabilityHasBeenSet() const { return m_numberCapabilityHasBeenSet; }
    inline void SetNumberCapability(NumberCapability value) { m_numberCapabilityHasBeenSet = true; m_numberCapability = value; }
    inline GetProtectConfigurationCountryRuleSetRequest& WithNumberCapability(NumberCapability value) { SetNumberCapability(value); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    NumberCapability m_numberCapability{NumberCapability::NOT_SET};
    bool m_numberCapabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
