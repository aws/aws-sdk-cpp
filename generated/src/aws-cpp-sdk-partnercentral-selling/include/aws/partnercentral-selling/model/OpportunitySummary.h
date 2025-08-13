/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/LifeCycleSummary.h>
#include <aws/partnercentral-selling/model/CustomerSummary.h>
#include <aws/partnercentral-selling/model/ProjectSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>An object that contains an <code>Opportunity</code>'s subset of
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySummary">AWS
   * API Reference</a></p>
   */
  class OpportunitySummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API OpportunitySummary() = default;
    AWS_PARTNERCENTRALSELLING_API OpportunitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API OpportunitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the catalog associated with the opportunity, either
     * <code>AWS</code> or <code>Sandbox</code>. This indicates the environment in
     * which the opportunity is managed.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    OpportunitySummary& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read-only, system-generated <code>Opportunity</code> unique identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    OpportunitySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the opportunity. This globally unique
     * identifier can be used for IAM policies and cross-service references. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    OpportunitySummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s unique identifier in the partner's
     * CRM system. This value is essential to track and reconcile because it's included
     * in the outbound payload sent back to the partner. It allows partners to link an
     * opportunity to their CRM.</p>
     */
    inline const Aws::String& GetPartnerOpportunityIdentifier() const { return m_partnerOpportunityIdentifier; }
    inline bool PartnerOpportunityIdentifierHasBeenSet() const { return m_partnerOpportunityIdentifierHasBeenSet; }
    template<typename PartnerOpportunityIdentifierT = Aws::String>
    void SetPartnerOpportunityIdentifier(PartnerOpportunityIdentifierT&& value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier = std::forward<PartnerOpportunityIdentifierT>(value); }
    template<typename PartnerOpportunityIdentifierT = Aws::String>
    OpportunitySummary& WithPartnerOpportunityIdentifier(PartnerOpportunityIdentifierT&& value) { SetPartnerOpportunityIdentifier(std::forward<PartnerOpportunityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies opportunity type as a renewal, new, or expansion.</p>
     * <p>Opportunity types:</p> <ul> <li> <p>New Opportunity: Represents a new
     * business opportunity with a potential customer that's not previously engaged
     * with your solutions or services.</p> </li> <li> <p>Renewal Opportunity:
     * Represents an opportunity to renew an existing contract or subscription with a
     * current customer, ensuring continuity of service.</p> </li> <li> <p>Expansion
     * Opportunity: Represents an opportunity to expand the scope of an existing
     * contract or subscription, either by adding new services or increasing the volume
     * of existing services for a current customer.</p> </li> </ul>
     */
    inline OpportunityType GetOpportunityType() const { return m_opportunityType; }
    inline bool OpportunityTypeHasBeenSet() const { return m_opportunityTypeHasBeenSet; }
    inline void SetOpportunityType(OpportunityType value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = value; }
    inline OpportunitySummary& WithOpportunityType(OpportunityType value) { SetOpportunityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the <code>Opportunity</code> was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    OpportunitySummary& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the <code>Opportunity</code> was last
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    OpportunitySummary& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the <code>Opportunity</code>'s lifecycle details.</p>
     */
    inline const LifeCycleSummary& GetLifeCycle() const { return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    template<typename LifeCycleT = LifeCycleSummary>
    void SetLifeCycle(LifeCycleT&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::forward<LifeCycleT>(value); }
    template<typename LifeCycleT = LifeCycleSummary>
    OpportunitySummary& WithLifeCycle(LifeCycleT&& value) { SetLifeCycle(std::forward<LifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the <code>Opportunity</code>'s customer details.</p>
     */
    inline const CustomerSummary& GetCustomer() const { return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    template<typename CustomerT = CustomerSummary>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = CustomerSummary>
    OpportunitySummary& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the <code>Opportunity</code>'s project details
     * summary.</p>
     */
    inline const ProjectSummary& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = ProjectSummary>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = ProjectSummary>
    OpportunitySummary& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_partnerOpportunityIdentifier;
    bool m_partnerOpportunityIdentifierHasBeenSet = false;

    OpportunityType m_opportunityType{OpportunityType::NOT_SET};
    bool m_opportunityTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    LifeCycleSummary m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    CustomerSummary m_customer;
    bool m_customerHasBeenSet = false;

    ProjectSummary m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
