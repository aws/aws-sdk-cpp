/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ApplicableTo.h>
#include <aws/quicksight/model/AssetType.h>
#include <aws/quicksight/model/GovernedAction.h>

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
 * <p>A governance approval policy that specifies which principals and governed
 * actions require approval, and which assets the policy applies to.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ApprovalPolicy">AWS
 * API Reference</a></p>
 */
class ApprovalPolicy {
 public:
  AWS_QUICKSIGHT_API ApprovalPolicy() = default;
  AWS_QUICKSIGHT_API ApprovalPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ApprovalPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the approval policy.</p>
   */
  inline const Aws::String& GetPolicyId() const { return m_policyId; }
  inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
  template <typename PolicyIdT = Aws::String>
  void SetPolicyId(PolicyIdT&& value) {
    m_policyIdHasBeenSet = true;
    m_policyId = std::forward<PolicyIdT>(value);
  }
  template <typename PolicyIdT = Aws::String>
  ApprovalPolicy& WithPolicyId(PolicyIdT&& value) {
    SetPolicyId(std::forward<PolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the approval policy.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  ApprovalPolicy& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
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
  ApprovalPolicy& WithName(NameT&& value) {
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
  ApprovalPolicy& WithDescription(DescriptionT&& value) {
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
  ApprovalPolicy& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  inline ApprovalPolicy& AddActions(GovernedAction value) {
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
  ApprovalPolicy& WithAssetTypes(AssetTypesT&& value) {
    SetAssetTypes(std::forward<AssetTypesT>(value));
    return *this;
  }
  inline ApprovalPolicy& AddAssetTypes(AssetType value) {
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
  ApprovalPolicy& WithApplicableTo(ApplicableToT&& value) {
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
  ApprovalPolicy& WithApprovalGroups(ApprovalGroupsT&& value) {
    SetApprovalGroups(std::forward<ApprovalGroupsT>(value));
    return *this;
  }
  template <typename ApprovalGroupsT = Aws::String>
  ApprovalPolicy& AddApprovalGroups(ApprovalGroupsT&& value) {
    m_approvalGroupsHasBeenSet = true;
    m_approvalGroups.emplace_back(std::forward<ApprovalGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the approval policy was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ApprovalPolicy& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the approval policy was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ApprovalPolicy& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyId;

  Aws::String m_policyArn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<GovernedAction> m_actions;

  Aws::Vector<AssetType> m_assetTypes;

  ApplicableTo m_applicableTo;

  Aws::Vector<Aws::String> m_approvalGroups;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_policyIdHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_actionsHasBeenSet = false;
  bool m_assetTypesHasBeenSet = false;
  bool m_applicableToHasBeenSet = false;
  bool m_approvalGroupsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
