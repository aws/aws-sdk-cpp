/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/AwsRegion.h>
#include <aws/security-ir/model/MembershipStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/security-ir/model/CustomerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/MembershipAccountsConfigurations.h>
#include <aws/security-ir/model/IncidentResponder.h>
#include <aws/security-ir/model/OptInFeature.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityIR
{
namespace Model
{
  class GetMembershipResult
  {
  public:
    AWS_SECURITYIR_API GetMembershipResult() = default;
    AWS_SECURITYIR_API GetMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API GetMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for GetMembership that provides the queried membership
     * ID.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    GetMembershipResult& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the account configured to
     * manage the membership.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetMembershipResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the region configured to
     * manage the membership.</p>
     */
    inline AwsRegion GetRegion() const { return m_region; }
    inline void SetRegion(AwsRegion value) { m_regionHasBeenSet = true; m_region = value; }
    inline GetMembershipResult& WithRegion(AwsRegion value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * name.</p>
     */
    inline const Aws::String& GetMembershipName() const { return m_membershipName; }
    template<typename MembershipNameT = Aws::String>
    void SetMembershipName(MembershipNameT&& value) { m_membershipNameHasBeenSet = true; m_membershipName = std::forward<MembershipNameT>(value); }
    template<typename MembershipNameT = Aws::String>
    GetMembershipResult& WithMembershipName(MembershipNameT&& value) { SetMembershipName(std::forward<MembershipNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the membership ARN.</p>
     */
    inline const Aws::String& GetMembershipArn() const { return m_membershipArn; }
    template<typename MembershipArnT = Aws::String>
    void SetMembershipArn(MembershipArnT&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::forward<MembershipArnT>(value); }
    template<typename MembershipArnT = Aws::String>
    GetMembershipResult& WithMembershipArn(MembershipArnT&& value) { SetMembershipArn(std::forward<MembershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the current membership
     * status.</p>
     */
    inline MembershipStatus GetMembershipStatus() const { return m_membershipStatus; }
    inline void SetMembershipStatus(MembershipStatus value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = value; }
    inline GetMembershipResult& WithMembershipStatus(MembershipStatus value) { SetMembershipStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * activation timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetMembershipActivationTimestamp() const { return m_membershipActivationTimestamp; }
    template<typename MembershipActivationTimestampT = Aws::Utils::DateTime>
    void SetMembershipActivationTimestamp(MembershipActivationTimestampT&& value) { m_membershipActivationTimestampHasBeenSet = true; m_membershipActivationTimestamp = std::forward<MembershipActivationTimestampT>(value); }
    template<typename MembershipActivationTimestampT = Aws::Utils::DateTime>
    GetMembershipResult& WithMembershipActivationTimestamp(MembershipActivationTimestampT&& value) { SetMembershipActivationTimestamp(std::forward<MembershipActivationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * name deactivation timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetMembershipDeactivationTimestamp() const { return m_membershipDeactivationTimestamp; }
    template<typename MembershipDeactivationTimestampT = Aws::Utils::DateTime>
    void SetMembershipDeactivationTimestamp(MembershipDeactivationTimestampT&& value) { m_membershipDeactivationTimestampHasBeenSet = true; m_membershipDeactivationTimestamp = std::forward<MembershipDeactivationTimestampT>(value); }
    template<typename MembershipDeactivationTimestampT = Aws::Utils::DateTime>
    GetMembershipResult& WithMembershipDeactivationTimestamp(MembershipDeactivationTimestampT&& value) { SetMembershipDeactivationTimestamp(std::forward<MembershipDeactivationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * type. Options include <code> Standalone | Organizations</code>. </p>
     */
    inline CustomerType GetCustomerType() const { return m_customerType; }
    inline void SetCustomerType(CustomerType value) { m_customerTypeHasBeenSet = true; m_customerType = value; }
    inline GetMembershipResult& WithCustomerType(CustomerType value) { SetCustomerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the number of accounts in
     * the membership.</p>
     */
    inline long long GetNumberOfAccountsCovered() const { return m_numberOfAccountsCovered; }
    inline void SetNumberOfAccountsCovered(long long value) { m_numberOfAccountsCoveredHasBeenSet = true; m_numberOfAccountsCovered = value; }
    inline GetMembershipResult& WithNumberOfAccountsCovered(long long value) { SetNumberOfAccountsCovered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * incident response team members. </p>
     */
    inline const Aws::Vector<IncidentResponder>& GetIncidentResponseTeam() const { return m_incidentResponseTeam; }
    template<typename IncidentResponseTeamT = Aws::Vector<IncidentResponder>>
    void SetIncidentResponseTeam(IncidentResponseTeamT&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam = std::forward<IncidentResponseTeamT>(value); }
    template<typename IncidentResponseTeamT = Aws::Vector<IncidentResponder>>
    GetMembershipResult& WithIncidentResponseTeam(IncidentResponseTeamT&& value) { SetIncidentResponseTeam(std::forward<IncidentResponseTeamT>(value)); return *this;}
    template<typename IncidentResponseTeamT = IncidentResponder>
    GetMembershipResult& AddIncidentResponseTeam(IncidentResponseTeamT&& value) { m_incidentResponseTeamHasBeenSet = true; m_incidentResponseTeam.emplace_back(std::forward<IncidentResponseTeamT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the if opt-in features have
     * been enabled.</p>
     */
    inline const Aws::Vector<OptInFeature>& GetOptInFeatures() const { return m_optInFeatures; }
    template<typename OptInFeaturesT = Aws::Vector<OptInFeature>>
    void SetOptInFeatures(OptInFeaturesT&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures = std::forward<OptInFeaturesT>(value); }
    template<typename OptInFeaturesT = Aws::Vector<OptInFeature>>
    GetMembershipResult& WithOptInFeatures(OptInFeaturesT&& value) { SetOptInFeatures(std::forward<OptInFeaturesT>(value)); return *this;}
    template<typename OptInFeaturesT = OptInFeature>
    GetMembershipResult& AddOptInFeatures(OptInFeaturesT&& value) { m_optInFeaturesHasBeenSet = true; m_optInFeatures.emplace_back(std::forward<OptInFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>membershipAccountsConfigurations</code> field contains the
     * configuration details for member accounts within the Amazon Web Services
     * Organizations membership structure. </p> <p>This field returns a structure
     * containing information about:</p> <ul> <li> <p>Account configurations for member
     * accounts</p> </li> <li> <p>Membership settings and preferences</p> </li> <li>
     * <p>Account-level permissions and roles</p> </li> </ul>
     */
    inline const MembershipAccountsConfigurations& GetMembershipAccountsConfigurations() const { return m_membershipAccountsConfigurations; }
    template<typename MembershipAccountsConfigurationsT = MembershipAccountsConfigurations>
    void SetMembershipAccountsConfigurations(MembershipAccountsConfigurationsT&& value) { m_membershipAccountsConfigurationsHasBeenSet = true; m_membershipAccountsConfigurations = std::forward<MembershipAccountsConfigurationsT>(value); }
    template<typename MembershipAccountsConfigurationsT = MembershipAccountsConfigurations>
    GetMembershipResult& WithMembershipAccountsConfigurations(MembershipAccountsConfigurationsT&& value) { SetMembershipAccountsConfigurations(std::forward<MembershipAccountsConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMembershipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AwsRegion m_region{AwsRegion::NOT_SET};
    bool m_regionHasBeenSet = false;

    Aws::String m_membershipName;
    bool m_membershipNameHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    MembershipStatus m_membershipStatus{MembershipStatus::NOT_SET};
    bool m_membershipStatusHasBeenSet = false;

    Aws::Utils::DateTime m_membershipActivationTimestamp{};
    bool m_membershipActivationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_membershipDeactivationTimestamp{};
    bool m_membershipDeactivationTimestampHasBeenSet = false;

    CustomerType m_customerType{CustomerType::NOT_SET};
    bool m_customerTypeHasBeenSet = false;

    long long m_numberOfAccountsCovered{0};
    bool m_numberOfAccountsCoveredHasBeenSet = false;

    Aws::Vector<IncidentResponder> m_incidentResponseTeam;
    bool m_incidentResponseTeamHasBeenSet = false;

    Aws::Vector<OptInFeature> m_optInFeatures;
    bool m_optInFeaturesHasBeenSet = false;

    MembershipAccountsConfigurations m_membershipAccountsConfigurations;
    bool m_membershipAccountsConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
