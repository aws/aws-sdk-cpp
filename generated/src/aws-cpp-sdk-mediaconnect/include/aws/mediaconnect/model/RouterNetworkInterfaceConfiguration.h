/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/PublicRouterNetworkInterfaceConfiguration.h>
#include <aws/mediaconnect/model/VpcRouterNetworkInterfaceConfiguration.h>

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
 * <p>The configuration settings for a router network interface.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterNetworkInterfaceConfiguration">AWS
 * API Reference</a></p>
 */
class RouterNetworkInterfaceConfiguration {
 public:
  AWS_MEDIACONNECT_API RouterNetworkInterfaceConfiguration() = default;
  AWS_MEDIACONNECT_API RouterNetworkInterfaceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterNetworkInterfaceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const PublicRouterNetworkInterfaceConfiguration& GetPublic() const { return m_public; }
  inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }
  template <typename PublicT = PublicRouterNetworkInterfaceConfiguration>
  void SetPublic(PublicT&& value) {
    m_publicHasBeenSet = true;
    m_public = std::forward<PublicT>(value);
  }
  template <typename PublicT = PublicRouterNetworkInterfaceConfiguration>
  RouterNetworkInterfaceConfiguration& WithPublic(PublicT&& value) {
    SetPublic(std::forward<PublicT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const VpcRouterNetworkInterfaceConfiguration& GetVpc() const { return m_vpc; }
  inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
  template <typename VpcT = VpcRouterNetworkInterfaceConfiguration>
  void SetVpc(VpcT&& value) {
    m_vpcHasBeenSet = true;
    m_vpc = std::forward<VpcT>(value);
  }
  template <typename VpcT = VpcRouterNetworkInterfaceConfiguration>
  RouterNetworkInterfaceConfiguration& WithVpc(VpcT&& value) {
    SetVpc(std::forward<VpcT>(value));
    return *this;
  }
  ///@}
 private:
  PublicRouterNetworkInterfaceConfiguration m_public;

  VpcRouterNetworkInterfaceConfiguration m_vpc;
  bool m_publicHasBeenSet = false;
  bool m_vpcHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
