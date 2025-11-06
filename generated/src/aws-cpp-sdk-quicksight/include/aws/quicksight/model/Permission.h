/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A structure that contains the permission information for one principal
 * against one flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Permission">AWS
 * API Reference</a></p>
 */
class Permission {
 public:
  AWS_QUICKSIGHT_API Permission() = default;
  AWS_QUICKSIGHT_API Permission(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of actions that the principal can perform against the flow.</p> <p>The
   * following are the list of values to set a principal as a flow owner:</p> <ul>
   * <li> <p>quicksight:PublishFlow</p> </li> <li> <p>quicksight:GetFlow</p> </li>
   * <li> <p>quicksight:UpdateFlowPermissions</p> </li> <li>
   * <p>quicksight:GetFlowSession</p> </li> <li> <p>quicksight:StartFlowSession</p>
   * </li> <li> <p>quicksight:StopFlowSession</p> </li> <li>
   * <p>quicksight:UpdateFlowSession</p> </li> <li> <p>quicksight:UnpublishFlow</p>
   * </li> <li> <p>quicksight:GetFlowStages</p> </li> <li>
   * <p>quicksight:DeleteFlow</p> </li> <li>
   * <p>quicksight:DescribeFlowPermissions</p> </li> <li>
   * <p>quicksight:UpdateFlow</p> </li> <li> <p>quicksight:CreatePresignedUrl</p>
   * </li> </ul> <p>The following are the list of values to set a principal as a flow
   * viewer:</p> <ul> <li> <p>quicksight:GetFlow</p> </li> <li>
   * <p>quicksight:UpdateFlowSession</p> </li> <li>
   * <p>quicksight:StartFlowSession</p> </li> <li> <p>quicksight:StopFlowSession</p>
   * </li> <li> <p>quicksight:GetFlowSession</p> </li> <li>
   * <p>quicksight:CreatePresignedUrl</p> </li> <li> <p>quicksight:GetFlowStages</p>
   * </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<Aws::String>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<Aws::String>>
  Permission& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = Aws::String>
  Permission& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the principal. This can be an Amazon Quick
   * Suite user, group or namespace associated with the flow. Namespace principal can
   * only be set as a viewer and will grant everyone in the same namespace viewer
   * permissions.</p>
   */
  inline const Aws::String& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = Aws::String>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = Aws::String>
  Permission& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_actions;
  bool m_actionsHasBeenSet = false;

  Aws::String m_principal;
  bool m_principalHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
