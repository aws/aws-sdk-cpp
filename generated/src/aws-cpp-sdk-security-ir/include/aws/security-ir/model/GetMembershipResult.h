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
    AWS_SECURITYIR_API GetMembershipResult();
    AWS_SECURITYIR_API GetMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API GetMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for GetMembership that provides the queried membership
     * ID.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipId.assign(value); }
    inline GetMembershipResult& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline GetMembershipResult& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline GetMembershipResult& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured account for
     * managing the membership. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }
    inline GetMembershipResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline GetMembershipResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline GetMembershipResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured region for
     * managing the membership.</p>
     */
    inline const AwsRegion& GetRegion() const{ return m_region; }
    inline void SetRegion(const AwsRegion& value) { m_region = value; }
    inline void SetRegion(AwsRegion&& value) { m_region = std::move(value); }
    inline GetMembershipResult& WithRegion(const AwsRegion& value) { SetRegion(value); return *this;}
    inline GetMembershipResult& WithRegion(AwsRegion&& value) { SetRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * name.</p>
     */
    inline const Aws::String& GetMembershipName() const{ return m_membershipName; }
    inline void SetMembershipName(const Aws::String& value) { m_membershipName = value; }
    inline void SetMembershipName(Aws::String&& value) { m_membershipName = std::move(value); }
    inline void SetMembershipName(const char* value) { m_membershipName.assign(value); }
    inline GetMembershipResult& WithMembershipName(const Aws::String& value) { SetMembershipName(value); return *this;}
    inline GetMembershipResult& WithMembershipName(Aws::String&& value) { SetMembershipName(std::move(value)); return *this;}
    inline GetMembershipResult& WithMembershipName(const char* value) { SetMembershipName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the membership ARN.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArn.assign(value); }
    inline GetMembershipResult& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline GetMembershipResult& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline GetMembershipResult& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the current membership
     * status.</p>
     */
    inline const MembershipStatus& GetMembershipStatus() const{ return m_membershipStatus; }
    inline void SetMembershipStatus(const MembershipStatus& value) { m_membershipStatus = value; }
    inline void SetMembershipStatus(MembershipStatus&& value) { m_membershipStatus = std::move(value); }
    inline GetMembershipResult& WithMembershipStatus(const MembershipStatus& value) { SetMembershipStatus(value); return *this;}
    inline GetMembershipResult& WithMembershipStatus(MembershipStatus&& value) { SetMembershipStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * activation timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetMembershipActivationTimestamp() const{ return m_membershipActivationTimestamp; }
    inline void SetMembershipActivationTimestamp(const Aws::Utils::DateTime& value) { m_membershipActivationTimestamp = value; }
    inline void SetMembershipActivationTimestamp(Aws::Utils::DateTime&& value) { m_membershipActivationTimestamp = std::move(value); }
    inline GetMembershipResult& WithMembershipActivationTimestamp(const Aws::Utils::DateTime& value) { SetMembershipActivationTimestamp(value); return *this;}
    inline GetMembershipResult& WithMembershipActivationTimestamp(Aws::Utils::DateTime&& value) { SetMembershipActivationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * name deactivation timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetMembershipDeactivationTimestamp() const{ return m_membershipDeactivationTimestamp; }
    inline void SetMembershipDeactivationTimestamp(const Aws::Utils::DateTime& value) { m_membershipDeactivationTimestamp = value; }
    inline void SetMembershipDeactivationTimestamp(Aws::Utils::DateTime&& value) { m_membershipDeactivationTimestamp = std::move(value); }
    inline GetMembershipResult& WithMembershipDeactivationTimestamp(const Aws::Utils::DateTime& value) { SetMembershipDeactivationTimestamp(value); return *this;}
    inline GetMembershipResult& WithMembershipDeactivationTimestamp(Aws::Utils::DateTime&& value) { SetMembershipDeactivationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * type. Options include <code> Standalone | Organizations</code>. </p>
     */
    inline const CustomerType& GetCustomerType() const{ return m_customerType; }
    inline void SetCustomerType(const CustomerType& value) { m_customerType = value; }
    inline void SetCustomerType(CustomerType&& value) { m_customerType = std::move(value); }
    inline GetMembershipResult& WithCustomerType(const CustomerType& value) { SetCustomerType(value); return *this;}
    inline GetMembershipResult& WithCustomerType(CustomerType&& value) { SetCustomerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the number of accounts in
     * the membership.</p>
     */
    inline long long GetNumberOfAccountsCovered() const{ return m_numberOfAccountsCovered; }
    inline void SetNumberOfAccountsCovered(long long value) { m_numberOfAccountsCovered = value; }
    inline GetMembershipResult& WithNumberOfAccountsCovered(long long value) { SetNumberOfAccountsCovered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the configured membership
     * incident response team members. </p>
     */
    inline const Aws::Vector<IncidentResponder>& GetIncidentResponseTeam() const{ return m_incidentResponseTeam; }
    inline void SetIncidentResponseTeam(const Aws::Vector<IncidentResponder>& value) { m_incidentResponseTeam = value; }
    inline void SetIncidentResponseTeam(Aws::Vector<IncidentResponder>&& value) { m_incidentResponseTeam = std::move(value); }
    inline GetMembershipResult& WithIncidentResponseTeam(const Aws::Vector<IncidentResponder>& value) { SetIncidentResponseTeam(value); return *this;}
    inline GetMembershipResult& WithIncidentResponseTeam(Aws::Vector<IncidentResponder>&& value) { SetIncidentResponseTeam(std::move(value)); return *this;}
    inline GetMembershipResult& AddIncidentResponseTeam(const IncidentResponder& value) { m_incidentResponseTeam.push_back(value); return *this; }
    inline GetMembershipResult& AddIncidentResponseTeam(IncidentResponder&& value) { m_incidentResponseTeam.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetMembership that provides the if opt-in features have
     * been enabled.</p>
     */
    inline const Aws::Vector<OptInFeature>& GetOptInFeatures() const{ return m_optInFeatures; }
    inline void SetOptInFeatures(const Aws::Vector<OptInFeature>& value) { m_optInFeatures = value; }
    inline void SetOptInFeatures(Aws::Vector<OptInFeature>&& value) { m_optInFeatures = std::move(value); }
    inline GetMembershipResult& WithOptInFeatures(const Aws::Vector<OptInFeature>& value) { SetOptInFeatures(value); return *this;}
    inline GetMembershipResult& WithOptInFeatures(Aws::Vector<OptInFeature>&& value) { SetOptInFeatures(std::move(value)); return *this;}
    inline GetMembershipResult& AddOptInFeatures(const OptInFeature& value) { m_optInFeatures.push_back(value); return *this; }
    inline GetMembershipResult& AddOptInFeatures(OptInFeature&& value) { m_optInFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;

    Aws::String m_accountId;

    AwsRegion m_region;

    Aws::String m_membershipName;

    Aws::String m_membershipArn;

    MembershipStatus m_membershipStatus;

    Aws::Utils::DateTime m_membershipActivationTimestamp;

    Aws::Utils::DateTime m_membershipDeactivationTimestamp;

    CustomerType m_customerType;

    long long m_numberOfAccountsCovered;

    Aws::Vector<IncidentResponder> m_incidentResponseTeam;

    Aws::Vector<OptInFeature> m_optInFeatures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
