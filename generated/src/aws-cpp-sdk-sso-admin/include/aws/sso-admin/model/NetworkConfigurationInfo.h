/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSOAdmin {
namespace Model {

/**
 * <p>The network access controls for your Identity Center instance. These controls
 * restrict which networks can reach your instance and applications.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/NetworkConfigurationInfo">AWS
 * API Reference</a></p>
 */
class NetworkConfigurationInfo {
 public:
  AWS_SSOADMIN_API NetworkConfigurationInfo() = default;
  AWS_SSOADMIN_API NetworkConfigurationInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSOADMIN_API NetworkConfigurationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether access to your Identity Center instance and to applications
   * must originate from a VPC endpoint. When this value is <code>true</code> and no
   * other field is specified, access is allowed from any VPC in your organization,
   * or from any VPC in the Amazon Web Services account for an account instance, and
   * applies to all applications. When this value is <code>false</code>, no network
   * access control is enforced and the values of <code>RestrictSourceVpcs</code>,
   * <code>AllowSourceIps</code>, and <code>ExcludeApplicationArns</code> are
   * cleared.</p>
   */
  inline bool GetVpceAccessRequired() const { return m_vpceAccessRequired; }
  inline bool VpceAccessRequiredHasBeenSet() const { return m_vpceAccessRequiredHasBeenSet; }
  inline void SetVpceAccessRequired(bool value) {
    m_vpceAccessRequiredHasBeenSet = true;
    m_vpceAccessRequired = value;
  }
  inline NetworkConfigurationInfo& WithVpceAccessRequired(bool value) {
    SetVpceAccessRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits access to the VPC endpoints in the VPCs that you specify. These VPCs
   * must be in your organization, or in the Amazon Web Services account for an
   * account instance. If you don't specify this value, access is allowed from any
   * VPC in your organization or Amazon Web Services account.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRestrictSourceVpcs() const { return m_restrictSourceVpcs; }
  inline bool RestrictSourceVpcsHasBeenSet() const { return m_restrictSourceVpcsHasBeenSet; }
  template <typename RestrictSourceVpcsT = Aws::Vector<Aws::String>>
  void SetRestrictSourceVpcs(RestrictSourceVpcsT&& value) {
    m_restrictSourceVpcsHasBeenSet = true;
    m_restrictSourceVpcs = std::forward<RestrictSourceVpcsT>(value);
  }
  template <typename RestrictSourceVpcsT = Aws::Vector<Aws::String>>
  NetworkConfigurationInfo& WithRestrictSourceVpcs(RestrictSourceVpcsT&& value) {
    SetRestrictSourceVpcs(std::forward<RestrictSourceVpcsT>(value));
    return *this;
  }
  template <typename RestrictSourceVpcsT = Aws::String>
  NetworkConfigurationInfo& AddRestrictSourceVpcs(RestrictSourceVpcsT&& value) {
    m_restrictSourceVpcsHasBeenSet = true;
    m_restrictSourceVpcs.emplace_back(std::forward<RestrictSourceVpcsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows access from the IPv4 or IPv6 CIDR blocks that you specify, in addition
   * to the VPCs allowed by <code>RestrictSourceVpcs</code>. If you don't specify
   * this value, no additional IP address ranges are allowed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowSourceIps() const { return m_allowSourceIps; }
  inline bool AllowSourceIpsHasBeenSet() const { return m_allowSourceIpsHasBeenSet; }
  template <typename AllowSourceIpsT = Aws::Vector<Aws::String>>
  void SetAllowSourceIps(AllowSourceIpsT&& value) {
    m_allowSourceIpsHasBeenSet = true;
    m_allowSourceIps = std::forward<AllowSourceIpsT>(value);
  }
  template <typename AllowSourceIpsT = Aws::Vector<Aws::String>>
  NetworkConfigurationInfo& WithAllowSourceIps(AllowSourceIpsT&& value) {
    SetAllowSourceIps(std::forward<AllowSourceIpsT>(value));
    return *this;
  }
  template <typename AllowSourceIpsT = Aws::String>
  NetworkConfigurationInfo& AddAllowSourceIps(AllowSourceIpsT&& value) {
    m_allowSourceIpsHasBeenSet = true;
    m_allowSourceIps.emplace_back(std::forward<AllowSourceIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exempts the applications that you specify from the network access control, so
   * that access to them is unchanged. You can specify both Amazon Web Services
   * managed applications and customer managed applications, and you can use
   * wildcards. These applications are not restricted by
   * <code>RestrictSourceVpcs</code> or <code>AllowSourceIps</code>. If you don't
   * specify this value, the controls apply to all applications.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludeApplicationArns() const { return m_excludeApplicationArns; }
  inline bool ExcludeApplicationArnsHasBeenSet() const { return m_excludeApplicationArnsHasBeenSet; }
  template <typename ExcludeApplicationArnsT = Aws::Vector<Aws::String>>
  void SetExcludeApplicationArns(ExcludeApplicationArnsT&& value) {
    m_excludeApplicationArnsHasBeenSet = true;
    m_excludeApplicationArns = std::forward<ExcludeApplicationArnsT>(value);
  }
  template <typename ExcludeApplicationArnsT = Aws::Vector<Aws::String>>
  NetworkConfigurationInfo& WithExcludeApplicationArns(ExcludeApplicationArnsT&& value) {
    SetExcludeApplicationArns(std::forward<ExcludeApplicationArnsT>(value));
    return *this;
  }
  template <typename ExcludeApplicationArnsT = Aws::String>
  NetworkConfigurationInfo& AddExcludeApplicationArns(ExcludeApplicationArnsT&& value) {
    m_excludeApplicationArnsHasBeenSet = true;
    m_excludeApplicationArns.emplace_back(std::forward<ExcludeApplicationArnsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_vpceAccessRequired{false};

  Aws::Vector<Aws::String> m_restrictSourceVpcs;

  Aws::Vector<Aws::String> m_allowSourceIps;

  Aws::Vector<Aws::String> m_excludeApplicationArns;
  bool m_vpceAccessRequiredHasBeenSet = false;
  bool m_restrictSourceVpcsHasBeenSet = false;
  bool m_allowSourceIpsHasBeenSet = false;
  bool m_excludeApplicationArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
