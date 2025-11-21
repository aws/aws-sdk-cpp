/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/PublicRouterNetworkInterfaceRule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The configuration settings for a public router network interface, including
 * the list of allowed CIDR blocks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PublicRouterNetworkInterfaceConfiguration">AWS
 * API Reference</a></p>
 */
class PublicRouterNetworkInterfaceConfiguration {
 public:
  AWS_MEDIACONNECT_API PublicRouterNetworkInterfaceConfiguration() = default;
  AWS_MEDIACONNECT_API PublicRouterNetworkInterfaceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API PublicRouterNetworkInterfaceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of allowed CIDR blocks for the public router network interface.</p>
   */
  inline const Aws::Vector<PublicRouterNetworkInterfaceRule>& GetAllowRules() const { return m_allowRules; }
  inline bool AllowRulesHasBeenSet() const { return m_allowRulesHasBeenSet; }
  template <typename AllowRulesT = Aws::Vector<PublicRouterNetworkInterfaceRule>>
  void SetAllowRules(AllowRulesT&& value) {
    m_allowRulesHasBeenSet = true;
    m_allowRules = std::forward<AllowRulesT>(value);
  }
  template <typename AllowRulesT = Aws::Vector<PublicRouterNetworkInterfaceRule>>
  PublicRouterNetworkInterfaceConfiguration& WithAllowRules(AllowRulesT&& value) {
    SetAllowRules(std::forward<AllowRulesT>(value));
    return *this;
  }
  template <typename AllowRulesT = PublicRouterNetworkInterfaceRule>
  PublicRouterNetworkInterfaceConfiguration& AddAllowRules(AllowRulesT&& value) {
    m_allowRulesHasBeenSet = true;
    m_allowRules.emplace_back(std::forward<AllowRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PublicRouterNetworkInterfaceRule> m_allowRules;
  bool m_allowRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
