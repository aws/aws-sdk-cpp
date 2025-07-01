/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ChatResponseConfiguration.h>
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
namespace QBusiness
{
namespace Model
{
  class ListChatResponseConfigurationsResult
  {
  public:
    AWS_QBUSINESS_API ListChatResponseConfigurationsResult() = default;
    AWS_QBUSINESS_API ListChatResponseConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListChatResponseConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of chat response configuration summaries, each containing key
     * information about an available configuration in the specified application.</p>
     */
    inline const Aws::Vector<ChatResponseConfiguration>& GetChatResponseConfigurations() const { return m_chatResponseConfigurations; }
    template<typename ChatResponseConfigurationsT = Aws::Vector<ChatResponseConfiguration>>
    void SetChatResponseConfigurations(ChatResponseConfigurationsT&& value) { m_chatResponseConfigurationsHasBeenSet = true; m_chatResponseConfigurations = std::forward<ChatResponseConfigurationsT>(value); }
    template<typename ChatResponseConfigurationsT = Aws::Vector<ChatResponseConfiguration>>
    ListChatResponseConfigurationsResult& WithChatResponseConfigurations(ChatResponseConfigurationsT&& value) { SetChatResponseConfigurations(std::forward<ChatResponseConfigurationsT>(value)); return *this;}
    template<typename ChatResponseConfigurationsT = ChatResponseConfiguration>
    ListChatResponseConfigurationsResult& AddChatResponseConfigurations(ChatResponseConfigurationsT&& value) { m_chatResponseConfigurationsHasBeenSet = true; m_chatResponseConfigurations.emplace_back(std::forward<ChatResponseConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent request to retrieve
     * additional chat response configurations if the results were truncated due to the
     * <code>maxResults</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChatResponseConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChatResponseConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChatResponseConfiguration> m_chatResponseConfigurations;
    bool m_chatResponseConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
