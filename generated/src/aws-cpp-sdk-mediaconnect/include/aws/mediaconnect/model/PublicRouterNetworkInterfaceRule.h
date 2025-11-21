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
 * <p>A rule that allows a specific CIDR block to access the public router network
 * interface.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PublicRouterNetworkInterfaceRule">AWS
 * API Reference</a></p>
 */
class PublicRouterNetworkInterfaceRule {
 public:
  AWS_MEDIACONNECT_API PublicRouterNetworkInterfaceRule() = default;
  AWS_MEDIACONNECT_API PublicRouterNetworkInterfaceRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API PublicRouterNetworkInterfaceRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CIDR block that is allowed to access the public router network
   * interface.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  PublicRouterNetworkInterfaceRule& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidr;
  bool m_cidrHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
