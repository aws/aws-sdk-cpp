/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ConfidenceThreshold.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {

/**
 * <p>The configuration for a DNS threat protection rule type within the rule type
 * framework.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DnsThreatProtectionRuleTypeConfig">AWS
 * API Reference</a></p>
 */
class DnsThreatProtectionRuleTypeConfig {
 public:
  AWS_ROUTE53RESOLVER_API DnsThreatProtectionRuleTypeConfig() = default;
  AWS_ROUTE53RESOLVER_API DnsThreatProtectionRuleTypeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API DnsThreatProtectionRuleTypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of DNS threat protection. Valid values are:</p> <ul> <li> <p>
   * <code>DGA</code>: Domain generation algorithms detection. DGAs are used by
   * attackers to generate a large number of domains to launch malware attacks.</p>
   * </li> <li> <p> <code>DNS_TUNNELING</code>: DNS tunneling detection. DNS
   * tunneling is used by attackers to exfiltrate data from the client by using the
   * DNS tunnel without making a network connection to the client.</p> </li> <li> <p>
   * <code>DICT_DGA</code>: Dictionary-based domain generation algorithms detection.
   * Dictionary DGAs use wordlists to generate domains that appear more legitimate,
   * making them harder to detect than traditional DGAs.</p> </li> </ul>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  DnsThreatProtectionRuleTypeConfig& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence threshold for DNS Firewall Advanced. You must provide this
   * value when you create or update a DNS Firewall Advanced rule. The confidence
   * level values mean:</p> <ul> <li> <p> <code>LOW</code>: Provides the highest
   * detection rate for threats, but also increases false positives.</p> </li> <li>
   * <p> <code>MEDIUM</code>: Provides a balance between detecting threats and false
   * positives.</p> </li> <li> <p> <code>HIGH</code>: Detects only the most well
   * corroborated threats with a low rate of false positives.</p> </li> </ul>
   */
  inline ConfidenceThreshold GetConfidenceThreshold() const { return m_confidenceThreshold; }
  inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
  inline void SetConfidenceThreshold(ConfidenceThreshold value) {
    m_confidenceThresholdHasBeenSet = true;
    m_confidenceThreshold = value;
  }
  inline DnsThreatProtectionRuleTypeConfig& WithConfidenceThreshold(ConfidenceThreshold value) {
    SetConfidenceThreshold(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  ConfidenceThreshold m_confidenceThreshold{ConfidenceThreshold::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_confidenceThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
