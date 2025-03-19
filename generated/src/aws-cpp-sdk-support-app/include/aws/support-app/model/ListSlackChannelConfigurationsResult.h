/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support-app/model/SlackChannelConfiguration.h>
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
namespace SupportApp
{
namespace Model
{
  class ListSlackChannelConfigurationsResult
  {
  public:
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult() = default;
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSlackChannelConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline const Aws::Vector<SlackChannelConfiguration>& GetSlackChannelConfigurations() const { return m_slackChannelConfigurations; }
    template<typename SlackChannelConfigurationsT = Aws::Vector<SlackChannelConfiguration>>
    void SetSlackChannelConfigurations(SlackChannelConfigurationsT&& value) { m_slackChannelConfigurationsHasBeenSet = true; m_slackChannelConfigurations = std::forward<SlackChannelConfigurationsT>(value); }
    template<typename SlackChannelConfigurationsT = Aws::Vector<SlackChannelConfiguration>>
    ListSlackChannelConfigurationsResult& WithSlackChannelConfigurations(SlackChannelConfigurationsT&& value) { SetSlackChannelConfigurations(std::forward<SlackChannelConfigurationsT>(value)); return *this;}
    template<typename SlackChannelConfigurationsT = SlackChannelConfiguration>
    ListSlackChannelConfigurationsResult& AddSlackChannelConfigurations(SlackChannelConfigurationsT&& value) { m_slackChannelConfigurationsHasBeenSet = true; m_slackChannelConfigurations.emplace_back(std::forward<SlackChannelConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSlackChannelConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SlackChannelConfiguration> m_slackChannelConfigurations;
    bool m_slackChannelConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
