/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/PublicDestinationEndpointNetworkingConfiguration.h>
#include <aws/mediaconnect/model/VpcDestinationEndpointNetworkingConfiguration.h>

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
 * <p>The networking configuration for a standard destination endpoint. This is a
 * union type, so exactly one of its members is set: <code>public</code> for a
 * publicly accessible endpoint, or <code>vpc</code> for an endpoint in a virtual
 * private cloud (VPC).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardDestinationEndpointNetworkingConfiguration">AWS
 * API Reference</a></p>
 */
class StandardDestinationEndpointNetworkingConfiguration {
 public:
  AWS_MEDIACONNECT_API StandardDestinationEndpointNetworkingConfiguration() = default;
  AWS_MEDIACONNECT_API StandardDestinationEndpointNetworkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardDestinationEndpointNetworkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a publicly accessible destination endpoint.</p>
   */
  inline const PublicDestinationEndpointNetworkingConfiguration& GetPublic() const { return m_public; }
  inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }
  template <typename PublicT = PublicDestinationEndpointNetworkingConfiguration>
  void SetPublic(PublicT&& value) {
    m_publicHasBeenSet = true;
    m_public = std::forward<PublicT>(value);
  }
  template <typename PublicT = PublicDestinationEndpointNetworkingConfiguration>
  StandardDestinationEndpointNetworkingConfiguration& WithPublic(PublicT&& value) {
    SetPublic(std::forward<PublicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a destination endpoint in a virtual private cloud
   * (VPC).</p>
   */
  inline const VpcDestinationEndpointNetworkingConfiguration& GetVpc() const { return m_vpc; }
  inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
  template <typename VpcT = VpcDestinationEndpointNetworkingConfiguration>
  void SetVpc(VpcT&& value) {
    m_vpcHasBeenSet = true;
    m_vpc = std::forward<VpcT>(value);
  }
  template <typename VpcT = VpcDestinationEndpointNetworkingConfiguration>
  StandardDestinationEndpointNetworkingConfiguration& WithVpc(VpcT&& value) {
    SetVpc(std::forward<VpcT>(value));
    return *this;
  }
  ///@}
 private:
  PublicDestinationEndpointNetworkingConfiguration m_public;

  VpcDestinationEndpointNetworkingConfiguration m_vpc;
  bool m_publicHasBeenSet = false;
  bool m_vpcHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
