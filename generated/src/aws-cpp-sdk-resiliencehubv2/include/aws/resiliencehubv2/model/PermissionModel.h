/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/CrossAccountRole.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Defines the permission model for a service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/PermissionModel">AWS
 * API Reference</a></p>
 */
class PermissionModel {
 public:
  AWS_RESILIENCEHUBV2_API PermissionModel() = default;
  AWS_RESILIENCEHUBV2_API PermissionModel(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API PermissionModel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetInvokerRoleName() const { return m_invokerRoleName; }
  inline bool InvokerRoleNameHasBeenSet() const { return m_invokerRoleNameHasBeenSet; }
  template <typename InvokerRoleNameT = Aws::String>
  void SetInvokerRoleName(InvokerRoleNameT&& value) {
    m_invokerRoleNameHasBeenSet = true;
    m_invokerRoleName = std::forward<InvokerRoleNameT>(value);
  }
  template <typename InvokerRoleNameT = Aws::String>
  PermissionModel& WithInvokerRoleName(InvokerRoleNameT&& value) {
    SetInvokerRoleName(std::forward<InvokerRoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of cross-account IAM role ARNs.</p>
   */
  inline const Aws::Vector<CrossAccountRole>& GetCrossAccountRoles() const { return m_crossAccountRoles; }
  inline bool CrossAccountRolesHasBeenSet() const { return m_crossAccountRolesHasBeenSet; }
  template <typename CrossAccountRolesT = Aws::Vector<CrossAccountRole>>
  void SetCrossAccountRoles(CrossAccountRolesT&& value) {
    m_crossAccountRolesHasBeenSet = true;
    m_crossAccountRoles = std::forward<CrossAccountRolesT>(value);
  }
  template <typename CrossAccountRolesT = Aws::Vector<CrossAccountRole>>
  PermissionModel& WithCrossAccountRoles(CrossAccountRolesT&& value) {
    SetCrossAccountRoles(std::forward<CrossAccountRolesT>(value));
    return *this;
  }
  template <typename CrossAccountRolesT = CrossAccountRole>
  PermissionModel& AddCrossAccountRoles(CrossAccountRolesT&& value) {
    m_crossAccountRolesHasBeenSet = true;
    m_crossAccountRoles.emplace_back(std::forward<CrossAccountRolesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_invokerRoleName;

  Aws::Vector<CrossAccountRole> m_crossAccountRoles;
  bool m_invokerRoleNameHasBeenSet = false;
  bool m_crossAccountRolesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
