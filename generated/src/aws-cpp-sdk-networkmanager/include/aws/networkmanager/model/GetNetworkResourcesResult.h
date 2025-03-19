/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/NetworkResource.h>
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
  class GetNetworkResourcesResult
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkResourcesResult() = default;
    AWS_NETWORKMANAGER_API GetNetworkResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The network resources.</p>
     */
    inline const Aws::Vector<NetworkResource>& GetNetworkResources() const { return m_networkResources; }
    template<typename NetworkResourcesT = Aws::Vector<NetworkResource>>
    void SetNetworkResources(NetworkResourcesT&& value) { m_networkResourcesHasBeenSet = true; m_networkResources = std::forward<NetworkResourcesT>(value); }
    template<typename NetworkResourcesT = Aws::Vector<NetworkResource>>
    GetNetworkResourcesResult& WithNetworkResources(NetworkResourcesT&& value) { SetNetworkResources(std::forward<NetworkResourcesT>(value)); return *this;}
    template<typename NetworkResourcesT = NetworkResource>
    GetNetworkResourcesResult& AddNetworkResources(NetworkResourcesT&& value) { m_networkResourcesHasBeenSet = true; m_networkResources.emplace_back(std::forward<NetworkResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetNetworkResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNetworkResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkResource> m_networkResources;
    bool m_networkResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
