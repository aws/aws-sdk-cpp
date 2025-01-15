/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/Customer.h>
#include <aws/partnercentral-selling/model/LifeCycle.h>
#include <aws/partnercentral-selling/model/Marketing.h>
#include <aws/partnercentral-selling/model/NationalSecurity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
#include <aws/partnercentral-selling/model/Project.h>
#include <aws/partnercentral-selling/model/RelatedEntityIdentifiers.h>
#include <aws/partnercentral-selling/model/SoftwareRevenue.h>
#include <aws/partnercentral-selling/model/Contact.h>
#include <aws/partnercentral-selling/model/PrimaryNeedFromAws.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class GetOpportunityResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetOpportunityResult();
    AWS_PARTNERCENTRALSELLING_API GetOpportunityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetOpportunityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the opportunity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetOpportunityResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetOpportunityResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetOpportunityResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the opportunity information is retrieved
     * from. Use <code>AWS</code> to retrieve opportunities in the Amazon Web Services
     * catalog, and <code>Sandbox</code> to retrieve opportunities in a secure and
     * isolated testing environment.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline void SetCatalog(const Aws::String& value) { m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalog.assign(value); }
    inline GetOpportunityResult& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline GetOpportunityResult& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline GetOpportunityResult& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the <code>Opportunity</code> was last
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline GetOpportunityResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline GetOpportunityResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details of the customer associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Customer& GetCustomer() const{ return m_customer; }
    inline void SetCustomer(const Customer& value) { m_customer = value; }
    inline void SetCustomer(Customer&& value) { m_customer = std::move(value); }
    inline GetOpportunityResult& WithCustomer(const Customer& value) { SetCustomer(value); return *this;}
    inline GetOpportunityResult& WithCustomer(Customer&& value) { SetCustomer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read-only, system generated <code>Opportunity</code> unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetOpportunityResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetOpportunityResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetOpportunityResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the opportunity was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline GetOpportunityResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline GetOpportunityResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains lifecycle details for the
     * <code>Opportunity</code>.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycle = value; }
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycle = std::move(value); }
    inline GetOpportunityResult& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}
    inline GetOpportunityResult& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains marketing details for the
     * <code>Opportunity</code>.</p>
     */
    inline const Marketing& GetMarketing() const{ return m_marketing; }
    inline void SetMarketing(const Marketing& value) { m_marketing = value; }
    inline void SetMarketing(Marketing&& value) { m_marketing = std::move(value); }
    inline GetOpportunityResult& WithMarketing(const Marketing& value) { SetMarketing(value); return *this;}
    inline GetOpportunityResult& WithMarketing(Marketing&& value) { SetMarketing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>Opportunity</code> pertains to a national
     * security project. This field must be set to <code>true</code> only when the
     * customer's industry is <i>Government</i>. Additional privacy and security
     * measures apply during the review and management process for opportunities marked
     * as <code>NationalSecurity</code>.</p>
     */
    inline const NationalSecurity& GetNationalSecurity() const{ return m_nationalSecurity; }
    inline void SetNationalSecurity(const NationalSecurity& value) { m_nationalSecurity = value; }
    inline void SetNationalSecurity(NationalSecurity&& value) { m_nationalSecurity = std::move(value); }
    inline GetOpportunityResult& WithNationalSecurity(const NationalSecurity& value) { SetNationalSecurity(value); return *this;}
    inline GetOpportunityResult& WithNationalSecurity(NationalSecurity&& value) { SetNationalSecurity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the internal team handling the opportunity. Specify the members
     * involved in collaborating on this opportunity within the partner's
     * organization.</p>
     */
    inline const Aws::Vector<Contact>& GetOpportunityTeam() const{ return m_opportunityTeam; }
    inline void SetOpportunityTeam(const Aws::Vector<Contact>& value) { m_opportunityTeam = value; }
    inline void SetOpportunityTeam(Aws::Vector<Contact>&& value) { m_opportunityTeam = std::move(value); }
    inline GetOpportunityResult& WithOpportunityTeam(const Aws::Vector<Contact>& value) { SetOpportunityTeam(value); return *this;}
    inline GetOpportunityResult& WithOpportunityTeam(Aws::Vector<Contact>&& value) { SetOpportunityTeam(std::move(value)); return *this;}
    inline GetOpportunityResult& AddOpportunityTeam(const Contact& value) { m_opportunityTeam.push_back(value); return *this; }
    inline GetOpportunityResult& AddOpportunityTeam(Contact&& value) { m_opportunityTeam.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the opportunity type as renewal, new, or expansion.</p>
     * <p>Opportunity types:</p> <ul> <li> <p>New opportunity: Represents a new
     * business opportunity with a potential customer that's not previously engaged
     * with your solutions or services.</p> </li> <li> <p>Renewal opportunity:
     * Represents an opportunity to renew an existing contract or subscription with a
     * current customer, which helps to ensure service continuity.</p> </li> <li>
     * <p>Expansion opportunity: Represents an opportunity to expand the scope of a
     * customer's contract or subscription, either by adding new services or increasing
     * the volume of existing services.</p> </li> </ul>
     */
    inline const OpportunityType& GetOpportunityType() const{ return m_opportunityType; }
    inline void SetOpportunityType(const OpportunityType& value) { m_opportunityType = value; }
    inline void SetOpportunityType(OpportunityType&& value) { m_opportunityType = std::move(value); }
    inline GetOpportunityResult& WithOpportunityType(const OpportunityType& value) { SetOpportunityType(value); return *this;}
    inline GetOpportunityResult& WithOpportunityType(OpportunityType&& value) { SetOpportunityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the opportunity's unique identifier in the partner's CRM system.
     * This value is essential to track and reconcile because it's included in the
     * outbound payload sent back to the partner.</p>
     */
    inline const Aws::String& GetPartnerOpportunityIdentifier() const{ return m_partnerOpportunityIdentifier; }
    inline void SetPartnerOpportunityIdentifier(const Aws::String& value) { m_partnerOpportunityIdentifier = value; }
    inline void SetPartnerOpportunityIdentifier(Aws::String&& value) { m_partnerOpportunityIdentifier = std::move(value); }
    inline void SetPartnerOpportunityIdentifier(const char* value) { m_partnerOpportunityIdentifier.assign(value); }
    inline GetOpportunityResult& WithPartnerOpportunityIdentifier(const Aws::String& value) { SetPartnerOpportunityIdentifier(value); return *this;}
    inline GetOpportunityResult& WithPartnerOpportunityIdentifier(Aws::String&& value) { SetPartnerOpportunityIdentifier(std::move(value)); return *this;}
    inline GetOpportunityResult& WithPartnerOpportunityIdentifier(const char* value) { SetPartnerOpportunityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the type of support the partner needs from Amazon Web
     * Services.</p> <p>Valid values:</p> <ul> <li> <p>Cosell—Architectural Validation:
     * Confirmation from Amazon Web Services that the partner's proposed solution
     * architecture is aligned with Amazon Web Services best practices and poses
     * minimal architectural risks.</p> </li> <li> <p>Cosell—Business Presentation:
     * Request Amazon Web Services seller's participation in a joint customer
     * presentation.</p> </li> <li> <p>Cosell—Competitive Information: Access to Amazon
     * Web Services competitive resources and support for the partner's proposed
     * solution.</p> </li> <li> <p>Cosell—Pricing Assistance: Connect with an Amazon
     * Web Services seller for support situations where a partner may be receiving an
     * upfront discount on a service (for example: EDP deals).</p> </li> <li>
     * <p>Cosell—Technical Consultation: Connect with an Amazon Web Services Solutions
     * Architect to address the partner's questions about the proposed solution.</p>
     * </li> <li> <p>Cosell—Total Cost of Ownership Evaluation: Assistance with quoting
     * different cost savings of proposed solutions on Amazon Web Services versus
     * on-premises or a traditional hosting environment.</p> </li> <li> <p>Cosell—Deal
     * Support: Request Amazon Web Services seller's support to progress the
     * opportunity (for example: joint customer call, strategic positioning).</p> </li>
     * <li> <p>Cosell—Support for Public Tender/RFx: Opportunity related to the public
     * sector where the partner needs Amazon Web Services RFx support.</p> </li> </ul>
     */
    inline const Aws::Vector<PrimaryNeedFromAws>& GetPrimaryNeedsFromAws() const{ return m_primaryNeedsFromAws; }
    inline void SetPrimaryNeedsFromAws(const Aws::Vector<PrimaryNeedFromAws>& value) { m_primaryNeedsFromAws = value; }
    inline void SetPrimaryNeedsFromAws(Aws::Vector<PrimaryNeedFromAws>&& value) { m_primaryNeedsFromAws = std::move(value); }
    inline GetOpportunityResult& WithPrimaryNeedsFromAws(const Aws::Vector<PrimaryNeedFromAws>& value) { SetPrimaryNeedsFromAws(value); return *this;}
    inline GetOpportunityResult& WithPrimaryNeedsFromAws(Aws::Vector<PrimaryNeedFromAws>&& value) { SetPrimaryNeedsFromAws(std::move(value)); return *this;}
    inline GetOpportunityResult& AddPrimaryNeedsFromAws(const PrimaryNeedFromAws& value) { m_primaryNeedsFromAws.push_back(value); return *this; }
    inline GetOpportunityResult& AddPrimaryNeedsFromAws(PrimaryNeedFromAws&& value) { m_primaryNeedsFromAws.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains project details summary for the
     * <code>Opportunity</code>.</p>
     */
    inline const Project& GetProject() const{ return m_project; }
    inline void SetProject(const Project& value) { m_project = value; }
    inline void SetProject(Project&& value) { m_project = std::move(value); }
    inline GetOpportunityResult& WithProject(const Project& value) { SetProject(value); return *this;}
    inline GetOpportunityResult& WithProject(Project&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the associations of other entities with the
     * opportunity. These entities include identifiers for <code>AWSProducts</code>,
     * <code>Partner Solutions</code>, and <code>AWSMarketplaceOffers</code>.</p>
     */
    inline const RelatedEntityIdentifiers& GetRelatedEntityIdentifiers() const{ return m_relatedEntityIdentifiers; }
    inline void SetRelatedEntityIdentifiers(const RelatedEntityIdentifiers& value) { m_relatedEntityIdentifiers = value; }
    inline void SetRelatedEntityIdentifiers(RelatedEntityIdentifiers&& value) { m_relatedEntityIdentifiers = std::move(value); }
    inline GetOpportunityResult& WithRelatedEntityIdentifiers(const RelatedEntityIdentifiers& value) { SetRelatedEntityIdentifiers(value); return *this;}
    inline GetOpportunityResult& WithRelatedEntityIdentifiers(RelatedEntityIdentifiers&& value) { SetRelatedEntityIdentifiers(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details of a customer's procurement terms. Required only for
     * partners in eligible programs.</p>
     */
    inline const SoftwareRevenue& GetSoftwareRevenue() const{ return m_softwareRevenue; }
    inline void SetSoftwareRevenue(const SoftwareRevenue& value) { m_softwareRevenue = value; }
    inline void SetSoftwareRevenue(SoftwareRevenue&& value) { m_softwareRevenue = std::move(value); }
    inline GetOpportunityResult& WithSoftwareRevenue(const SoftwareRevenue& value) { SetSoftwareRevenue(value); return *this;}
    inline GetOpportunityResult& WithSoftwareRevenue(SoftwareRevenue&& value) { SetSoftwareRevenue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOpportunityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOpportunityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOpportunityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_catalog;

    Aws::Utils::DateTime m_createdDate;

    Customer m_customer;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastModifiedDate;

    LifeCycle m_lifeCycle;

    Marketing m_marketing;

    NationalSecurity m_nationalSecurity;

    Aws::Vector<Contact> m_opportunityTeam;

    OpportunityType m_opportunityType;

    Aws::String m_partnerOpportunityIdentifier;

    Aws::Vector<PrimaryNeedFromAws> m_primaryNeedsFromAws;

    Project m_project;

    RelatedEntityIdentifiers m_relatedEntityIdentifiers;

    SoftwareRevenue m_softwareRevenue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
