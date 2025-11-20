/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

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
class CreateCoreNetworkPrefixListAssociationResult {
 public:
  AWS_NETWORKMANAGER_API CreateCoreNetworkPrefixListAssociationResult() = default;
  AWS_NETWORKMANAGER_API CreateCoreNetworkPrefixListAssociationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API CreateCoreNetworkPrefixListAssociationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the core network associated with the prefix list.</p>
   */
  inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
  template <typename CoreNetworkIdT = Aws::String>
  void SetCoreNetworkId(CoreNetworkIdT&& value) {
    m_coreNetworkIdHasBeenSet = true;
    m_coreNetworkId = std::forward<CoreNetworkIdT>(value);
  }
  template <typename CoreNetworkIdT = Aws::String>
  CreateCoreNetworkPrefixListAssociationResult& WithCoreNetworkId(CoreNetworkIdT&& value) {
    SetCoreNetworkId(std::forward<CoreNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the prefix list that was associated with the core network.</p>
   */
  inline const Aws::String& GetPrefixListArn() const { return m_prefixListArn; }
  template <typename PrefixListArnT = Aws::String>
  void SetPrefixListArn(PrefixListArnT&& value) {
    m_prefixListArnHasBeenSet = true;
    m_prefixListArn = std::forward<PrefixListArnT>(value);
  }
  template <typename PrefixListArnT = Aws::String>
  CreateCoreNetworkPrefixListAssociationResult& WithPrefixListArn(PrefixListArnT&& value) {
    SetPrefixListArn(std::forward<PrefixListArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias of the prefix list association, if provided.</p>
   */
  inline const Aws::String& GetPrefixListAlias() const { return m_prefixListAlias; }
  template <typename PrefixListAliasT = Aws::String>
  void SetPrefixListAlias(PrefixListAliasT&& value) {
    m_prefixListAliasHasBeenSet = true;
    m_prefixListAlias = std::forward<PrefixListAliasT>(value);
  }
  template <typename PrefixListAliasT = Aws::String>
  CreateCoreNetworkPrefixListAssociationResult& WithPrefixListAlias(PrefixListAliasT&& value) {
    SetPrefixListAlias(std::forward<PrefixListAliasT>(value));
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
  CreateCoreNetworkPrefixListAssociationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_coreNetworkId;
  bool m_coreNetworkIdHasBeenSet = false;

  Aws::String m_prefixListArn;
  bool m_prefixListArnHasBeenSet = false;

  Aws::String m_prefixListAlias;
  bool m_prefixListAliasHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
