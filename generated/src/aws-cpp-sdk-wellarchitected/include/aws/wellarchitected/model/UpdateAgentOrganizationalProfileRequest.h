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
#include <aws/wellarchitected/model/OrganizationalAggregationConfiguration.h>
#include <aws/wellarchitected/model/Pillar.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class UpdateAgentOrganizationalProfileRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API UpdateAgentOrganizationalProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentOrganizationalProfile"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

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
  UpdateAgentOrganizationalProfileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the organizational profile to update.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  UpdateAgentOrganizationalProfileRequest& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated display name of the organizational profile. Omit this field to
   * keep the current display name. A display name is required, so it cannot be
   * cleared.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateAgentOrganizationalProfileRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the organizational profile. Omit this field to
   * keep the current description, or supply an empty string to clear it; a cleared
   * description is read back as absent rather than as an empty string.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateAgentOrganizationalProfileRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated business overview for the organizational profile. Omit this field
   * to keep the current business overview, or supply an empty string to clear it; a
   * cleared business overview is read back as absent rather than as an empty
   * string.</p>
   */
  inline const Aws::String& GetBusinessOverview() const { return m_businessOverview; }
  inline bool BusinessOverviewHasBeenSet() const { return m_businessOverviewHasBeenSet; }
  template <typename BusinessOverviewT = Aws::String>
  void SetBusinessOverview(BusinessOverviewT&& value) {
    m_businessOverviewHasBeenSet = true;
    m_businessOverview = std::forward<BusinessOverviewT>(value);
  }
  template <typename BusinessOverviewT = Aws::String>
  UpdateAgentOrganizationalProfileRequest& WithBusinessOverview(BusinessOverviewT&& value) {
    SetBusinessOverview(std::forward<BusinessOverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated Amazon Web Services Well-Architected Framework pillars for the
   * organizational profile. Omit this field to keep the current pillars. A profile
   * must target at least one pillar, so an empty list is rejected.</p>
   */
  inline const Aws::Vector<Pillar>& GetPillars() const { return m_pillars; }
  inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
  template <typename PillarsT = Aws::Vector<Pillar>>
  void SetPillars(PillarsT&& value) {
    m_pillarsHasBeenSet = true;
    m_pillars = std::forward<PillarsT>(value);
  }
  template <typename PillarsT = Aws::Vector<Pillar>>
  UpdateAgentOrganizationalProfileRequest& WithPillars(PillarsT&& value) {
    SetPillars(std::forward<PillarsT>(value));
    return *this;
  }
  inline UpdateAgentOrganizationalProfileRequest& AddPillars(Pillar value) {
    m_pillarsHasBeenSet = true;
    m_pillars.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether deletion protection is enabled for the organizational
   * profile.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline UpdateAgentOrganizationalProfileRequest& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational monitoring boundary. Contains organizational unit or root
   * entries and individual account entries that define the scope for the profile.
   * Omit this field to keep the current boundary, or supply this structure with both
   * its <code>organizationalUnits</code> and <code>accounts</code> lists empty to
   * remove every monitored organizational unit and account. The field remains set
   * either way — an emptied boundary is read back as a structure with two empty
   * lists, not as an absent field.</p>
   */
  inline const OrganizationalAggregationConfiguration& GetOrganizationalAggregationConfiguration() const {
    return m_organizationalAggregationConfiguration;
  }
  inline bool OrganizationalAggregationConfigurationHasBeenSet() const { return m_organizationalAggregationConfigurationHasBeenSet; }
  template <typename OrganizationalAggregationConfigurationT = OrganizationalAggregationConfiguration>
  void SetOrganizationalAggregationConfiguration(OrganizationalAggregationConfigurationT&& value) {
    m_organizationalAggregationConfigurationHasBeenSet = true;
    m_organizationalAggregationConfiguration = std::forward<OrganizationalAggregationConfigurationT>(value);
  }
  template <typename OrganizationalAggregationConfigurationT = OrganizationalAggregationConfiguration>
  UpdateAgentOrganizationalProfileRequest& WithOrganizationalAggregationConfiguration(OrganizationalAggregationConfigurationT&& value) {
    SetOrganizationalAggregationConfiguration(std::forward<OrganizationalAggregationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_profileArn;

  Aws::String m_displayName;

  Aws::String m_description;

  Aws::String m_businessOverview;

  Aws::Vector<Pillar> m_pillars;

  bool m_deletionProtection{false};

  OrganizationalAggregationConfiguration m_organizationalAggregationConfiguration;
  bool m_clientTokenHasBeenSet = true;
  bool m_profileArnHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_businessOverviewHasBeenSet = false;
  bool m_pillarsHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_organizationalAggregationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
