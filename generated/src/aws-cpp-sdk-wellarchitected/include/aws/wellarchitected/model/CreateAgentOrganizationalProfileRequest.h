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
#include <aws/wellarchitected/model/Tag.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class CreateAgentOrganizationalProfileRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API CreateAgentOrganizationalProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAgentOrganizationalProfile"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The system name of the organizational profile.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAgentOrganizationalProfileRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the organizational profile shown to users.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateAgentOrganizationalProfileRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the organizational profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateAgentOrganizationalProfileRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business overview for this organizational profile.</p>
   */
  inline const Aws::String& GetBusinessOverview() const { return m_businessOverview; }
  inline bool BusinessOverviewHasBeenSet() const { return m_businessOverviewHasBeenSet; }
  template <typename BusinessOverviewT = Aws::String>
  void SetBusinessOverview(BusinessOverviewT&& value) {
    m_businessOverviewHasBeenSet = true;
    m_businessOverview = std::forward<BusinessOverviewT>(value);
  }
  template <typename BusinessOverviewT = Aws::String>
  CreateAgentOrganizationalProfileRequest& WithBusinessOverview(BusinessOverviewT&& value) {
    SetBusinessOverview(std::forward<BusinessOverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Well-Architected Framework pillars to associate with
   * this organizational profile.</p>
   */
  inline const Aws::Vector<Pillar>& GetPillars() const { return m_pillars; }
  inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
  template <typename PillarsT = Aws::Vector<Pillar>>
  void SetPillars(PillarsT&& value) {
    m_pillarsHasBeenSet = true;
    m_pillars = std::forward<PillarsT>(value);
  }
  template <typename PillarsT = Aws::Vector<Pillar>>
  CreateAgentOrganizationalProfileRequest& WithPillars(PillarsT&& value) {
    SetPillars(std::forward<PillarsT>(value));
    return *this;
  }
  inline CreateAgentOrganizationalProfileRequest& AddPillars(Pillar value) {
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
  inline CreateAgentOrganizationalProfileRequest& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}

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
  CreateAgentOrganizationalProfileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational monitoring boundary. Contains organizational unit or root
   * entries and individual account entries that define the scope for the
   * profile.</p>
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
  CreateAgentOrganizationalProfileRequest& WithOrganizationalAggregationConfiguration(OrganizationalAggregationConfigurationT&& value) {
    SetOrganizationalAggregationConfiguration(std::forward<OrganizationalAggregationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the organizational profile.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAgentOrganizationalProfileRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAgentOrganizationalProfileRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_displayName;

  Aws::String m_description;

  Aws::String m_businessOverview;

  Aws::Vector<Pillar> m_pillars;

  bool m_deletionProtection{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  OrganizationalAggregationConfiguration m_organizationalAggregationConfiguration;

  Aws::Vector<Tag> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_businessOverviewHasBeenSet = false;
  bool m_pillarsHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_organizationalAggregationConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
