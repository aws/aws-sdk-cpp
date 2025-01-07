/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/CustomerSummary.h>
#include <aws/partnercentral-selling/model/LifeCycleSummary.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
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
    AWS_PARTNERCENTRALSELLING_API OpportunitySummary();
    AWS_PARTNERCENTRALSELLING_API OpportunitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API OpportunitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the opportunity. This globally unique
     * identifier can be used for IAM policies and cross-service references. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline OpportunitySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline OpportunitySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline OpportunitySummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the catalog associated with the opportunity, either
     * <code>AWS</code> or <code>Sandbox</code>. This indicates the environment in
     * which the opportunity is managed.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline OpportunitySummary& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline OpportunitySummary& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline OpportunitySummary& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the <code>Opportunity</code> was last
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline OpportunitySummary& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline OpportunitySummary& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the <code>Opportunity</code>'s customer details.</p>
     */
    inline const CustomerSummary& GetCustomer() const{ return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    inline void SetCustomer(const CustomerSummary& value) { m_customerHasBeenSet = true; m_customer = value; }
    inline void SetCustomer(CustomerSummary&& value) { m_customerHasBeenSet = true; m_customer = std::move(value); }
    inline OpportunitySummary& WithCustomer(const CustomerSummary& value) { SetCustomer(value); return *this;}
    inline OpportunitySummary& WithCustomer(CustomerSummary&& value) { SetCustomer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read-only, system-generated <code>Opportunity</code> unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline OpportunitySummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline OpportunitySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline OpportunitySummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the <code>Opportunity</code> was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline OpportunitySummary& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline OpportunitySummary& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the <code>Opportunity</code>'s lifecycle details.</p>
     */
    inline const LifeCycleSummary& GetLifeCycle() const{ return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    inline void SetLifeCycle(const LifeCycleSummary& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }
    inline void SetLifeCycle(LifeCycleSummary&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }
    inline OpportunitySummary& WithLifeCycle(const LifeCycleSummary& value) { SetLifeCycle(value); return *this;}
    inline OpportunitySummary& WithLifeCycle(LifeCycleSummary&& value) { SetLifeCycle(std::move(value)); return *this;}
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
    inline const OpportunityType& GetOpportunityType() const{ return m_opportunityType; }
    inline bool OpportunityTypeHasBeenSet() const { return m_opportunityTypeHasBeenSet; }
    inline void SetOpportunityType(const OpportunityType& value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = value; }
    inline void SetOpportunityType(OpportunityType&& value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = std::move(value); }
    inline OpportunitySummary& WithOpportunityType(const OpportunityType& value) { SetOpportunityType(value); return *this;}
    inline OpportunitySummary& WithOpportunityType(OpportunityType&& value) { SetOpportunityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s unique identifier in the partner's
     * CRM system. This value is essential to track and reconcile because it's included
     * in the outbound payload sent back to the partner. It allows partners to link an
     * opportunity to their CRM.</p>
     */
    inline const Aws::String& GetPartnerOpportunityIdentifier() const{ return m_partnerOpportunityIdentifier; }
    inline bool PartnerOpportunityIdentifierHasBeenSet() const { return m_partnerOpportunityIdentifierHasBeenSet; }
    inline void SetPartnerOpportunityIdentifier(const Aws::String& value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier = value; }
    inline void SetPartnerOpportunityIdentifier(Aws::String&& value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier = std::move(value); }
    inline void SetPartnerOpportunityIdentifier(const char* value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier.assign(value); }
    inline OpportunitySummary& WithPartnerOpportunityIdentifier(const Aws::String& value) { SetPartnerOpportunityIdentifier(value); return *this;}
    inline OpportunitySummary& WithPartnerOpportunityIdentifier(Aws::String&& value) { SetPartnerOpportunityIdentifier(std::move(value)); return *this;}
    inline OpportunitySummary& WithPartnerOpportunityIdentifier(const char* value) { SetPartnerOpportunityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the <code>Opportunity</code>'s project details
     * summary.</p>
     */
    inline const ProjectSummary& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const ProjectSummary& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(ProjectSummary&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline OpportunitySummary& WithProject(const ProjectSummary& value) { SetProject(value); return *this;}
    inline OpportunitySummary& WithProject(ProjectSummary&& value) { SetProject(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    CustomerSummary m_customer;
    bool m_customerHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    LifeCycleSummary m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    OpportunityType m_opportunityType;
    bool m_opportunityTypeHasBeenSet = false;

    Aws::String m_partnerOpportunityIdentifier;
    bool m_partnerOpportunityIdentifierHasBeenSet = false;

    ProjectSummary m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
