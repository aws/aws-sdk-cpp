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
    AWS_PINPOINTSMSVOICEV2_API DescribeProtectConfigurationsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeProtectConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeProtectConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of ProtectConfigurationInformation objects that contain the details
     * for the request. </p>
     */
    inline const Aws::Vector<ProtectConfigurationInformation>& GetProtectConfigurations() const { return m_protectConfigurations; }
    template<typename ProtectConfigurationsT = Aws::Vector<ProtectConfigurationInformation>>
    void SetProtectConfigurations(ProtectConfigurationsT&& value) { m_protectConfigurationsHasBeenSet = true; m_protectConfigurations = std::forward<ProtectConfigurationsT>(value); }
    template<typename ProtectConfigurationsT = Aws::Vector<ProtectConfigurationInformation>>
    DescribeProtectConfigurationsResult& WithProtectConfigurations(ProtectConfigurationsT&& value) { SetProtectConfigurations(std::forward<ProtectConfigurationsT>(value)); return *this;}
    template<typename ProtectConfigurationsT = ProtectConfigurationInformation>
    DescribeProtectConfigurationsResult& AddProtectConfigurations(ProtectConfigurationsT&& value) { m_protectConfigurationsHasBeenSet = true; m_protectConfigurations.emplace_back(std::forward<ProtectConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeProtectConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProtectConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProtectConfigurationInformation> m_protectConfigurations;
    bool m_protectConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
