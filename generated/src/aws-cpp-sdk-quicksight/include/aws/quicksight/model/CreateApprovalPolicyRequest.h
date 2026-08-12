/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ApplicableTo.h>
#include <aws/quicksight/model/AssetType.h>
#include <aws/quicksight/model/GovernedAction.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class CreateApprovalPolicyRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateApprovalPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateApprovalPolicy"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier to assign to the approval policy. You cannot change
   * this value after you create the policy.</p>
   */
  inline const Aws::String& GetPolicyId() const { return m_policyId; }
  inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
  template <typename PolicyIdT = Aws::String>
  void SetPolicyId(PolicyIdT&& value) {
    m_policyIdHasBeenSet = true;
    m_policyId = std::forward<PolicyIdT>(value);
  }
  template <typename PolicyIdT = Aws::String>
  CreateApprovalPolicyRequest& WithPolicyId(PolicyIdT&& value) {
    SetPolicyId(std::forward<PolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the approval policy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateApprovalPolicyRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the approval policy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateApprovalPolicyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of governed actions that trigger the approval workflow.</p>
   */
  inline const Aws::Vector<GovernedAction>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<GovernedAction>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<GovernedAction>>
  CreateApprovalPolicyRequest& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  inline CreateApprovalPolicyRequest& AddActions(GovernedAction value) {
    m_actionsHasBeenSet = true;
    m_actions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of asset types that the approval policy applies to.</p>
   */
  inline const Aws::Vector<AssetType>& GetAssetTypes() const { return m_assetTypes; }
  inline bool AssetTypesHasBeenSet() const { return m_assetTypesHasBeenSet; }
  template <typename AssetTypesT = Aws::Vector<AssetType>>
  void SetAssetTypes(AssetTypesT&& value) {
    m_assetTypesHasBeenSet = true;
    m_assetTypes = std::forward<AssetTypesT>(value);
  }
  template <typename AssetTypesT = Aws::Vector<AssetType>>
  CreateApprovalPolicyRequest& WithAssetTypes(AssetTypesT&& value) {
    SetAssetTypes(std::forward<AssetTypesT>(value));
    return *this;
  }
  inline CreateApprovalPolicyRequest& AddAssetTypes(AssetType value) {
    m_assetTypesHasBeenSet = true;
    m_assetTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scoping configuration that determines who the approval policy applies
   * to.</p>
   */
  inline const ApplicableTo& GetApplicableTo() const { return m_applicableTo; }
  inline bool ApplicableToHasBeenSet() const { return m_applicableToHasBeenSet; }
  template <typename ApplicableToT = ApplicableTo>
  void SetApplicableTo(ApplicableToT&& value) {
    m_applicableToHasBeenSet = true;
    m_applicableTo = std::forward<ApplicableToT>(value);
  }
  template <typename ApplicableToT = ApplicableTo>
  CreateApprovalPolicyRequest& WithApplicableTo(ApplicableToT&& value) {
    SetApplicableTo(std::forward<ApplicableToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of group ARNs whose members can approve requests.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApprovalGroups() const { return m_approvalGroups; }
  inline bool ApprovalGroupsHasBeenSet() const { return m_approvalGroupsHasBeenSet; }
  template <typename ApprovalGroupsT = Aws::Vector<Aws::String>>
  void SetApprovalGroups(ApprovalGroupsT&& value) {
    m_approvalGroupsHasBeenSet = true;
    m_approvalGroups = std::forward<ApprovalGroupsT>(value);
  }
  template <typename ApprovalGroupsT = Aws::Vector<Aws::String>>
  CreateApprovalPolicyRequest& WithApprovalGroups(ApprovalGroupsT&& value) {
    SetApprovalGroups(std::forward<ApprovalGroupsT>(value));
    return *this;
  }
  template <typename ApprovalGroupsT = Aws::String>
  CreateApprovalPolicyRequest& AddApprovalGroups(ApprovalGroupsT&& value) {
    m_approvalGroupsHasBeenSet = true;
    m_approvalGroups.emplace_back(std::forward<ApprovalGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<GovernedAction> m_actions;

  Aws::Vector<AssetType> m_assetTypes;

  ApplicableTo m_applicableTo;

  Aws::Vector<Aws::String> m_approvalGroups;
  bool m_policyIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_actionsHasBeenSet = false;
  bool m_assetTypesHasBeenSet = false;
  bool m_applicableToHasBeenSet = false;
  bool m_approvalGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
