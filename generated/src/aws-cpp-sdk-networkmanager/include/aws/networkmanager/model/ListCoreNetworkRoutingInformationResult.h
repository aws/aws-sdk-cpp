/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/CoreNetworkRoutingInformation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {
class ListCoreNetworkRoutingInformationResult {
 public:
  AWS_NETWORKMANAGER_API ListCoreNetworkRoutingInformationResult() = default;
  AWS_NETWORKMANAGER_API ListCoreNetworkRoutingInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API ListCoreNetworkRoutingInformationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of routing information for the core network.</p>
   */
  inline const Aws::Vector<CoreNetworkRoutingInformation>& GetCoreNetworkRoutingInformation() const {
    return m_coreNetworkRoutingInformation;
  }
  template <typename CoreNetworkRoutingInformationT = Aws::Vector<CoreNetworkRoutingInformation>>
  void SetCoreNetworkRoutingInformation(CoreNetworkRoutingInformationT&& value) {
    m_coreNetworkRoutingInformationHasBeenSet = true;
    m_coreNetworkRoutingInformation = std::forward<CoreNetworkRoutingInformationT>(value);
  }
  template <typename CoreNetworkRoutingInformationT = Aws::Vector<CoreNetworkRoutingInformation>>
  ListCoreNetworkRoutingInformationResult& WithCoreNetworkRoutingInformation(CoreNetworkRoutingInformationT&& value) {
    SetCoreNetworkRoutingInformation(std::forward<CoreNetworkRoutingInformationT>(value));
    return *this;
  }
  template <typename CoreNetworkRoutingInformationT = CoreNetworkRoutingInformation>
  ListCoreNetworkRoutingInformationResult& AddCoreNetworkRoutingInformation(CoreNetworkRoutingInformationT&& value) {
    m_coreNetworkRoutingInformationHasBeenSet = true;
    m_coreNetworkRoutingInformation.emplace_back(std::forward<CoreNetworkRoutingInformationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCoreNetworkRoutingInformationResult& WithNextToken(NextTokenT&& value) {
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
  ListCoreNetworkRoutingInformationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CoreNetworkRoutingInformation> m_coreNetworkRoutingInformation;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_coreNetworkRoutingInformationHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
