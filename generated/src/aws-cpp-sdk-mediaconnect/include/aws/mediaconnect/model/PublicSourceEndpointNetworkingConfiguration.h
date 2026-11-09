/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/PublicSourceEndpointNetworkingConfigurationAllowRule.h>

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
 * <p>The networking configuration for a publicly accessible source endpoint,
 * including the CIDR blocks that are allowed to connect.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PublicSourceEndpointNetworkingConfiguration">AWS
 * API Reference</a></p>
 */
class PublicSourceEndpointNetworkingConfiguration {
 public:
  AWS_MEDIACONNECT_API PublicSourceEndpointNetworkingConfiguration() = default;
  AWS_MEDIACONNECT_API PublicSourceEndpointNetworkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API PublicSourceEndpointNetworkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The rules that specify which CIDR blocks can connect to the source endpoint.
   * You can specify up to 10 rules.</p>
   */
  inline const Aws::Vector<PublicSourceEndpointNetworkingConfigurationAllowRule>& GetSourceAllowRules() const { return m_sourceAllowRules; }
  inline bool SourceAllowRulesHasBeenSet() const { return m_sourceAllowRulesHasBeenSet; }
  template <typename SourceAllowRulesT = Aws::Vector<PublicSourceEndpointNetworkingConfigurationAllowRule>>
  void SetSourceAllowRules(SourceAllowRulesT&& value) {
    m_sourceAllowRulesHasBeenSet = true;
    m_sourceAllowRules = std::forward<SourceAllowRulesT>(value);
  }
  template <typename SourceAllowRulesT = Aws::Vector<PublicSourceEndpointNetworkingConfigurationAllowRule>>
  PublicSourceEndpointNetworkingConfiguration& WithSourceAllowRules(SourceAllowRulesT&& value) {
    SetSourceAllowRules(std::forward<SourceAllowRulesT>(value));
    return *this;
  }
  template <typename SourceAllowRulesT = PublicSourceEndpointNetworkingConfigurationAllowRule>
  PublicSourceEndpointNetworkingConfiguration& AddSourceAllowRules(SourceAllowRulesT&& value) {
    m_sourceAllowRulesHasBeenSet = true;
    m_sourceAllowRules.emplace_back(std::forward<SourceAllowRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PublicSourceEndpointNetworkingConfigurationAllowRule> m_sourceAllowRules;
  bool m_sourceAllowRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
