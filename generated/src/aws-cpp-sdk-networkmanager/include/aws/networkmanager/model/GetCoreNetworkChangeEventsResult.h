/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkChangeEvent.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetCoreNetworkChangeEventsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeEventsResult() = default;
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response to <code>GetCoreNetworkChangeEventsRequest</code>.</p>
     */
    inline const Aws::Vector<CoreNetworkChangeEvent>& GetCoreNetworkChangeEvents() const { return m_coreNetworkChangeEvents; }
    template<typename CoreNetworkChangeEventsT = Aws::Vector<CoreNetworkChangeEvent>>
    void SetCoreNetworkChangeEvents(CoreNetworkChangeEventsT&& value) { m_coreNetworkChangeEventsHasBeenSet = true; m_coreNetworkChangeEvents = std::forward<CoreNetworkChangeEventsT>(value); }
    template<typename CoreNetworkChangeEventsT = Aws::Vector<CoreNetworkChangeEvent>>
    GetCoreNetworkChangeEventsResult& WithCoreNetworkChangeEvents(CoreNetworkChangeEventsT&& value) { SetCoreNetworkChangeEvents(std::forward<CoreNetworkChangeEventsT>(value)); return *this;}
    template<typename CoreNetworkChangeEventsT = CoreNetworkChangeEvent>
    GetCoreNetworkChangeEventsResult& AddCoreNetworkChangeEvents(CoreNetworkChangeEventsT&& value) { m_coreNetworkChangeEventsHasBeenSet = true; m_coreNetworkChangeEvents.emplace_back(std::forward<CoreNetworkChangeEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCoreNetworkChangeEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCoreNetworkChangeEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CoreNetworkChangeEvent> m_coreNetworkChangeEvents;
    bool m_coreNetworkChangeEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
