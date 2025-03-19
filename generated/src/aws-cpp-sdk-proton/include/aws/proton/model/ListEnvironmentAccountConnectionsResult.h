/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/EnvironmentAccountConnectionSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListEnvironmentAccountConnectionsResult
  {
  public:
    AWS_PROTON_API ListEnvironmentAccountConnectionsResult() = default;
    AWS_PROTON_API ListEnvironmentAccountConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListEnvironmentAccountConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of environment account connections with details that's returned by
     * Proton. </p>
     */
    inline const Aws::Vector<EnvironmentAccountConnectionSummary>& GetEnvironmentAccountConnections() const { return m_environmentAccountConnections; }
    template<typename EnvironmentAccountConnectionsT = Aws::Vector<EnvironmentAccountConnectionSummary>>
    void SetEnvironmentAccountConnections(EnvironmentAccountConnectionsT&& value) { m_environmentAccountConnectionsHasBeenSet = true; m_environmentAccountConnections = std::forward<EnvironmentAccountConnectionsT>(value); }
    template<typename EnvironmentAccountConnectionsT = Aws::Vector<EnvironmentAccountConnectionSummary>>
    ListEnvironmentAccountConnectionsResult& WithEnvironmentAccountConnections(EnvironmentAccountConnectionsT&& value) { SetEnvironmentAccountConnections(std::forward<EnvironmentAccountConnectionsT>(value)); return *this;}
    template<typename EnvironmentAccountConnectionsT = EnvironmentAccountConnectionSummary>
    ListEnvironmentAccountConnectionsResult& AddEnvironmentAccountConnections(EnvironmentAccountConnectionsT&& value) { m_environmentAccountConnectionsHasBeenSet = true; m_environmentAccountConnections.emplace_back(std::forward<EnvironmentAccountConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates the location of the next environment account
     * connection in the array of environment account connections, after the current
     * requested list of environment account connections.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentAccountConnectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentAccountConnectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnvironmentAccountConnectionSummary> m_environmentAccountConnections;
    bool m_environmentAccountConnectionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
