/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The source of the rules for an IPS engine rule group.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IpsRulesSource">AWS
 * API Reference</a></p>
 */
class IpsRulesSource {
 public:
  AWS_NETWORKFIREWALL_API IpsRulesSource() = default;
  AWS_NETWORKFIREWALL_API IpsRulesSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API IpsRulesSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>IPS engine rules, provided as a single Suricata-compatible rule string. For
   * the rule format, see <a
   * href="https://suricata.readthedocs.io/en/suricata-8.0.3/rules/intro.html">Rules
   * Format</a> on the Suricata website.</p>
   */
  inline const Aws::String& GetRulesString() const { return m_rulesString; }
  inline bool RulesStringHasBeenSet() const { return m_rulesStringHasBeenSet; }
  template <typename RulesStringT = Aws::String>
  void SetRulesString(RulesStringT&& value) {
    m_rulesStringHasBeenSet = true;
    m_rulesString = std::forward<RulesStringT>(value);
  }
  template <typename RulesStringT = Aws::String>
  IpsRulesSource& WithRulesString(RulesStringT&& value) {
    SetRulesString(std::forward<RulesStringT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rulesString;
  bool m_rulesStringHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
