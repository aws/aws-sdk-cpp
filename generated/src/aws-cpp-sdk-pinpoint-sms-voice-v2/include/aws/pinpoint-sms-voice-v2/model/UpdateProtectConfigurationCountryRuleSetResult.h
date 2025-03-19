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
  class UpdateProtectConfigurationCountryRuleSetResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API UpdateProtectConfigurationCountryRuleSetResult() = default;
    AWS_PINPOINTSMSVOICEV2_API UpdateProtectConfigurationCountryRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API UpdateProtectConfigurationCountryRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const { return m_protectConfigurationArn; }
    template<typename ProtectConfigurationArnT = Aws::String>
    void SetProtectConfigurationArn(ProtectConfigurationArnT&& value) { m_protectConfigurationArnHasBeenSet = true; m_protectConfigurationArn = std::forward<ProtectConfigurationArnT>(value); }
    template<typename ProtectConfigurationArnT = Aws::String>
    UpdateProtectConfigurationCountryRuleSetResult& WithProtectConfigurationArn(ProtectConfigurationArnT&& value) { SetProtectConfigurationArn(std::forward<ProtectConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const { return m_protectConfigurationId; }
    template<typename ProtectConfigurationIdT = Aws::String>
    void SetProtectConfigurationId(ProtectConfigurationIdT&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::forward<ProtectConfigurationIdT>(value); }
    template<typename ProtectConfigurationIdT = Aws::String>
    UpdateProtectConfigurationCountryRuleSetResult& WithProtectConfigurationId(ProtectConfigurationIdT&& value) { SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number capability that was updated</p>
     */
    inline NumberCapability GetNumberCapability() const { return m_numberCapability; }
    inline void SetNumberCapability(NumberCapability value) { m_numberCapabilityHasBeenSet = true; m_numberCapability = value; }
    inline UpdateProtectConfigurationCountryRuleSetResult& WithNumberCapability(NumberCapability value) { SetNumberCapability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of ProtectConfigurationCountryRuleSetInformation containing the
     * rules for the NumberCapability.</p>
     */
    inline const Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>& GetCountryRuleSet() const { return m_countryRuleSet; }
    template<typename CountryRuleSetT = Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>>
    void SetCountryRuleSet(CountryRuleSetT&& value) { m_countryRuleSetHasBeenSet = true; m_countryRuleSet = std::forward<CountryRuleSetT>(value); }
    template<typename CountryRuleSetT = Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation>>
    UpdateProtectConfigurationCountryRuleSetResult& WithCountryRuleSet(CountryRuleSetT&& value) { SetCountryRuleSet(std::forward<CountryRuleSetT>(value)); return *this;}
    template<typename CountryRuleSetKeyT = Aws::String, typename CountryRuleSetValueT = ProtectConfigurationCountryRuleSetInformation>
    UpdateProtectConfigurationCountryRuleSetResult& AddCountryRuleSet(CountryRuleSetKeyT&& key, CountryRuleSetValueT&& value) {
      m_countryRuleSetHasBeenSet = true; m_countryRuleSet.emplace(std::forward<CountryRuleSetKeyT>(key), std::forward<CountryRuleSetValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateProtectConfigurationCountryRuleSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationArn;
    bool m_protectConfigurationArnHasBeenSet = false;

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    NumberCapability m_numberCapability{NumberCapability::NOT_SET};
    bool m_numberCapabilityHasBeenSet = false;

    Aws::Map<Aws::String, ProtectConfigurationCountryRuleSetInformation> m_countryRuleSet;
    bool m_countryRuleSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
