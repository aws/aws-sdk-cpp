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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DeleteProtectConfigurationRuleSetNumberOverrideResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteProtectConfigurationRuleSetNumberOverrideResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DeleteProtectConfigurationRuleSetNumberOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteProtectConfigurationRuleSetNumberOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const { return m_protectConfigurationArn; }
    template<typename ProtectConfigurationArnT = Aws::String>
    void SetProtectConfigurationArn(ProtectConfigurationArnT&& value) { m_protectConfigurationArnHasBeenSet = true; m_protectConfigurationArn = std::forward<ProtectConfigurationArnT>(value); }
    template<typename ProtectConfigurationArnT = Aws::String>
    DeleteProtectConfigurationRuleSetNumberOverrideResult& WithProtectConfigurationArn(ProtectConfigurationArnT&& value) { SetProtectConfigurationArn(std::forward<ProtectConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const { return m_protectConfigurationId; }
    template<typename ProtectConfigurationIdT = Aws::String>
    void SetProtectConfigurationId(ProtectConfigurationIdT&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::forward<ProtectConfigurationIdT>(value); }
    template<typename ProtectConfigurationIdT = Aws::String>
    DeleteProtectConfigurationRuleSetNumberOverrideResult& WithProtectConfigurationId(ProtectConfigurationIdT&& value) { SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    DeleteProtectConfigurationRuleSetNumberOverrideResult& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the rule was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    DeleteProtectConfigurationRuleSetNumberOverrideResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action associated with the rule.</p>
     */
    inline ProtectConfigurationRuleOverrideAction GetAction() const { return m_action; }
    inline void SetAction(ProtectConfigurationRuleOverrideAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithAction(ProtectConfigurationRuleOverrideAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    DeleteProtectConfigurationRuleSetNumberOverrideResult& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the resource-based policy was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const { return m_expirationTimestamp; }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    void SetExpirationTimestamp(ExpirationTimestampT&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::forward<ExpirationTimestampT>(value); }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    DeleteProtectConfigurationRuleSetNumberOverrideResult& WithExpirationTimestamp(ExpirationTimestampT&& value) { SetExpirationTimestamp(std::forward<ExpirationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteProtectConfigurationRuleSetNumberOverrideResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationArn;
    bool m_protectConfigurationArnHasBeenSet = false;

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
