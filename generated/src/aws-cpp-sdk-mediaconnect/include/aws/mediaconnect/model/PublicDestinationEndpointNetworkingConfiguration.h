/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/PublicDestinationEndpointNetworkingConfigurationAllowRule.h>

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
 * <p>The networking configuration for a publicly accessible destination endpoint,
 * including the CIDR blocks that are allowed to connect.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PublicDestinationEndpointNetworkingConfiguration">AWS
 * API Reference</a></p>
 */
class PublicDestinationEndpointNetworkingConfiguration {
 public:
  AWS_MEDIACONNECT_API PublicDestinationEndpointNetworkingConfiguration() = default;
  AWS_MEDIACONNECT_API PublicDestinationEndpointNetworkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API PublicDestinationEndpointNetworkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The rules that specify which CIDR blocks can connect to the destination
   * endpoint. You can specify up to 10 rules.</p>
   */
  inline const Aws::Vector<PublicDestinationEndpointNetworkingConfigurationAllowRule>& GetDestinationAllowRules() const {
    return m_destinationAllowRules;
  }
  inline bool DestinationAllowRulesHasBeenSet() const { return m_destinationAllowRulesHasBeenSet; }
  template <typename DestinationAllowRulesT = Aws::Vector<PublicDestinationEndpointNetworkingConfigurationAllowRule>>
  void SetDestinationAllowRules(DestinationAllowRulesT&& value) {
    m_destinationAllowRulesHasBeenSet = true;
    m_destinationAllowRules = std::forward<DestinationAllowRulesT>(value);
  }
  template <typename DestinationAllowRulesT = Aws::Vector<PublicDestinationEndpointNetworkingConfigurationAllowRule>>
  PublicDestinationEndpointNetworkingConfiguration& WithDestinationAllowRules(DestinationAllowRulesT&& value) {
    SetDestinationAllowRules(std::forward<DestinationAllowRulesT>(value));
    return *this;
  }
  template <typename DestinationAllowRulesT = PublicDestinationEndpointNetworkingConfigurationAllowRule>
  PublicDestinationEndpointNetworkingConfiguration& AddDestinationAllowRules(DestinationAllowRulesT&& value) {
    m_destinationAllowRulesHasBeenSet = true;
    m_destinationAllowRules.emplace_back(std::forward<DestinationAllowRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PublicDestinationEndpointNetworkingConfigurationAllowRule> m_destinationAllowRules;
  bool m_destinationAllowRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
