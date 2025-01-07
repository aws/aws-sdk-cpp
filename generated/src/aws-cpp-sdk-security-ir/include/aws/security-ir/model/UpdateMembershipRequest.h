/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SECURITYIR_API UpdateMembershipRequest();

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
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline UpdateMembershipRequest& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline UpdateMembershipRequest& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline UpdateMembershipRequest& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateMembership to update the membership name.</p>
     */
    inline const Aws::String& GetMembershipName() const{ return m_membershipName; }
    inline bool MembershipNameHasBeenSet() const { return m_membershipNameHasBeenSet; }
    inline void SetMembershipName(const Aws::String& value) { m_membershipNameHasBeenSet = true; m_membershipName = value; }
    inline void SetMembershipName(Aws::String&& value) { m_membershipNameHasBeenSet = true; m_membershipName = std::move(value); }
    inline void SetMembershipName(const char* value) { m_membershipNameHasBeenSet = true; m_membershipName.assign(value); }
    inline UpdateMembershipRequest& WithMembershipName(const Aws::String& value) { SetMembershipName(value); return *this;}
    inline UpdateMembershipRequest& WithMembershipName(Aws::String&& value) { SetMembershipName(std::move(value)); return *this;}
    inline UpdateMembershipRequest& WithMembershipName(const char* value) { SetMembershipName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateMembership to update the membership name.</p>
     */
    inline const Aws::Vector<IncidentResponder>& GetIncidentResponseTeam() const{ return m_incidentResponseTeam; }
    inline bool IncidentResponseTeamHasBeenSet() const { return m_incidentResponseTeamHasBeenSet; }
    inline void SetIncidentResponseTeam(const Aws::Vector<IncidentResponder>& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam = value; }
    inline void SetIncidentResponseTeam(Aws::Vector<IncidentResponder>&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam = std::move(value); }
    inline UpdateMembershipRequest& WithIncidentResponseTeam(const Aws::Vector<IncidentResponder>& value) { SetIncidentResponseTeam(value); return *this;}
    inline UpdateMembershipRequest& WithIncidentResponseTeam(Aws::Vector<IncidentResponder>&& value) { SetIncidentResponseTeam(std::move(value)); return *this;}
    inline UpdateMembershipRequest& AddIncidentResponseTeam(const IncidentResponder& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam.push_back(value); return *this; }
    inline UpdateMembershipRequest& AddIncidentResponseTeam(IncidentResponder&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateMembership to enable or disable opt-in features
     * for the service.</p>
     */
    inline const Aws::Vector<OptInFeature>& GetOptInFeatures() const{ return m_optInFeatures; }
    inline bool OptInFeaturesHasBeenSet() const { return m_optInFeaturesHasBeenSet; }
    inline void SetOptInFeatures(const Aws::Vector<OptInFeature>& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures = value; }
    inline void SetOptInFeatures(Aws::Vector<OptInFeature>&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures = std::move(value); }
    inline UpdateMembershipRequest& WithOptInFeatures(const Aws::Vector<OptInFeature>& value) { SetOptInFeatures(value); return *this;}
    inline UpdateMembershipRequest& WithOptInFeatures(Aws::Vector<OptInFeature>&& value) { SetOptInFeatures(std::move(value)); return *this;}
    inline UpdateMembershipRequest& AddOptInFeatures(const OptInFeature& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures.push_back(value); return *this; }
    inline UpdateMembershipRequest& AddOptInFeatures(OptInFeature&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures.push_back(std::move(value)); return *this; }
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
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
