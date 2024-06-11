/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationInformation.h>
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
  class DescribeProtectConfigurationsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeProtectConfigurationsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeProtectConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeProtectConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of ProtectConfigurationInformation objects that contain the details
     * for the request. </p>
     */
    inline const Aws::Vector<ProtectConfigurationInformation>& GetProtectConfigurations() const{ return m_protectConfigurations; }
    inline void SetProtectConfigurations(const Aws::Vector<ProtectConfigurationInformation>& value) { m_protectConfigurations = value; }
    inline void SetProtectConfigurations(Aws::Vector<ProtectConfigurationInformation>&& value) { m_protectConfigurations = std::move(value); }
    inline DescribeProtectConfigurationsResult& WithProtectConfigurations(const Aws::Vector<ProtectConfigurationInformation>& value) { SetProtectConfigurations(value); return *this;}
    inline DescribeProtectConfigurationsResult& WithProtectConfigurations(Aws::Vector<ProtectConfigurationInformation>&& value) { SetProtectConfigurations(std::move(value)); return *this;}
    inline DescribeProtectConfigurationsResult& AddProtectConfigurations(const ProtectConfigurationInformation& value) { m_protectConfigurations.push_back(value); return *this; }
    inline DescribeProtectConfigurationsResult& AddProtectConfigurations(ProtectConfigurationInformation&& value) { m_protectConfigurations.push_back(std::move(value)); return *this; }
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
    inline DescribeProtectConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeProtectConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeProtectConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProtectConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProtectConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProtectConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProtectConfigurationInformation> m_protectConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
