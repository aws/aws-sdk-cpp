/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkManager {
namespace Model {

/**
 */
class CreateCoreNetworkPrefixListAssociationRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API CreateCoreNetworkPrefixListAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCoreNetworkPrefixListAssociation"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the core network to associate with the prefix list.</p>
   */
  inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
  inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
  template <typename CoreNetworkIdT = Aws::String>
  void SetCoreNetworkId(CoreNetworkIdT&& value) {
    m_coreNetworkIdHasBeenSet = true;
    m_coreNetworkId = std::forward<CoreNetworkIdT>(value);
  }
  template <typename CoreNetworkIdT = Aws::String>
  CreateCoreNetworkPrefixListAssociationRequest& WithCoreNetworkId(CoreNetworkIdT&& value) {
    SetCoreNetworkId(std::forward<CoreNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the prefix list to associate with the core network.</p>
   */
  inline const Aws::String& GetPrefixListArn() const { return m_prefixListArn; }
  inline bool PrefixListArnHasBeenSet() const { return m_prefixListArnHasBeenSet; }
  template <typename PrefixListArnT = Aws::String>
  void SetPrefixListArn(PrefixListArnT&& value) {
    m_prefixListArnHasBeenSet = true;
    m_prefixListArn = std::forward<PrefixListArnT>(value);
  }
  template <typename PrefixListArnT = Aws::String>
  CreateCoreNetworkPrefixListAssociationRequest& WithPrefixListArn(PrefixListArnT&& value) {
    SetPrefixListArn(std::forward<PrefixListArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional alias for the prefix list association.</p>
   */
  inline const Aws::String& GetPrefixListAlias() const { return m_prefixListAlias; }
  inline bool PrefixListAliasHasBeenSet() const { return m_prefixListAliasHasBeenSet; }
  template <typename PrefixListAliasT = Aws::String>
  void SetPrefixListAlias(PrefixListAliasT&& value) {
    m_prefixListAliasHasBeenSet = true;
    m_prefixListAlias = std::forward<PrefixListAliasT>(value);
  }
  template <typename PrefixListAliasT = Aws::String>
  CreateCoreNetworkPrefixListAssociationRequest& WithPrefixListAlias(PrefixListAliasT&& value) {
    SetPrefixListAlias(std::forward<PrefixListAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCoreNetworkPrefixListAssociationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
