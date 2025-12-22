/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/Network.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class ListNetworksResult {
 public:
  AWS_WICKR_API ListNetworksResult() = default;
  AWS_WICKR_API ListNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API ListNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of network objects for the Amazon Web Services account.</p>
   */
  inline const Aws::Vector<Network>& GetNetworks() const { return m_networks; }
  template <typename NetworksT = Aws::Vector<Network>>
  void SetNetworks(NetworksT&& value) {
    m_networksHasBeenSet = true;
    m_networks = std::forward<NetworksT>(value);
  }
  template <typename NetworksT = Aws::Vector<Network>>
  ListNetworksResult& WithNetworks(NetworksT&& value) {
    SetNetworks(std::forward<NetworksT>(value));
    return *this;
  }
  template <typename NetworksT = Network>
  ListNetworksResult& AddNetworks(NetworksT&& value) {
    m_networksHasBeenSet = true;
    m_networks.emplace_back(std::forward<NetworksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use for retrieving the next page of results. If this is not
   * present, there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListNetworksResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListNetworksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Network> m_networks;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_networksHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
