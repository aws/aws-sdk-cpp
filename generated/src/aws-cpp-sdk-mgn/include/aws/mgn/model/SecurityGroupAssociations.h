/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>The associations that bind a security group to source machines before they
 * are provisioned.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SecurityGroupAssociations">AWS
 * API Reference</a></p>
 */
class SecurityGroupAssociations {
 public:
  AWS_MGN_API SecurityGroupAssociations() = default;
  AWS_MGN_API SecurityGroupAssociations(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SecurityGroupAssociations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CIDR ranges associated with the security group. A provided list replaces
   * the stored list; an empty list clears it, and omitting the field leaves it
   * unchanged.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCidrs() const { return m_cidrs; }
  inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
  template <typename CidrsT = Aws::Vector<Aws::String>>
  void SetCidrs(CidrsT&& value) {
    m_cidrsHasBeenSet = true;
    m_cidrs = std::forward<CidrsT>(value);
  }
  template <typename CidrsT = Aws::Vector<Aws::String>>
  SecurityGroupAssociations& WithCidrs(CidrsT&& value) {
    SetCidrs(std::forward<CidrsT>(value));
    return *this;
  }
  template <typename CidrsT = Aws::String>
  SecurityGroupAssociations& AddCidrs(CidrsT&& value) {
    m_cidrsHasBeenSet = true;
    m_cidrs.emplace_back(std::forward<CidrsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The UUIDs of the source machines associated with the security group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVmUUIDs() const { return m_vmUUIDs; }
  inline bool VmUUIDsHasBeenSet() const { return m_vmUUIDsHasBeenSet; }
  template <typename VmUUIDsT = Aws::Vector<Aws::String>>
  void SetVmUUIDs(VmUUIDsT&& value) {
    m_vmUUIDsHasBeenSet = true;
    m_vmUUIDs = std::forward<VmUUIDsT>(value);
  }
  template <typename VmUUIDsT = Aws::Vector<Aws::String>>
  SecurityGroupAssociations& WithVmUUIDs(VmUUIDsT&& value) {
    SetVmUUIDs(std::forward<VmUUIDsT>(value));
    return *this;
  }
  template <typename VmUUIDsT = Aws::String>
  SecurityGroupAssociations& AddVmUUIDs(VmUUIDsT&& value) {
    m_vmUUIDsHasBeenSet = true;
    m_vmUUIDs.emplace_back(std::forward<VmUUIDsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-provided identifiers of the source machines associated with the
   * security group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUserProvidedIDs() const { return m_userProvidedIDs; }
  inline bool UserProvidedIDsHasBeenSet() const { return m_userProvidedIDsHasBeenSet; }
  template <typename UserProvidedIDsT = Aws::Vector<Aws::String>>
  void SetUserProvidedIDs(UserProvidedIDsT&& value) {
    m_userProvidedIDsHasBeenSet = true;
    m_userProvidedIDs = std::forward<UserProvidedIDsT>(value);
  }
  template <typename UserProvidedIDsT = Aws::Vector<Aws::String>>
  SecurityGroupAssociations& WithUserProvidedIDs(UserProvidedIDsT&& value) {
    SetUserProvidedIDs(std::forward<UserProvidedIDsT>(value));
    return *this;
  }
  template <typename UserProvidedIDsT = Aws::String>
  SecurityGroupAssociations& AddUserProvidedIDs(UserProvidedIDsT&& value) {
    m_userProvidedIDsHasBeenSet = true;
    m_userProvidedIDs.emplace_back(std::forward<UserProvidedIDsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_cidrs;

  Aws::Vector<Aws::String> m_vmUUIDs;

  Aws::Vector<Aws::String> m_userProvidedIDs;
  bool m_cidrsHasBeenSet = false;
  bool m_vmUUIDsHasBeenSet = false;
  bool m_userProvidedIDsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
