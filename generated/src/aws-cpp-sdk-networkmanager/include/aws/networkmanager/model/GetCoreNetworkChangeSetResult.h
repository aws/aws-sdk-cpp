/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkChange.h>
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
  class GetCoreNetworkChangeSetResult
  {
  public:
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeSetResult() = default;
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes a core network changes.</p>
     */
    inline const Aws::Vector<CoreNetworkChange>& GetCoreNetworkChanges() const { return m_coreNetworkChanges; }
    template<typename CoreNetworkChangesT = Aws::Vector<CoreNetworkChange>>
    void SetCoreNetworkChanges(CoreNetworkChangesT&& value) { m_coreNetworkChangesHasBeenSet = true; m_coreNetworkChanges = std::forward<CoreNetworkChangesT>(value); }
    template<typename CoreNetworkChangesT = Aws::Vector<CoreNetworkChange>>
    GetCoreNetworkChangeSetResult& WithCoreNetworkChanges(CoreNetworkChangesT&& value) { SetCoreNetworkChanges(std::forward<CoreNetworkChangesT>(value)); return *this;}
    template<typename CoreNetworkChangesT = CoreNetworkChange>
    GetCoreNetworkChangeSetResult& AddCoreNetworkChanges(CoreNetworkChangesT&& value) { m_coreNetworkChangesHasBeenSet = true; m_coreNetworkChanges.emplace_back(std::forward<CoreNetworkChangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCoreNetworkChangeSetResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCoreNetworkChangeSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CoreNetworkChange> m_coreNetworkChanges;
    bool m_coreNetworkChangesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
