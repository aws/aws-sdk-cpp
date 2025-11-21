/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Information about a prefix list association with a core
 * network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PrefixListAssociation">AWS
 * API Reference</a></p>
 */
class PrefixListAssociation {
 public:
  AWS_NETWORKMANAGER_API PrefixListAssociation() = default;
  AWS_NETWORKMANAGER_API PrefixListAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API PrefixListAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The core network id in the association.</p>
   */
  inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
  inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
  template <typename CoreNetworkIdT = Aws::String>
  void SetCoreNetworkId(CoreNetworkIdT&& value) {
    m_coreNetworkIdHasBeenSet = true;
    m_coreNetworkId = std::forward<CoreNetworkIdT>(value);
  }
  template <typename CoreNetworkIdT = Aws::String>
  PrefixListAssociation& WithCoreNetworkId(CoreNetworkIdT&& value) {
    SetCoreNetworkId(std::forward<CoreNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the prefix list in the association.</p>
   */
  inline const Aws::String& GetPrefixListArn() const { return m_prefixListArn; }
  inline bool PrefixListArnHasBeenSet() const { return m_prefixListArnHasBeenSet; }
  template <typename PrefixListArnT = Aws::String>
  void SetPrefixListArn(PrefixListArnT&& value) {
    m_prefixListArnHasBeenSet = true;
    m_prefixListArn = std::forward<PrefixListArnT>(value);
  }
  template <typename PrefixListArnT = Aws::String>
  PrefixListAssociation& WithPrefixListArn(PrefixListArnT&& value) {
    SetPrefixListArn(std::forward<PrefixListArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias of the prefix list in the association.</p>
   */
  inline const Aws::String& GetPrefixListAlias() const { return m_prefixListAlias; }
  inline bool PrefixListAliasHasBeenSet() const { return m_prefixListAliasHasBeenSet; }
  template <typename PrefixListAliasT = Aws::String>
  void SetPrefixListAlias(PrefixListAliasT&& value) {
    m_prefixListAliasHasBeenSet = true;
    m_prefixListAlias = std::forward<PrefixListAliasT>(value);
  }
  template <typename PrefixListAliasT = Aws::String>
  PrefixListAssociation& WithPrefixListAlias(PrefixListAliasT&& value) {
    SetPrefixListAlias(std::forward<PrefixListAliasT>(value));
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
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
