/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support-app/model/SlackWorkspaceConfiguration.h>
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
  class ListSlackWorkspaceConfigurationsResult
  {
  public:
    AWS_SUPPORTAPP_API ListSlackWorkspaceConfigurationsResult() = default;
    AWS_SUPPORTAPP_API ListSlackWorkspaceConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API ListSlackWorkspaceConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSlackWorkspaceConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations for a Slack workspace.</p>
     */
    inline const Aws::Vector<SlackWorkspaceConfiguration>& GetSlackWorkspaceConfigurations() const { return m_slackWorkspaceConfigurations; }
    template<typename SlackWorkspaceConfigurationsT = Aws::Vector<SlackWorkspaceConfiguration>>
    void SetSlackWorkspaceConfigurations(SlackWorkspaceConfigurationsT&& value) { m_slackWorkspaceConfigurationsHasBeenSet = true; m_slackWorkspaceConfigurations = std::forward<SlackWorkspaceConfigurationsT>(value); }
    template<typename SlackWorkspaceConfigurationsT = Aws::Vector<SlackWorkspaceConfiguration>>
    ListSlackWorkspaceConfigurationsResult& WithSlackWorkspaceConfigurations(SlackWorkspaceConfigurationsT&& value) { SetSlackWorkspaceConfigurations(std::forward<SlackWorkspaceConfigurationsT>(value)); return *this;}
    template<typename SlackWorkspaceConfigurationsT = SlackWorkspaceConfiguration>
    ListSlackWorkspaceConfigurationsResult& AddSlackWorkspaceConfigurations(SlackWorkspaceConfigurationsT&& value) { m_slackWorkspaceConfigurationsHasBeenSet = true; m_slackWorkspaceConfigurations.emplace_back(std::forward<SlackWorkspaceConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSlackWorkspaceConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SlackWorkspaceConfiguration> m_slackWorkspaceConfigurations;
    bool m_slackWorkspaceConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
