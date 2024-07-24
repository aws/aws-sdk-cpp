/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationCountryRuleSetInformation.h>
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
  class GetProtectConfigurationCountryRuleSetResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API GetProtectConfigurationCountryRuleSetResult();
    AWS_PINPOINTSMSVOICEV2_API GetProtectConfigurationCountryRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API GetProtectConfigurationCountryRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const{ return m_protectConfigurationArn; }
    inline void SetProtectConfigurationArn(const Aws::String& value) { m_protectConfigurationArn = value; }
    inline void SetProtectConfigurationArn(Aws::String&& value) { m_protectConfigurationArn = std::move(value); }
    inline void SetProtectConfigurationArn(const char* value) { m_protectConfigurationArn.assign(value); }
    inline GetProtectConfigurationCountryRuleSetResult& WithProtectConfigurationArn(const Aws::String& value) { SetProtectConfigurationArn(value); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& WithProtectConfigurationArn(Aws::String&& value) { SetProtectConfigurationArn(std::move(value)); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& WithProtectConfigurationArn(const char* value) { SetProtectConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationId = value; }
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationId = std::move(value); }
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationId.assign(value); }
    inline GetProtectConfigurationCountryRuleSetResult& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capability type associated with the returned
     * ProtectConfigurationCountryRuleSetInformation objects.</p>
     */
    inline const NumberCapability& GetNumberCapability() const{ return m_numberCapability; }
    inline void SetNumberCapability(const NumberCapability& value) { m_numberCapability = value; }
    inline void SetNumberCapability(NumberCapability&& value) { m_numberCapability = std::move(value); }
    inline GetProtectConfigurationCountryRuleSetResult& WithNumberCapability(const NumberCapability& value) { SetNumberCapability(value); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& WithNumberCapability(NumberCapability&& value) { SetNumberCapability(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of ProtectConfigurationCountryRuleSetInformation objects that contain
     * the details for the requested NumberCapability. The Key is the two-letter ISO
     * country code. For a list of supported ISO country codes, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
     * countries and regions (SMS channel)</a> in the AWS End User Messaging SMS User
     * Guide.</p>
     */
    inline const Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>& GetCountryRuleSet() const{ return m_countryRuleSet; }
    inline void SetCountryRuleSet(const Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>& value) { m_countryRuleSet = value; }
    inline void SetCountryRuleSet(Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>&& value) { m_countryRuleSet = std::move(value); }
    inline GetProtectConfigurationCountryRuleSetResult& WithCountryRuleSet(const Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>& value) { SetCountryRuleSet(value); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& WithCountryRuleSet(Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>&& value) { SetCountryRuleSet(std::move(value)); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& AddCountryRuleSet(const Aws::String& key, const ProtectConfigurationCountryRuleSetInformation& value) { m_countryRuleSet.emplace(key, value); return *this; }
    inline GetProtectConfigurationCountryRuleSetResult& AddCountryRuleSet(Aws::String&& key, const ProtectConfigurationCountryRuleSetInformation& value) { m_countryRuleSet.emplace(std::move(key), value); return *this; }
    inline GetProtectConfigurationCountryRuleSetResult& AddCountryRuleSet(const Aws::String& key, ProtectConfigurationCountryRuleSetInformation&& value) { m_countryRuleSet.emplace(key, std::move(value)); return *this; }
    inline GetProtectConfigurationCountryRuleSetResult& AddCountryRuleSet(Aws::String&& key, ProtectConfigurationCountryRuleSetInformation&& value) { m_countryRuleSet.emplace(std::move(key), std::move(value)); return *this; }
    inline GetProtectConfigurationCountryRuleSetResult& AddCountryRuleSet(const char* key, ProtectConfigurationCountryRuleSetInformation&& value) { m_countryRuleSet.emplace(key, std::move(value)); return *this; }
    inline GetProtectConfigurationCountryRuleSetResult& AddCountryRuleSet(const char* key, const ProtectConfigurationCountryRuleSetInformation& value) { m_countryRuleSet.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProtectConfigurationCountryRuleSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProtectConfigurationCountryRuleSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationArn;

    Aws::String m_protectConfigurationId;

    NumberCapability m_numberCapability;

    Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation> m_countryRuleSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
