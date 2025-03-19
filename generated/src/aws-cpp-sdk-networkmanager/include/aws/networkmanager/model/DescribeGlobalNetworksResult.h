/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/GlobalNetwork.h>
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
  class DescribeGlobalNetworksResult
  {
  public:
    AWS_NETWORKMANAGER_API DescribeGlobalNetworksResult() = default;
    AWS_NETWORKMANAGER_API DescribeGlobalNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DescribeGlobalNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the global networks.</p>
     */
    inline const Aws::Vector<GlobalNetwork>& GetGlobalNetworks() const { return m_globalNetworks; }
    template<typename GlobalNetworksT = Aws::Vector<GlobalNetwork>>
    void SetGlobalNetworks(GlobalNetworksT&& value) { m_globalNetworksHasBeenSet = true; m_globalNetworks = std::forward<GlobalNetworksT>(value); }
    template<typename GlobalNetworksT = Aws::Vector<GlobalNetwork>>
    DescribeGlobalNetworksResult& WithGlobalNetworks(GlobalNetworksT&& value) { SetGlobalNetworks(std::forward<GlobalNetworksT>(value)); return *this;}
    template<typename GlobalNetworksT = GlobalNetwork>
    DescribeGlobalNetworksResult& AddGlobalNetworks(GlobalNetworksT&& value) { m_globalNetworksHasBeenSet = true; m_globalNetworks.emplace_back(std::forward<GlobalNetworksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeGlobalNetworksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGlobalNetworksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GlobalNetwork> m_globalNetworks;
    bool m_globalNetworksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
