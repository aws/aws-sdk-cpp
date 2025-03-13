/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/DescribeNetworkSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListNetworksResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListNetworksResponse">AWS
   * API Reference</a></p>
   */
  class ListNetworksSdkResult
  {
  public:
    AWS_MEDIALIVE_API ListNetworksSdkResult() = default;
    AWS_MEDIALIVE_API ListNetworksSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListNetworksSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * An array of networks that you have created.
     */
    inline const Aws::Vector<DescribeNetworkSummary>& GetNetworks() const { return m_networks; }
    template<typename NetworksT = Aws::Vector<DescribeNetworkSummary>>
    void SetNetworks(NetworksT&& value) { m_networksHasBeenSet = true; m_networks = std::forward<NetworksT>(value); }
    template<typename NetworksT = Aws::Vector<DescribeNetworkSummary>>
    ListNetworksSdkResult& WithNetworks(NetworksT&& value) { SetNetworks(std::forward<NetworksT>(value)); return *this;}
    template<typename NetworksT = DescribeNetworkSummary>
    ListNetworksSdkResult& AddNetworks(NetworksT&& value) { m_networksHasBeenSet = true; m_networks.emplace_back(std::forward<NetworksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Token for the next ListNetworks request.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNetworksSdkResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNetworksSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeNetworkSummary> m_networks;
    bool m_networksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
