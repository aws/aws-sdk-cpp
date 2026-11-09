/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/PublicSourceEndpointNetworkingConfiguration.h>
#include <aws/mediaconnect/model/VpcSourceEndpointNetworkingConfiguration.h>

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
 * <p>The networking configuration for a standard source endpoint. This is a union
 * type, so exactly one of its members is set: <code>public</code> for a publicly
 * accessible endpoint, or <code>vpc</code> for an endpoint in a virtual private
 * cloud (VPC).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardSourceEndpointNetworkingConfiguration">AWS
 * API Reference</a></p>
 */
class StandardSourceEndpointNetworkingConfiguration {
 public:
  AWS_MEDIACONNECT_API StandardSourceEndpointNetworkingConfiguration() = default;
  AWS_MEDIACONNECT_API StandardSourceEndpointNetworkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardSourceEndpointNetworkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a publicly accessible source endpoint.</p>
   */
  inline const PublicSourceEndpointNetworkingConfiguration& GetPublic() const { return m_public; }
  inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }
  template <typename PublicT = PublicSourceEndpointNetworkingConfiguration>
  void SetPublic(PublicT&& value) {
    m_publicHasBeenSet = true;
    m_public = std::forward<PublicT>(value);
  }
  template <typename PublicT = PublicSourceEndpointNetworkingConfiguration>
  StandardSourceEndpointNetworkingConfiguration& WithPublic(PublicT&& value) {
    SetPublic(std::forward<PublicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a source endpoint in a virtual private cloud (VPC).</p>
   */
  inline const VpcSourceEndpointNetworkingConfiguration& GetVpc() const { return m_vpc; }
  inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
  template <typename VpcT = VpcSourceEndpointNetworkingConfiguration>
  void SetVpc(VpcT&& value) {
    m_vpcHasBeenSet = true;
    m_vpc = std::forward<VpcT>(value);
  }
  template <typename VpcT = VpcSourceEndpointNetworkingConfiguration>
  StandardSourceEndpointNetworkingConfiguration& WithVpc(VpcT&& value) {
    SetVpc(std::forward<VpcT>(value));
    return *this;
  }
  ///@}
 private:
  PublicSourceEndpointNetworkingConfiguration m_public;

  VpcSourceEndpointNetworkingConfiguration m_vpc;
  bool m_publicHasBeenSet = false;
  bool m_vpcHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
