/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
 * <p>A set of port ranges for use in the rules in a rule group. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PortSet">AWS
 * API Reference</a></p>
 */
class PortSet {
 public:
  AWS_NETWORKFIREWALL_API PortSet() = default;
  AWS_NETWORKFIREWALL_API PortSet(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API PortSet& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The set of port ranges. </p>
   */
  inline const Aws::Vector<Aws::String>& GetDefinition() const { return m_definition; }
  inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
  template <typename DefinitionT = Aws::Vector<Aws::String>>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = Aws::Vector<Aws::String>>
  PortSet& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  template <typename DefinitionT = Aws::String>
  PortSet& AddDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition.emplace_back(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_definition;
  bool m_definitionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
