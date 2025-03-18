/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineVersionListItem.h>
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
namespace SFN
{
namespace Model
{
  class ListStateMachineVersionsResult
  {
  public:
    AWS_SFN_API ListStateMachineVersionsResult() = default;
    AWS_SFN_API ListStateMachineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API ListStateMachineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Versions for the state machine.</p>
     */
    inline const Aws::Vector<StateMachineVersionListItem>& GetStateMachineVersions() const { return m_stateMachineVersions; }
    template<typename StateMachineVersionsT = Aws::Vector<StateMachineVersionListItem>>
    void SetStateMachineVersions(StateMachineVersionsT&& value) { m_stateMachineVersionsHasBeenSet = true; m_stateMachineVersions = std::forward<StateMachineVersionsT>(value); }
    template<typename StateMachineVersionsT = Aws::Vector<StateMachineVersionListItem>>
    ListStateMachineVersionsResult& WithStateMachineVersions(StateMachineVersionsT&& value) { SetStateMachineVersions(std::forward<StateMachineVersionsT>(value)); return *this;}
    template<typename StateMachineVersionsT = StateMachineVersionListItem>
    ListStateMachineVersionsResult& AddStateMachineVersions(StateMachineVersionsT&& value) { m_stateMachineVersionsHasBeenSet = true; m_stateMachineVersions.emplace_back(std::forward<StateMachineVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStateMachineVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStateMachineVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StateMachineVersionListItem> m_stateMachineVersions;
    bool m_stateMachineVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
