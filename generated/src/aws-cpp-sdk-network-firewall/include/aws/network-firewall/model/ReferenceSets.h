/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/IPSetReference.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Contains a set of IP set references.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ReferenceSets">AWS
 * API Reference</a></p>
 */
class ReferenceSets {
 public:
  AWS_NETWORKFIREWALL_API ReferenceSets() = default;
  AWS_NETWORKFIREWALL_API ReferenceSets(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ReferenceSets& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of IP set references.</p>
   */
  inline const Aws::Map<Aws::String, IPSetReference>& GetIPSetReferences() const { return m_iPSetReferences; }
  inline bool IPSetReferencesHasBeenSet() const { return m_iPSetReferencesHasBeenSet; }
  template <typename IPSetReferencesT = Aws::Map<Aws::String, IPSetReference>>
  void SetIPSetReferences(IPSetReferencesT&& value) {
    m_iPSetReferencesHasBeenSet = true;
    m_iPSetReferences = std::forward<IPSetReferencesT>(value);
  }
  template <typename IPSetReferencesT = Aws::Map<Aws::String, IPSetReference>>
  ReferenceSets& WithIPSetReferences(IPSetReferencesT&& value) {
    SetIPSetReferences(std::forward<IPSetReferencesT>(value));
    return *this;
  }
  template <typename IPSetReferencesKeyT = Aws::String, typename IPSetReferencesValueT = IPSetReference>
  ReferenceSets& AddIPSetReferences(IPSetReferencesKeyT&& key, IPSetReferencesValueT&& value) {
    m_iPSetReferencesHasBeenSet = true;
    m_iPSetReferences.emplace(std::forward<IPSetReferencesKeyT>(key), std::forward<IPSetReferencesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, IPSetReference> m_iPSetReferences;
  bool m_iPSetReferencesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
