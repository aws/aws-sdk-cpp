/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/MembershipAccountsConfigurationsUpdate.h>
#include <aws/security-ir/model/IncidentResponder.h>
#include <aws/security-ir/model/OptInFeature.h>
#include <utility>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class UpdateMembershipRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API UpdateMembershipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMembership"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element for UpdateMembership to identify the membership to
     * update.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    UpdateMembershipRequest& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateMembership to update the membership name.</p>
     */
    inline const Aws::String& GetMembershipName() const { return m_membershipName; }
    inline bool MembershipNameHasBeenSet() const { return m_membershipNameHasBeenSet; }
    template<typename MembershipNameT = Aws::String>
    void SetMembershipName(MembershipNameT&& value) { m_membershipNameHasBeenSet = true; m_membershipName = std::forward<MembershipNameT>(value); }
    template<typename MembershipNameT = Aws::String>
    UpdateMembershipRequest& WithMembershipName(MembershipNameT&& value) { SetMembershipName(std::forward<MembershipNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateMembership to update the membership name.</p>
     */
    inline const Aws::Vector<IncidentResponder>& GetIncidentResponseTeam() const { return m_incidentResponseTeam; }
    inline bool IncidentResponseTeamHasBeenSet() const { return m_incidentResponseTeamHasBeenSet; }
    template<typename IncidentResponseTeamT = Aws::Vector<IncidentResponder>>
    void SetIncidentResponseTeam(IncidentResponseTeamT&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam = std::forward<IncidentResponseTeamT>(value); }
    template<typename IncidentResponseTeamT = Aws::Vector<IncidentResponder>>
    UpdateMembershipRequest& WithIncidentResponseTeam(IncidentResponseTeamT&& value) { SetIncidentResponseTeam(std::forward<IncidentResponseTeamT>(value)); return *this;}
    template<typename IncidentResponseTeamT = IncidentResponder>
    UpdateMembershipRequest& AddIncidentResponseTeam(IncidentResponseTeamT&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam.emplace_back(std::forward<IncidentResponseTeamT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateMembership to enable or disable opt-in features
     * for the service.</p>
     */
    inline const Aws::Vector<OptInFeature>& GetOptInFeatures() const { return m_optInFeatures; }
    inline bool OptInFeaturesHasBeenSet() const { return m_optInFeaturesHasBeenSet; }
    template<typename OptInFeaturesT = Aws::Vector<OptInFeature>>
    void SetOptInFeatures(OptInFeaturesT&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures = std::forward<OptInFeaturesT>(value); }
    template<typename OptInFeaturesT = Aws::Vector<OptInFeature>>
    UpdateMembershipRequest& WithOptInFeatures(OptInFeaturesT&& value) { SetOptInFeatures(std::forward<OptInFeaturesT>(value)); return *this;}
    template<typename OptInFeaturesT = OptInFeature>
    UpdateMembershipRequest& AddOptInFeatures(OptInFeaturesT&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures.emplace_back(std::forward<OptInFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>membershipAccountsConfigurationsUpdate</code> field in the
     * <code>UpdateMembershipRequest</code> structure allows you to update the
     * configuration settings for accounts within a membership. </p> <p>This field is
     * optional and contains a structure of type
     * <code>MembershipAccountsConfigurationsUpdate </code> that specifies the updated
     * account configurations for the membership. </p>
     */
    inline const MembershipAccountsConfigurationsUpdate& GetMembershipAccountsConfigurationsUpdate() const { return m_membershipAccountsConfigurationsUpdate; }
    inline bool MembershipAccountsConfigurationsUpdateHasBeenSet() const { return m_membershipAccountsConfigurationsUpdateHasBeenSet; }
    template<typename MembershipAccountsConfigurationsUpdateT = MembershipAccountsConfigurationsUpdate>
    void SetMembershipAccountsConfigurationsUpdate(MembershipAccountsConfigurationsUpdateT&& value) { m_membershipAccountsConfigurationsUpdateHasBeenSet = true; m_membershipAccountsConfigurationsUpdate = std::forward<MembershipAccountsConfigurationsUpdateT>(value); }
    template<typename MembershipAccountsConfigurationsUpdateT = MembershipAccountsConfigurationsUpdate>
    UpdateMembershipRequest& WithMembershipAccountsConfigurationsUpdate(MembershipAccountsConfigurationsUpdateT&& value) { SetMembershipAccountsConfigurationsUpdate(std::forward<MembershipAccountsConfigurationsUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>undoMembershipCancellation</code> parameter is a boolean flag that
     * indicates whether to reverse a previously requested membership cancellation.
     * When set to true, this will revoke the cancellation request and maintain the
     * membership status. </p> <p>This parameter is optional and can be used in
     * scenarios where you need to restore a membership that was marked for
     * cancellation but hasn't been fully terminated yet. </p> <ul> <li> <p>If set to
     * <code>true</code>, the cancellation request will be revoked </p> </li> <li>
     * <p>If set to <code>false</code> the service will throw a ValidationException.
     * </p> </li> </ul>
     */
    inline bool GetUndoMembershipCancellation() const { return m_undoMembershipCancellation; }
    inline bool UndoMembershipCancellationHasBeenSet() const { return m_undoMembershipCancellationHasBeenSet; }
    inline void SetUndoMembershipCancellation(bool value) { m_undoMembershipCancellationHasBeenSet = true; m_undoMembershipCancellation = value; }
    inline UpdateMembershipRequest& WithUndoMembershipCancellation(bool value) { SetUndoMembershipCancellation(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipName;
    bool m_membershipNameHasBeenSet = false;

    Aws::Vector<IncidentResponder> m_incidentResponseTeam;
    bool m_incidentResponseTeamHasBeenSet = false;

    Aws::Vector<OptInFeature> m_optInFeatures;
    bool m_optInFeaturesHasBeenSet = false;

    MembershipAccountsConfigurationsUpdate m_membershipAccountsConfigurationsUpdate;
    bool m_membershipAccountsConfigurationsUpdateHasBeenSet = false;

    bool m_undoMembershipCancellation{false};
    bool m_undoMembershipCancellationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
