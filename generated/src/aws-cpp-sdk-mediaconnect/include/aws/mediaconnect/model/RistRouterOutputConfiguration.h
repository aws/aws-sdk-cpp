/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

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
 * <p>The configuration settings for a router output using the RIST (Reliable
 * Internet Stream Transport) protocol, including the destination address and
 * port.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RistRouterOutputConfiguration">AWS
 * API Reference</a></p>
 */
class RistRouterOutputConfiguration {
 public:
  AWS_MEDIACONNECT_API RistRouterOutputConfiguration() = default;
  AWS_MEDIACONNECT_API RistRouterOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RistRouterOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The destination IP address for the RIST protocol in the router output
   * configuration.</p>
   */
  inline const Aws::String& GetDestinationAddress() const { return m_destinationAddress; }
  inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }
  template <typename DestinationAddressT = Aws::String>
  void SetDestinationAddress(DestinationAddressT&& value) {
    m_destinationAddressHasBeenSet = true;
    m_destinationAddress = std::forward<DestinationAddressT>(value);
  }
  template <typename DestinationAddressT = Aws::String>
  RistRouterOutputConfiguration& WithDestinationAddress(DestinationAddressT&& value) {
    SetDestinationAddress(std::forward<DestinationAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination port number for the RIST protocol in the router output
   * configuration.</p>
   */
  inline int GetDestinationPort() const { return m_destinationPort; }
  inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
  inline void SetDestinationPort(int value) {
    m_destinationPortHasBeenSet = true;
    m_destinationPort = value;
  }
  inline RistRouterOutputConfiguration& WithDestinationPort(int value) {
    SetDestinationPort(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationAddress;
  bool m_destinationAddressHasBeenSet = false;

  int m_destinationPort{0};
  bool m_destinationPortHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
