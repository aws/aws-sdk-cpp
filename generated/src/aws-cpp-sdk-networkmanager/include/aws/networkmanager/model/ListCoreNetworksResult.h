/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkSummary.h>
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
  class ListCoreNetworksResult
  {
  public:
    AWS_NETWORKMANAGER_API ListCoreNetworksResult() = default;
    AWS_NETWORKMANAGER_API ListCoreNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListCoreNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the list of core networks.</p>
     */
    inline const Aws::Vector<CoreNetworkSummary>& GetCoreNetworks() const { return m_coreNetworks; }
    template<typename CoreNetworksT = Aws::Vector<CoreNetworkSummary>>
    void SetCoreNetworks(CoreNetworksT&& value) { m_coreNetworksHasBeenSet = true; m_coreNetworks = std::forward<CoreNetworksT>(value); }
    template<typename CoreNetworksT = Aws::Vector<CoreNetworkSummary>>
    ListCoreNetworksResult& WithCoreNetworks(CoreNetworksT&& value) { SetCoreNetworks(std::forward<CoreNetworksT>(value)); return *this;}
    template<typename CoreNetworksT = CoreNetworkSummary>
    ListCoreNetworksResult& AddCoreNetworks(CoreNetworksT&& value) { m_coreNetworksHasBeenSet = true; m_coreNetworks.emplace_back(std::forward<CoreNetworksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCoreNetworksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCoreNetworksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CoreNetworkSummary> m_coreNetworks;
    bool m_coreNetworksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
