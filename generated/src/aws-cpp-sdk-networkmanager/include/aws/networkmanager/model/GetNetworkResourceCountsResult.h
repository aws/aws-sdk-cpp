/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/NetworkResourceCount.h>
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
  class GetNetworkResourceCountsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkResourceCountsResult() = default;
    AWS_NETWORKMANAGER_API GetNetworkResourceCountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkResourceCountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The count of resources.</p>
     */
    inline const Aws::Vector<NetworkResourceCount>& GetNetworkResourceCounts() const { return m_networkResourceCounts; }
    template<typename NetworkResourceCountsT = Aws::Vector<NetworkResourceCount>>
    void SetNetworkResourceCounts(NetworkResourceCountsT&& value) { m_networkResourceCountsHasBeenSet = true; m_networkResourceCounts = std::forward<NetworkResourceCountsT>(value); }
    template<typename NetworkResourceCountsT = Aws::Vector<NetworkResourceCount>>
    GetNetworkResourceCountsResult& WithNetworkResourceCounts(NetworkResourceCountsT&& value) { SetNetworkResourceCounts(std::forward<NetworkResourceCountsT>(value)); return *this;}
    template<typename NetworkResourceCountsT = NetworkResourceCount>
    GetNetworkResourceCountsResult& AddNetworkResourceCounts(NetworkResourceCountsT&& value) { m_networkResourceCountsHasBeenSet = true; m_networkResourceCounts.emplace_back(std::forward<NetworkResourceCountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetNetworkResourceCountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNetworkResourceCountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkResourceCount> m_networkResourceCounts;
    bool m_networkResourceCountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
