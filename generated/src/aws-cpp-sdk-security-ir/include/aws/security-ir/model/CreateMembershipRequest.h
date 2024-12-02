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
    AWS_SECURITYIR_API CreateMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembership"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An optional element used in combination with CreateMembership.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateMembershipRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateMembershipRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateMembershipRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element use in combination with CreateMembership to create a name
     * for the membership.</p>
     */
    inline const Aws::String& GetMembershipName() const{ return m_membershipName; }
    inline bool MembershipNameHasBeenSet() const { return m_membershipNameHasBeenSet; }
    inline void SetMembershipName(const Aws::String& value) { m_membershipNameHasBeenSet = true; m_membershipName = value; }
    inline void SetMembershipName(Aws::String&& value) { m_membershipNameHasBeenSet = true; m_membershipName = std::move(value); }
    inline void SetMembershipName(const char* value) { m_membershipNameHasBeenSet = true; m_membershipName.assign(value); }
    inline CreateMembershipRequest& WithMembershipName(const Aws::String& value) { SetMembershipName(value); return *this;}
    inline CreateMembershipRequest& WithMembershipName(Aws::String&& value) { SetMembershipName(std::move(value)); return *this;}
    inline CreateMembershipRequest& WithMembershipName(const char* value) { SetMembershipName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element use in combination with CreateMembership to add customer
     * incident response team members and trusted partners to the membership. </p>
     */
    inline const Aws::Vector<IncidentResponder>& GetIncidentResponseTeam() const{ return m_incidentResponseTeam; }
    inline bool IncidentResponseTeamHasBeenSet() const { return m_incidentResponseTeamHasBeenSet; }
    inline void SetIncidentResponseTeam(const Aws::Vector<IncidentResponder>& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam = value; }
    inline void SetIncidentResponseTeam(Aws::Vector<IncidentResponder>&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam = std::move(value); }
    inline CreateMembershipRequest& WithIncidentResponseTeam(const Aws::Vector<IncidentResponder>& value) { SetIncidentResponseTeam(value); return *this;}
    inline CreateMembershipRequest& WithIncidentResponseTeam(Aws::Vector<IncidentResponder>&& value) { SetIncidentResponseTeam(std::move(value)); return *this;}
    inline CreateMembershipRequest& AddIncidentResponseTeam(const IncidentResponder& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam.push_back(value); return *this; }
    inline CreateMembershipRequest& AddIncidentResponseTeam(IncidentResponder&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element to enable the monitoring and investigation opt-in features
     * for the service.</p>
     */
    inline const Aws::Vector<OptInFeature>& GetOptInFeatures() const{ return m_optInFeatures; }
    inline bool OptInFeaturesHasBeenSet() const { return m_optInFeaturesHasBeenSet; }
    inline void SetOptInFeatures(const Aws::Vector<OptInFeature>& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures = value; }
    inline void SetOptInFeatures(Aws::Vector<OptInFeature>&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures = std::move(value); }
    inline CreateMembershipRequest& WithOptInFeatures(const Aws::Vector<OptInFeature>& value) { SetOptInFeatures(value); return *this;}
    inline CreateMembershipRequest& WithOptInFeatures(Aws::Vector<OptInFeature>&& value) { SetOptInFeatures(std::move(value)); return *this;}
    inline CreateMembershipRequest& AddOptInFeatures(const OptInFeature& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures.push_back(value); return *this; }
    inline CreateMembershipRequest& AddOptInFeatures(OptInFeature&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for customer configured tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMembershipRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateMembershipRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMembershipRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateMembershipRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMembershipRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMembershipRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateMembershipRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMembershipRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMembershipRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_membershipName;
    bool m_membershipNameHasBeenSet = false;

    Aws::Vector<IncidentResponder> m_incidentResponseTeam;
    bool m_incidentResponseTeamHasBeenSet = false;

    Aws::Vector<OptInFeature> m_optInFeatures;
    bool m_optInFeaturesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
