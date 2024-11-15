/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationRuleSetNumberOverride.h>
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
  class ListProtectConfigurationRuleSetNumberOverridesResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ListProtectConfigurationRuleSetNumberOverridesResult();
    AWS_PINPOINTSMSVOICEV2_API ListProtectConfigurationRuleSetNumberOverridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API ListProtectConfigurationRuleSetNumberOverridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const{ return m_protectConfigurationArn; }
    inline void SetProtectConfigurationArn(const Aws::String& value) { m_protectConfigurationArn = value; }
    inline void SetProtectConfigurationArn(Aws::String&& value) { m_protectConfigurationArn = std::move(value); }
    inline void SetProtectConfigurationArn(const char* value) { m_protectConfigurationArn.assign(value); }
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithProtectConfigurationArn(const Aws::String& value) { SetProtectConfigurationArn(value); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithProtectConfigurationArn(Aws::String&& value) { SetProtectConfigurationArn(std::move(value)); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithProtectConfigurationArn(const char* value) { SetProtectConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationId = value; }
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationId = std::move(value); }
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationId.assign(value); }
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RuleSetNumberOverrides objects.</p>
     */
    inline const Aws::Vector<ProtectConfigurationRuleSetNumberOverride>& GetRuleSetNumberOverrides() const{ return m_ruleSetNumberOverrides; }
    inline void SetRuleSetNumberOverrides(const Aws::Vector<ProtectConfigurationRuleSetNumberOverride>& value) { m_ruleSetNumberOverrides = value; }
    inline void SetRuleSetNumberOverrides(Aws::Vector<ProtectConfigurationRuleSetNumberOverride>&& value) { m_ruleSetNumberOverrides = std::move(value); }
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithRuleSetNumberOverrides(const Aws::Vector<ProtectConfigurationRuleSetNumberOverride>& value) { SetRuleSetNumberOverrides(value); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithRuleSetNumberOverrides(Aws::Vector<ProtectConfigurationRuleSetNumberOverride>&& value) { SetRuleSetNumberOverrides(std::move(value)); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& AddRuleSetNumberOverrides(const ProtectConfigurationRuleSetNumberOverride& value) { m_ruleSetNumberOverrides.push_back(value); return *this; }
    inline ListProtectConfigurationRuleSetNumberOverridesResult& AddRuleSetNumberOverrides(ProtectConfigurationRuleSetNumberOverride&& value) { m_ruleSetNumberOverrides.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProtectConfigurationRuleSetNumberOverridesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationArn;

    Aws::String m_protectConfigurationId;

    Aws::Vector<ProtectConfigurationRuleSetNumberOverride> m_ruleSetNumberOverrides;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
