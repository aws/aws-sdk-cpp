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
    AWS_PINPOINTSMSVOICEV2_API DeleteProtectConfigurationRuleSetNumberOverrideResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteProtectConfigurationRuleSetNumberOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteProtectConfigurationRuleSetNumberOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const{ return m_protectConfigurationArn; }
    inline void SetProtectConfigurationArn(const Aws::String& value) { m_protectConfigurationArn = value; }
    inline void SetProtectConfigurationArn(Aws::String&& value) { m_protectConfigurationArn = std::move(value); }
    inline void SetProtectConfigurationArn(const char* value) { m_protectConfigurationArn.assign(value); }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithProtectConfigurationArn(const Aws::String& value) { SetProtectConfigurationArn(value); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithProtectConfigurationArn(Aws::String&& value) { SetProtectConfigurationArn(std::move(value)); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithProtectConfigurationArn(const char* value) { SetProtectConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationId = value; }
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationId = std::move(value); }
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationId.assign(value); }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumber = value; }
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumber = std::move(value); }
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumber.assign(value); }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the rule was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action associated with the rule.</p>
     */
    inline const ProtectConfigurationRuleOverrideAction& GetAction() const{ return m_action; }
    inline void SetAction(const ProtectConfigurationRuleOverrideAction& value) { m_action = value; }
    inline void SetAction(ProtectConfigurationRuleOverrideAction&& value) { m_action = std::move(value); }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithAction(const ProtectConfigurationRuleOverrideAction& value) { SetAction(value); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithAction(ProtectConfigurationRuleOverrideAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCode.assign(value); }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the resource-based policy was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const{ return m_expirationTimestamp; }
    inline void SetExpirationTimestamp(const Aws::Utils::DateTime& value) { m_expirationTimestamp = value; }
    inline void SetExpirationTimestamp(Aws::Utils::DateTime&& value) { m_expirationTimestamp = std::move(value); }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithExpirationTimestamp(const Aws::Utils::DateTime& value) { SetExpirationTimestamp(value); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithExpirationTimestamp(Aws::Utils::DateTime&& value) { SetExpirationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteProtectConfigurationRuleSetNumberOverrideResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationArn;

    Aws::String m_protectConfigurationId;

    Aws::String m_destinationPhoneNumber;

    Aws::Utils::DateTime m_createdTimestamp;

    ProtectConfigurationRuleOverrideAction m_action;

    Aws::String m_isoCountryCode;

    Aws::Utils::DateTime m_expirationTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
