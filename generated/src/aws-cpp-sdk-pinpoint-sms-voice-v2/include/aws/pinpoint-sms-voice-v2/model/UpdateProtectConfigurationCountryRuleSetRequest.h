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
    AWS_PINPOINTSMSVOICEV2_API UpdateProtectConfigurationCountryRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProtectConfigurationCountryRuleSet"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = value; }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::move(value); }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId.assign(value); }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}


    /**
     * <p>The number capability to apply the CountryRuleSetUpdates updates to.</p>
     */
    inline const NumberCapability& GetNumberCapability() const{ return m_numberCapability; }

    /**
     * <p>The number capability to apply the CountryRuleSetUpdates updates to.</p>
     */
    inline bool NumberCapabilityHasBeenSet() const { return m_numberCapabilityHasBeenSet; }

    /**
     * <p>The number capability to apply the CountryRuleSetUpdates updates to.</p>
     */
    inline void SetNumberCapability(const NumberCapability& value) { m_numberCapabilityHasBeenSet = true; m_numberCapability = value; }

    /**
     * <p>The number capability to apply the CountryRuleSetUpdates updates to.</p>
     */
    inline void SetNumberCapability(NumberCapability&& value) { m_numberCapabilityHasBeenSet = true; m_numberCapability = std::move(value); }

    /**
     * <p>The number capability to apply the CountryRuleSetUpdates updates to.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& WithNumberCapability(const NumberCapability& value) { SetNumberCapability(value); return *this;}

    /**
     * <p>The number capability to apply the CountryRuleSetUpdates updates to.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& WithNumberCapability(NumberCapability&& value) { SetNumberCapability(std::move(value)); return *this;}


    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline const Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>& GetCountryRuleSetUpdates() const{ return m_countryRuleSetUpdates; }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline bool CountryRuleSetUpdatesHasBeenSet() const { return m_countryRuleSetUpdatesHasBeenSet; }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline void SetCountryRuleSetUpdates(const Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates = value; }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline void SetCountryRuleSetUpdates(Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>&& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates = std::move(value); }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& WithCountryRuleSetUpdates(const Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>& value) { SetCountryRuleSetUpdates(value); return *this;}

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& WithCountryRuleSetUpdates(Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>&& value) { SetCountryRuleSetUpdates(std::move(value)); return *this;}

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& AddCountryRuleSetUpdates(const Aws::String& key, const ProtectConfigurationCountryRuleSetInformation& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates.emplace(key, value); return *this; }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& AddCountryRuleSetUpdates(Aws::String&& key, const ProtectConfigurationCountryRuleSetInformation& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& AddCountryRuleSetUpdates(const Aws::String& key, ProtectConfigurationCountryRuleSetInformation&& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& AddCountryRuleSetUpdates(Aws::String&& key, ProtectConfigurationCountryRuleSetInformation&& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& AddCountryRuleSetUpdates(const char* key, ProtectConfigurationCountryRuleSetInformation&& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the Amazon Pinpoint SMS user
     * guide.</p>
     */
    inline UpdateProtectConfigurationCountryRuleSetRequest& AddCountryRuleSetUpdates(const char* key, const ProtectConfigurationCountryRuleSetInformation& value) { m_countryRuleSetUpdatesHasBeenSet = true; m_countryRuleSetUpdates.emplace(key, value); return *this; }

  private:

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    NumberCapability m_numberCapability;
    bool m_numberCapabilityHasBeenSet = false;

    Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation> m_countryRuleSetUpdates;
    bool m_countryRuleSetUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
