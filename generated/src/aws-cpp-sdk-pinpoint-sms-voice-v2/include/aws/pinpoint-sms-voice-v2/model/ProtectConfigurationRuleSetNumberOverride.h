/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationRuleOverrideAction.h>
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
   * <p>Provides details on a RuleSetNumberOverride.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ProtectConfigurationRuleSetNumberOverride">AWS
   * API Reference</a></p>
   */
  class ProtectConfigurationRuleSetNumberOverride
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationRuleSetNumberOverride();
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationRuleSetNumberOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationRuleSetNumberOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }
    inline ProtectConfigurationRuleSetNumberOverride& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}
    inline ProtectConfigurationRuleSetNumberOverride& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}
    inline ProtectConfigurationRuleSetNumberOverride& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the rule was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ProtectConfigurationRuleSetNumberOverride& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ProtectConfigurationRuleSetNumberOverride& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action for the rule to perform of either blocking or allowing messages to
     * the destination phone number.</p>
     */
    inline const ProtectConfigurationRuleOverrideAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ProtectConfigurationRuleOverrideAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ProtectConfigurationRuleOverrideAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline ProtectConfigurationRuleSetNumberOverride& WithAction(const ProtectConfigurationRuleOverrideAction& value) { SetAction(value); return *this;}
    inline ProtectConfigurationRuleSetNumberOverride& WithAction(ProtectConfigurationRuleOverrideAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }
    inline ProtectConfigurationRuleSetNumberOverride& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline ProtectConfigurationRuleSetNumberOverride& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline ProtectConfigurationRuleSetNumberOverride& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the rule will expire at. If <code>ExpirationTimestamp</code> is not
     * set then the rule will not expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const{ return m_expirationTimestamp; }
    inline bool ExpirationTimestampHasBeenSet() const { return m_expirationTimestampHasBeenSet; }
    inline void SetExpirationTimestamp(const Aws::Utils::DateTime& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = value; }
    inline void SetExpirationTimestamp(Aws::Utils::DateTime&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::move(value); }
    inline ProtectConfigurationRuleSetNumberOverride& WithExpirationTimestamp(const Aws::Utils::DateTime& value) { SetExpirationTimestamp(value); return *this;}
    inline ProtectConfigurationRuleSetNumberOverride& WithExpirationTimestamp(Aws::Utils::DateTime&& value) { SetExpirationTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    ProtectConfigurationRuleOverrideAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTimestamp;
    bool m_expirationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
