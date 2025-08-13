/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/NationalSecurity.h>
#include <aws/partnercentral-selling/model/Customer.h>
#include <aws/partnercentral-selling/model/Project.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
#include <aws/partnercentral-selling/model/Marketing.h>
#include <aws/partnercentral-selling/model/SoftwareRevenue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/RelatedEntityIdentifiers.h>
#include <aws/partnercentral-selling/model/LifeCycle.h>
#include <aws/partnercentral-selling/model/PrimaryNeedFromAws.h>
#include <aws/partnercentral-selling/model/Contact.h>
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
    AWS_PARTNERCENTRALSELLING_API GetOpportunityResult() = default;
    AWS_PARTNERCENTRALSELLING_API GetOpportunityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetOpportunityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the opportunity information is retrieved
     * from. Use <code>AWS</code> to retrieve opportunities in the Amazon Web Services
     * catalog, and <code>Sandbox</code> to retrieve opportunities in a secure and
     * isolated testing environment.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    GetOpportunityResult& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
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
    inline const Aws::Vector<PrimaryNeedFromAws>& GetPrimaryNeedsFromAws() const { return m_primaryNeedsFromAws; }
    template<typename PrimaryNeedsFromAwsT = Aws::Vector<PrimaryNeedFromAws>>
    void SetPrimaryNeedsFromAws(PrimaryNeedsFromAwsT&& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws = std::forward<PrimaryNeedsFromAwsT>(value); }
    template<typename PrimaryNeedsFromAwsT = Aws::Vector<PrimaryNeedFromAws>>
    GetOpportunityResult& WithPrimaryNeedsFromAws(PrimaryNeedsFromAwsT&& value) { SetPrimaryNeedsFromAws(std::forward<PrimaryNeedsFromAwsT>(value)); return *this;}
    inline GetOpportunityResult& AddPrimaryNeedsFromAws(PrimaryNeedFromAws value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>Opportunity</code> pertains to a national
     * security project. This field must be set to <code>true</code> only when the
     * customer's industry is <i>Government</i>. Additional privacy and security
     * measures apply during the review and management process for opportunities marked
     * as <code>NationalSecurity</code>.</p>
     */
    inline NationalSecurity GetNationalSecurity() const { return m_nationalSecurity; }
    inline void SetNationalSecurity(NationalSecurity value) { m_nationalSecurityHasBeenSet = true; m_nationalSecurity = value; }
    inline GetOpportunityResult& WithNationalSecurity(NationalSecurity value) { SetNationalSecurity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the opportunity's unique identifier in the partner's CRM system.
     * This value is essential to track and reconcile because it's included in the
     * outbound payload sent back to the partner.</p>
     */
    inline const Aws::String& GetPartnerOpportunityIdentifier() const { return m_partnerOpportunityIdentifier; }
    template<typename PartnerOpportunityIdentifierT = Aws::String>
    void SetPartnerOpportunityIdentifier(PartnerOpportunityIdentifierT&& value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier = std::forward<PartnerOpportunityIdentifierT>(value); }
    template<typename PartnerOpportunityIdentifierT = Aws::String>
    GetOpportunityResult& WithPartnerOpportunityIdentifier(PartnerOpportunityIdentifierT&& value) { SetPartnerOpportunityIdentifier(std::forward<PartnerOpportunityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details of the customer associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Customer& GetCustomer() const { return m_customer; }
    template<typename CustomerT = Customer>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = Customer>
    GetOpportunityResult& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains project details summary for the
     * <code>Opportunity</code>.</p>
     */
    inline const Project& GetProject() const { return m_project; }
    template<typename ProjectT = Project>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Project>
    GetOpportunityResult& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
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
    inline OpportunityType GetOpportunityType() const { return m_opportunityType; }
    inline void SetOpportunityType(OpportunityType value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = value; }
    inline GetOpportunityResult& WithOpportunityType(OpportunityType value) { SetOpportunityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains marketing details for the
     * <code>Opportunity</code>.</p>
     */
    inline const Marketing& GetMarketing() const { return m_marketing; }
    template<typename MarketingT = Marketing>
    void SetMarketing(MarketingT&& value) { m_marketingHasBeenSet = true; m_marketing = std::forward<MarketingT>(value); }
    template<typename MarketingT = Marketing>
    GetOpportunityResult& WithMarketing(MarketingT&& value) { SetMarketing(std::forward<MarketingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details of a customer's procurement terms. Required only for
     * partners in eligible programs.</p>
     */
    inline const SoftwareRevenue& GetSoftwareRevenue() const { return m_softwareRevenue; }
    template<typename SoftwareRevenueT = SoftwareRevenue>
    void SetSoftwareRevenue(SoftwareRevenueT&& value) { m_softwareRevenueHasBeenSet = true; m_softwareRevenue = std::forward<SoftwareRevenueT>(value); }
    template<typename SoftwareRevenueT = SoftwareRevenue>
    GetOpportunityResult& WithSoftwareRevenue(SoftwareRevenueT&& value) { SetSoftwareRevenue(std::forward<SoftwareRevenueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read-only, system generated <code>Opportunity</code> unique identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetOpportunityResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the opportunity.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetOpportunityResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the opportunity was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    GetOpportunityResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the <code>Opportunity</code> was last
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetOpportunityResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the associations of other entities with the
     * opportunity. These entities include identifiers for <code>AWSProducts</code>,
     * <code>Partner Solutions</code>, and <code>AWSMarketplaceOffers</code>.</p>
     */
    inline const RelatedEntityIdentifiers& GetRelatedEntityIdentifiers() const { return m_relatedEntityIdentifiers; }
    template<typename RelatedEntityIdentifiersT = RelatedEntityIdentifiers>
    void SetRelatedEntityIdentifiers(RelatedEntityIdentifiersT&& value) { m_relatedEntityIdentifiersHasBeenSet = true; m_relatedEntityIdentifiers = std::forward<RelatedEntityIdentifiersT>(value); }
    template<typename RelatedEntityIdentifiersT = RelatedEntityIdentifiers>
    GetOpportunityResult& WithRelatedEntityIdentifiers(RelatedEntityIdentifiersT&& value) { SetRelatedEntityIdentifiers(std::forward<RelatedEntityIdentifiersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains lifecycle details for the
     * <code>Opportunity</code>.</p>
     */
    inline const LifeCycle& GetLifeCycle() const { return m_lifeCycle; }
    template<typename LifeCycleT = LifeCycle>
    void SetLifeCycle(LifeCycleT&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::forward<LifeCycleT>(value); }
    template<typename LifeCycleT = LifeCycle>
    GetOpportunityResult& WithLifeCycle(LifeCycleT&& value) { SetLifeCycle(std::forward<LifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the internal team handling the opportunity. Specify the members
     * involved in collaborating on this opportunity within the partner's
     * organization.</p>
     */
    inline const Aws::Vector<Contact>& GetOpportunityTeam() const { return m_opportunityTeam; }
    template<typename OpportunityTeamT = Aws::Vector<Contact>>
    void SetOpportunityTeam(OpportunityTeamT&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam = std::forward<OpportunityTeamT>(value); }
    template<typename OpportunityTeamT = Aws::Vector<Contact>>
    GetOpportunityResult& WithOpportunityTeam(OpportunityTeamT&& value) { SetOpportunityTeam(std::forward<OpportunityTeamT>(value)); return *this;}
    template<typename OpportunityTeamT = Contact>
    GetOpportunityResult& AddOpportunityTeam(OpportunityTeamT&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam.emplace_back(std::forward<OpportunityTeamT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOpportunityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<PrimaryNeedFromAws> m_primaryNeedsFromAws;
    bool m_primaryNeedsFromAwsHasBeenSet = false;

    NationalSecurity m_nationalSecurity{NationalSecurity::NOT_SET};
    bool m_nationalSecurityHasBeenSet = false;

    Aws::String m_partnerOpportunityIdentifier;
    bool m_partnerOpportunityIdentifierHasBeenSet = false;

    Customer m_customer;
    bool m_customerHasBeenSet = false;

    Project m_project;
    bool m_projectHasBeenSet = false;

    OpportunityType m_opportunityType{OpportunityType::NOT_SET};
    bool m_opportunityTypeHasBeenSet = false;

    Marketing m_marketing;
    bool m_marketingHasBeenSet = false;

    SoftwareRevenue m_softwareRevenue;
    bool m_softwareRevenueHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    RelatedEntityIdentifiers m_relatedEntityIdentifiers;
    bool m_relatedEntityIdentifiersHasBeenSet = false;

    LifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    Aws::Vector<Contact> m_opportunityTeam;
    bool m_opportunityTeamHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
