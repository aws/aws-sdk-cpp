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
 * <p>A list of resource identifiers from the context store that is associated with
 * the firewall. Use a context set to write stateful rules against Amazon Web
 * Services resources instead of IP addresses. This is part of a
 * <a>RuleVariables</a>. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ContextSet">AWS
 * API Reference</a></p>
 */
class ContextSet {
 public:
  AWS_NETWORKFIREWALL_API ContextSet() = default;
  AWS_NETWORKFIREWALL_API ContextSet(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ContextSet& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of resource identifiers. Each entry is the ID of a resource that the
   * context store records, for example <code>vpc-1234567890abcdef0</code>,
   * <code>subnet-1234567890abcdef0</code>, <code>sg-1234567890abcdef0</code>, or
   * <code>tgw-attach-1234567890abcdef0</code>. You can specify 1-1,000 entries.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDefinition() const { return m_definition; }
  inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
  template <typename DefinitionT = Aws::Vector<Aws::String>>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = Aws::Vector<Aws::String>>
  ContextSet& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  template <typename DefinitionT = Aws::String>
  ContextSet& AddDefinition(DefinitionT&& value) {
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
