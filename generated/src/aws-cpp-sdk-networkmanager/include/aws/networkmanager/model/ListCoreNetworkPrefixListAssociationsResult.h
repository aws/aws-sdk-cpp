/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/PrefixListAssociation.h>

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
class ListCoreNetworkPrefixListAssociationsResult {
 public:
  AWS_NETWORKMANAGER_API ListCoreNetworkPrefixListAssociationsResult() = default;
  AWS_NETWORKMANAGER_API ListCoreNetworkPrefixListAssociationsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API ListCoreNetworkPrefixListAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of prefix list associations for the core network.</p>
   */
  inline const Aws::Vector<PrefixListAssociation>& GetPrefixListAssociations() const { return m_prefixListAssociations; }
  template <typename PrefixListAssociationsT = Aws::Vector<PrefixListAssociation>>
  void SetPrefixListAssociations(PrefixListAssociationsT&& value) {
    m_prefixListAssociationsHasBeenSet = true;
    m_prefixListAssociations = std::forward<PrefixListAssociationsT>(value);
  }
  template <typename PrefixListAssociationsT = Aws::Vector<PrefixListAssociation>>
  ListCoreNetworkPrefixListAssociationsResult& WithPrefixListAssociations(PrefixListAssociationsT&& value) {
    SetPrefixListAssociations(std::forward<PrefixListAssociationsT>(value));
    return *this;
  }
  template <typename PrefixListAssociationsT = PrefixListAssociation>
  ListCoreNetworkPrefixListAssociationsResult& AddPrefixListAssociations(PrefixListAssociationsT&& value) {
    m_prefixListAssociationsHasBeenSet = true;
    m_prefixListAssociations.emplace_back(std::forward<PrefixListAssociationsT>(value));
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
  ListCoreNetworkPrefixListAssociationsResult& WithNextToken(NextTokenT&& value) {
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
  ListCoreNetworkPrefixListAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PrefixListAssociation> m_prefixListAssociations;
  bool m_prefixListAssociationsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
