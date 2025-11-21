/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FailoverInputSourcePriorityMode.h>
#include <aws/mediaconnect/model/FailoverRouterInputProtocolConfiguration.h>

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
 * <p>Configuration settings for a failover router input that allows switching
 * between two input sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FailoverRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class FailoverRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API FailoverRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API FailoverRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API FailoverRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the network interface to use for this failover router input.</p>
   */
  inline const Aws::String& GetNetworkInterfaceArn() const { return m_networkInterfaceArn; }
  inline bool NetworkInterfaceArnHasBeenSet() const { return m_networkInterfaceArnHasBeenSet; }
  template <typename NetworkInterfaceArnT = Aws::String>
  void SetNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    m_networkInterfaceArnHasBeenSet = true;
    m_networkInterfaceArn = std::forward<NetworkInterfaceArnT>(value);
  }
  template <typename NetworkInterfaceArnT = Aws::String>
  FailoverRouterInputConfiguration& WithNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    SetNetworkInterfaceArn(std::forward<NetworkInterfaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of exactly two protocol configurations for the failover input sources.
   * Both must use the same protocol type.</p>
   */
  inline const Aws::Vector<FailoverRouterInputProtocolConfiguration>& GetProtocolConfigurations() const { return m_protocolConfigurations; }
  inline bool ProtocolConfigurationsHasBeenSet() const { return m_protocolConfigurationsHasBeenSet; }
  template <typename ProtocolConfigurationsT = Aws::Vector<FailoverRouterInputProtocolConfiguration>>
  void SetProtocolConfigurations(ProtocolConfigurationsT&& value) {
    m_protocolConfigurationsHasBeenSet = true;
    m_protocolConfigurations = std::forward<ProtocolConfigurationsT>(value);
  }
  template <typename ProtocolConfigurationsT = Aws::Vector<FailoverRouterInputProtocolConfiguration>>
  FailoverRouterInputConfiguration& WithProtocolConfigurations(ProtocolConfigurationsT&& value) {
    SetProtocolConfigurations(std::forward<ProtocolConfigurationsT>(value));
    return *this;
  }
  template <typename ProtocolConfigurationsT = FailoverRouterInputProtocolConfiguration>
  FailoverRouterInputConfiguration& AddProtocolConfigurations(ProtocolConfigurationsT&& value) {
    m_protocolConfigurationsHasBeenSet = true;
    m_protocolConfigurations.emplace_back(std::forward<ProtocolConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode for determining source priority in failover configurations.</p>
   */
  inline FailoverInputSourcePriorityMode GetSourcePriorityMode() const { return m_sourcePriorityMode; }
  inline bool SourcePriorityModeHasBeenSet() const { return m_sourcePriorityModeHasBeenSet; }
  inline void SetSourcePriorityMode(FailoverInputSourcePriorityMode value) {
    m_sourcePriorityModeHasBeenSet = true;
    m_sourcePriorityMode = value;
  }
  inline FailoverRouterInputConfiguration& WithSourcePriorityMode(FailoverInputSourcePriorityMode value) {
    SetSourcePriorityMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index (0 or 1) that specifies which source in the protocol configurations
   * list is currently active. Used to control which of the two failover sources is
   * currently selected. This field is ignored when sourcePriorityMode is set to
   * NO_PRIORITY</p>
   */
  inline int GetPrimarySourceIndex() const { return m_primarySourceIndex; }
  inline bool PrimarySourceIndexHasBeenSet() const { return m_primarySourceIndexHasBeenSet; }
  inline void SetPrimarySourceIndex(int value) {
    m_primarySourceIndexHasBeenSet = true;
    m_primarySourceIndex = value;
  }
  inline FailoverRouterInputConfiguration& WithPrimarySourceIndex(int value) {
    SetPrimarySourceIndex(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkInterfaceArn;
  bool m_networkInterfaceArnHasBeenSet = false;

  Aws::Vector<FailoverRouterInputProtocolConfiguration> m_protocolConfigurations;
  bool m_protocolConfigurationsHasBeenSet = false;

  FailoverInputSourcePriorityMode m_sourcePriorityMode{FailoverInputSourcePriorityMode::NOT_SET};
  bool m_sourcePriorityModeHasBeenSet = false;

  int m_primarySourceIndex{0};
  bool m_primarySourceIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
