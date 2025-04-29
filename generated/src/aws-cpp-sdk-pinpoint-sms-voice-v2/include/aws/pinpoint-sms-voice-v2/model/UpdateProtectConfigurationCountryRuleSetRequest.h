/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationCountryRuleSetInformation.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class UpdateProtectConfigurationCountryRuleSetRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API UpdateProtectConfigurationCountryRuleSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProtectConfigurationCountryRuleSet"; }

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
    UpdateProtectConfigurationCountryRuleSetRequest& WithProtectConfigurationId(ProtectConfigurationIdT&& value) { SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number capability to apply the CountryRuleSetUpdates updates to.</p>
     */
    inline NumberCapability GetNumberCapability() const { return m_numberCapability; }
    inline bool NumberCapabilityHasBeenSet() const { return m_numberCapabilityHasBeenSet; }
    inline void SetNumberCapability(NumberCapability value) { m_numberCapabilityHasBeenSet = true; m_numberCapability = value; }
    inline UpdateProtectConfigurationCountryRuleSetRequest& WithNumberCapability(NumberCapability value) { SetNumberCapability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the AWS End User Messaging SMS User
     * Guide.</p> <p>For example, to set the United States as allowed and Canada as
     * blocked, the <code>CountryRuleSetUpdates</code> would be formatted as:
     * <code>"CountryRuleSetUpdates": { "US" : { "ProtectStatus": "ALLOW" } "CA" : {
     * "ProtectStatus": "BLOCK" } }</code> </p>
     */
    inline const Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>& GetCountryRuleSetUpdates() const { return m_countryRuleSetUpdates; }
    inline bool CountryRuleSetUpdatesHasBeenSet() const { return m_countryRuleSetUpdatesHasBeenSet; }
    template<typename CountryRuleSetUpdatesT = Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>>
    void SetCountryRuleSetUpdates(CountryRuleSetUpdatesT&& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates = std::forward<CountryRuleSetUpdatesT>(value); }
    template<typename CountryRuleSetUpdatesT = Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>>
    UpdateProtectConfigurationCountryRuleSetRequest& WithCountryRuleSetUpdates(CountryRuleSetUpdatesT&& value) { SetCountryRuleSetUpdates(std::forward<CountryRuleSetUpdatesT>(value)); return *this;}
    template<typename CountryRuleSetUpdatesKeyT = Aws::String, typename CountryRuleSetUpdatesValueT = ProtectConfigurationCountryRuleSetInformation>
    UpdateProtectConfigurationCountryRuleSetRequest& AddCountryRuleSetUpdates(CountryRuleSetUpdatesKeyT&& key, CountryRuleSetUpdatesValueT&& value) {
      m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates.emplace(std::forward<CountryRuleSetUpdatesKeyT>(key), std::forward<CountryRuleSetUpdatesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    NumberCapability m_numberCapability{NumberCapability::NOT_SET};
    bool m_numberCapabilityHasBeenSet = false;

    Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation> m_countryRuleSetUpdates;
    bool m_countryRuleSetUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
