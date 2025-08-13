/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/security-ir/model/IncidentResponder.h>
#include <aws/security-ir/model/OptInFeature.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class CreateMembershipRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API CreateMembershipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembership"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> <p>The <code>clientToken</code> field is an idempotency key used to
     * ensure that repeated attempts for a single action will be ignored by the server
     * during retries. A caller supplied unique ID (typically a UUID) should be
     * provided. </p> </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateMembershipRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateMembership to create a name
     * for the membership.</p>
     */
    inline const Aws::String& GetMembershipName() const { return m_membershipName; }
    inline bool MembershipNameHasBeenSet() const { return m_membershipNameHasBeenSet; }
    template<typename MembershipNameT = Aws::String>
    void SetMembershipName(MembershipNameT&& value) { m_membershipNameHasBeenSet = true; m_membershipName = std::forward<MembershipNameT>(value); }
    template<typename MembershipNameT = Aws::String>
    CreateMembershipRequest& WithMembershipName(MembershipNameT&& value) { SetMembershipName(std::forward<MembershipNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateMembership to add customer
     * incident response team members and trusted partners to the membership. </p>
     */
    inline const Aws::Vector<IncidentResponder>& GetIncidentResponseTeam() const { return m_incidentResponseTeam; }
    inline bool IncidentResponseTeamHasBeenSet() const { return m_incidentResponseTeamHasBeenSet; }
    template<typename IncidentResponseTeamT = Aws::Vector<IncidentResponder>>
    void SetIncidentResponseTeam(IncidentResponseTeamT&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam = std::forward<IncidentResponseTeamT>(value); }
    template<typename IncidentResponseTeamT = Aws::Vector<IncidentResponder>>
    CreateMembershipRequest& WithIncidentResponseTeam(IncidentResponseTeamT&& value) { SetIncidentResponseTeam(std::forward<IncidentResponseTeamT>(value)); return *this;}
    template<typename IncidentResponseTeamT = IncidentResponder>
    CreateMembershipRequest& AddIncidentResponseTeam(IncidentResponseTeamT&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam.emplace_back(std::forward<IncidentResponseTeamT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element to enable the monitoring and investigation opt-in features
     * for the service.</p>
     */
    inline const Aws::Vector<OptInFeature>& GetOptInFeatures() const { return m_optInFeatures; }
    inline bool OptInFeaturesHasBeenSet() const { return m_optInFeaturesHasBeenSet; }
    template<typename OptInFeaturesT = Aws::Vector<OptInFeature>>
    void SetOptInFeatures(OptInFeaturesT&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures = std::forward<OptInFeaturesT>(value); }
    template<typename OptInFeaturesT = Aws::Vector<OptInFeature>>
    CreateMembershipRequest& WithOptInFeatures(OptInFeaturesT&& value) { SetOptInFeatures(std::forward<OptInFeaturesT>(value)); return *this;}
    template<typename OptInFeaturesT = OptInFeature>
    CreateMembershipRequest& AddOptInFeatures(OptInFeaturesT&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures.emplace_back(std::forward<OptInFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for customer configured tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMembershipRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMembershipRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <code>coverEntireOrganization</code> parameter is a boolean flag that
     * determines whether the membership should be applied to the entire Amazon Web
     * Services Organization. When set to true, the membership will be created for all
     * accounts within the organization. When set to false, the membership will only be
     * created for specified accounts. </p> <p>This parameter is optional. If not
     * specified, the default value is false.</p> <ul> <li> <p>If set to <i>true</i>:
     * The membership will automatically include all existing and future accounts in
     * the Amazon Web Services Organization. </p> </li> <li> <p>If set to <i>false</i>:
     * The membership will only apply to explicitly specified accounts. </p> </li>
     * </ul>
     */
    inline bool GetCoverEntireOrganization() const { return m_coverEntireOrganization; }
    inline bool CoverEntireOrganizationHasBeenSet() const { return m_coverEntireOrganizationHasBeenSet; }
    inline void SetCoverEntireOrganization(bool value) { m_coverEntireOrganizationHasBeenSet = true; m_coverEntireOrganization = value; }
    inline CreateMembershipRequest& WithCoverEntireOrganization(bool value) { SetCoverEntireOrganization(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_membershipName;
    bool m_membershipNameHasBeenSet = false;

    Aws::Vector<IncidentResponder> m_incidentResponseTeam;
    bool m_incidentResponseTeamHasBeenSet = false;

    Aws::Vector<OptInFeature> m_optInFeatures;
    bool m_optInFeaturesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_coverEntireOrganization{false};
    bool m_coverEntireOrganizationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
