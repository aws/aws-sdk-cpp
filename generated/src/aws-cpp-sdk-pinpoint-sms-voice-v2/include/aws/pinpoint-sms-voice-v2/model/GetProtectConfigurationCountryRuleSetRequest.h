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
    AWS_PINPOINTSMSVOICEV2_API GetProtectConfigurationCountryRuleSetRequest();

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
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = value; }
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::move(value); }
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId.assign(value); }
    inline GetProtectConfigurationCountryRuleSetRequest& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}
    inline GetProtectConfigurationCountryRuleSetRequest& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}
    inline GetProtectConfigurationCountryRuleSetRequest& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capability type to return the CountryRuleSet for. Valid values are
     * <code>SMS</code>, <code>VOICE</code>, or <code>MMS</code>.</p>
     */
    inline const NumberCapability& GetNumberCapability() const{ return m_numberCapability; }
    inline bool NumberCapabilityHasBeenSet() const { return m_numberCapabilityHasBeenSet; }
    inline void SetNumberCapability(const NumberCapability& value) { m_numberCapabilityHasBeenSet = true; m_numberCapability = value; }
    inline void SetNumberCapability(NumberCapability&& value) { m_numberCapabilityHasBeenSet = true; m_numberCapability = std::move(value); }
    inline GetProtectConfigurationCountryRuleSetRequest& WithNumberCapability(const NumberCapability& value) { SetNumberCapability(value); return *this;}
    inline GetProtectConfigurationCountryRuleSetRequest& WithNumberCapability(NumberCapability&& value) { SetNumberCapability(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    NumberCapability m_numberCapability;
    bool m_numberCapabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
