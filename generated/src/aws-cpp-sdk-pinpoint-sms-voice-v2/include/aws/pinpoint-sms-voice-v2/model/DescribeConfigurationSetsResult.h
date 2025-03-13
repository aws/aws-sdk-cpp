/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/ConfigurationSetInformation.h>
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
  class DescribeConfigurationSetsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeConfigurationSetsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeConfigurationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeConfigurationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of ConfigurationSets objects.</p>
     */
    inline const Aws::Vector<ConfigurationSetInformation>& GetConfigurationSets() const { return m_configurationSets; }
    template<typename ConfigurationSetsT = Aws::Vector<ConfigurationSetInformation>>
    void SetConfigurationSets(ConfigurationSetsT&& value) { m_configurationSetsHasBeenSet = true; m_configurationSets = std::forward<ConfigurationSetsT>(value); }
    template<typename ConfigurationSetsT = Aws::Vector<ConfigurationSetInformation>>
    DescribeConfigurationSetsResult& WithConfigurationSets(ConfigurationSetsT&& value) { SetConfigurationSets(std::forward<ConfigurationSetsT>(value)); return *this;}
    template<typename ConfigurationSetsT = ConfigurationSetInformation>
    DescribeConfigurationSetsResult& AddConfigurationSets(ConfigurationSetsT&& value) { m_configurationSetsHasBeenSet = true; m_configurationSets.emplace_back(std::forward<ConfigurationSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConfigurationSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigurationSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationSetInformation> m_configurationSets;
    bool m_configurationSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
