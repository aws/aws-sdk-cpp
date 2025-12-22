/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MergeRouterInputProtocolConfiguration.h>

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
 * <p>Configuration settings for a merge router input that combines two input
 * sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MergeRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class MergeRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API MergeRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API MergeRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MergeRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the network interface to use for this merge router input.</p>
   */
  inline const Aws::String& GetNetworkInterfaceArn() const { return m_networkInterfaceArn; }
  inline bool NetworkInterfaceArnHasBeenSet() const { return m_networkInterfaceArnHasBeenSet; }
  template <typename NetworkInterfaceArnT = Aws::String>
  void SetNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    m_networkInterfaceArnHasBeenSet = true;
    m_networkInterfaceArn = std::forward<NetworkInterfaceArnT>(value);
  }
  template <typename NetworkInterfaceArnT = Aws::String>
  MergeRouterInputConfiguration& WithNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    SetNetworkInterfaceArn(std::forward<NetworkInterfaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of exactly two protocol configurations for the merge input sources.
   * Both must use the same protocol type.</p>
   */
  inline const Aws::Vector<MergeRouterInputProtocolConfiguration>& GetProtocolConfigurations() const { return m_protocolConfigurations; }
  inline bool ProtocolConfigurationsHasBeenSet() const { return m_protocolConfigurationsHasBeenSet; }
  template <typename ProtocolConfigurationsT = Aws::Vector<MergeRouterInputProtocolConfiguration>>
  void SetProtocolConfigurations(ProtocolConfigurationsT&& value) {
    m_protocolConfigurationsHasBeenSet = true;
    m_protocolConfigurations = std::forward<ProtocolConfigurationsT>(value);
  }
  template <typename ProtocolConfigurationsT = Aws::Vector<MergeRouterInputProtocolConfiguration>>
  MergeRouterInputConfiguration& WithProtocolConfigurations(ProtocolConfigurationsT&& value) {
    SetProtocolConfigurations(std::forward<ProtocolConfigurationsT>(value));
    return *this;
  }
  template <typename ProtocolConfigurationsT = MergeRouterInputProtocolConfiguration>
  MergeRouterInputConfiguration& AddProtocolConfigurations(ProtocolConfigurationsT&& value) {
    m_protocolConfigurationsHasBeenSet = true;
    m_protocolConfigurations.emplace_back(std::forward<ProtocolConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time window in milliseconds for merging the two input sources.</p>
   */
  inline long long GetMergeRecoveryWindowMilliseconds() const { return m_mergeRecoveryWindowMilliseconds; }
  inline bool MergeRecoveryWindowMillisecondsHasBeenSet() const { return m_mergeRecoveryWindowMillisecondsHasBeenSet; }
  inline void SetMergeRecoveryWindowMilliseconds(long long value) {
    m_mergeRecoveryWindowMillisecondsHasBeenSet = true;
    m_mergeRecoveryWindowMilliseconds = value;
  }
  inline MergeRouterInputConfiguration& WithMergeRecoveryWindowMilliseconds(long long value) {
    SetMergeRecoveryWindowMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkInterfaceArn;

  Aws::Vector<MergeRouterInputProtocolConfiguration> m_protocolConfigurations;

  long long m_mergeRecoveryWindowMilliseconds{0};
  bool m_networkInterfaceArnHasBeenSet = false;
  bool m_protocolConfigurationsHasBeenSet = false;
  bool m_mergeRecoveryWindowMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
