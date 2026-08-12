/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/AggregationConfiguration.h>
#include <aws/wellarchitected/model/Pillar.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class UpdateAgentProfileRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API UpdateAgentProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentProfile"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateAgentProfileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the profile to update.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  UpdateAgentProfileRequest& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated display name of the profile.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateAgentProfileRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateAgentProfileRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated ARN of the IAM execution role.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  UpdateAgentProfileRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated aggregation configuration.</p>
   */
  inline const Aws::Vector<AggregationConfiguration>& GetAggregationConfiguration() const { return m_aggregationConfiguration; }
  inline bool AggregationConfigurationHasBeenSet() const { return m_aggregationConfigurationHasBeenSet; }
  template <typename AggregationConfigurationT = Aws::Vector<AggregationConfiguration>>
  void SetAggregationConfiguration(AggregationConfigurationT&& value) {
    m_aggregationConfigurationHasBeenSet = true;
    m_aggregationConfiguration = std::forward<AggregationConfigurationT>(value);
  }
  template <typename AggregationConfigurationT = Aws::Vector<AggregationConfiguration>>
  UpdateAgentProfileRequest& WithAggregationConfiguration(AggregationConfigurationT&& value) {
    SetAggregationConfiguration(std::forward<AggregationConfigurationT>(value));
    return *this;
  }
  template <typename AggregationConfigurationT = AggregationConfiguration>
  UpdateAgentProfileRequest& AddAggregationConfiguration(AggregationConfigurationT&& value) {
    m_aggregationConfigurationHasBeenSet = true;
    m_aggregationConfiguration.emplace_back(std::forward<AggregationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated business overview for the profile.</p>
   */
  inline const Aws::String& GetBusinessOverview() const { return m_businessOverview; }
  inline bool BusinessOverviewHasBeenSet() const { return m_businessOverviewHasBeenSet; }
  template <typename BusinessOverviewT = Aws::String>
  void SetBusinessOverview(BusinessOverviewT&& value) {
    m_businessOverviewHasBeenSet = true;
    m_businessOverview = std::forward<BusinessOverviewT>(value);
  }
  template <typename BusinessOverviewT = Aws::String>
  UpdateAgentProfileRequest& WithBusinessOverview(BusinessOverviewT&& value) {
    SetBusinessOverview(std::forward<BusinessOverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated Well-Architected Tool Framework pillars for the profile.</p>
   */
  inline const Aws::Vector<Pillar>& GetPillars() const { return m_pillars; }
  inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
  template <typename PillarsT = Aws::Vector<Pillar>>
  void SetPillars(PillarsT&& value) {
    m_pillarsHasBeenSet = true;
    m_pillars = std::forward<PillarsT>(value);
  }
  template <typename PillarsT = Aws::Vector<Pillar>>
  UpdateAgentProfileRequest& WithPillars(PillarsT&& value) {
    SetPillars(std::forward<PillarsT>(value));
    return *this;
  }
  inline UpdateAgentProfileRequest& AddPillars(Pillar value) {
    m_pillarsHasBeenSet = true;
    m_pillars.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether deletion protection is enabled for the profile.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline UpdateAgentProfileRequest& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_profileArn;

  Aws::String m_displayName;

  Aws::String m_description;

  Aws::String m_executionRoleArn;

  Aws::Vector<AggregationConfiguration> m_aggregationConfiguration;

  Aws::String m_businessOverview;

  Aws::Vector<Pillar> m_pillars;

  bool m_deletionProtection{false};
  bool m_clientTokenHasBeenSet = true;
  bool m_profileArnHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_aggregationConfigurationHasBeenSet = false;
  bool m_businessOverviewHasBeenSet = false;
  bool m_pillarsHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
