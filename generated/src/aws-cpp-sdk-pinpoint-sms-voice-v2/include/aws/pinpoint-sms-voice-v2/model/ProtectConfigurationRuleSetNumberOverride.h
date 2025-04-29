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
   * <p>Provides details on phone number rule overrides for a protect
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ProtectConfigurationRuleSetNumberOverride">AWS
   * API Reference</a></p>
   */
  class ProtectConfigurationRuleSetNumberOverride
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationRuleSetNumberOverride() = default;
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationRuleSetNumberOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationRuleSetNumberOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    ProtectConfigurationRuleSetNumberOverride& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the rule was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ProtectConfigurationRuleSetNumberOverride& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action for the rule to perform of either blocking or allowing messages to
     * the destination phone number.</p>
     */
    inline ProtectConfigurationRuleOverrideAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ProtectConfigurationRuleOverrideAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline ProtectConfigurationRuleSetNumberOverride& WithAction(ProtectConfigurationRuleOverrideAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    ProtectConfigurationRuleSetNumberOverride& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the rule will expire at. If <code>ExpirationTimestamp</code> is not
     * set then the rule will not expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const { return m_expirationTimestamp; }
    inline bool ExpirationTimestampHasBeenSet() const { return m_expirationTimestampHasBeenSet; }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    void SetExpirationTimestamp(ExpirationTimestampT&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::forward<ExpirationTimestampT>(value); }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    ProtectConfigurationRuleSetNumberOverride& WithExpirationTimestamp(ExpirationTimestampT&& value) { SetExpirationTimestamp(std::forward<ExpirationTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    ProtectConfigurationRuleOverrideAction m_action{ProtectConfigurationRuleOverrideAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTimestamp{};
    bool m_expirationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
