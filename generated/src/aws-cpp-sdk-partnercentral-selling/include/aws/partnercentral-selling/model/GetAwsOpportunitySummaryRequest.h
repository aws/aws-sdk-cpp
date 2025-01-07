﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class GetAwsOpportunitySummaryRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetAwsOpportunitySummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAwsOpportunitySummary"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog in which the AWS Opportunity is located. Accepted
     * values include <code>AWS</code> for production opportunities or
     * <code>Sandbox</code> for testing purposes. The catalog determines which
     * environment the opportunity data is pulled from.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline GetAwsOpportunitySummaryRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline GetAwsOpportunitySummaryRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline GetAwsOpportunitySummaryRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the related partner opportunity. Use this field to
     * correlate an AWS opportunity with its corresponding partner opportunity.</p>
     */
    inline const Aws::String& GetRelatedOpportunityIdentifier() const{ return m_relatedOpportunityIdentifier; }
    inline bool RelatedOpportunityIdentifierHasBeenSet() const { return m_relatedOpportunityIdentifierHasBeenSet; }
    inline void SetRelatedOpportunityIdentifier(const Aws::String& value) { m_relatedOpportunityIdentifierHasBeenSet = true; m_relatedOpportunityIdentifier = value; }
    inline void SetRelatedOpportunityIdentifier(Aws::String&& value) { m_relatedOpportunityIdentifierHasBeenSet = true; m_relatedOpportunityIdentifier = std::move(value); }
    inline void SetRelatedOpportunityIdentifier(const char* value) { m_relatedOpportunityIdentifierHasBeenSet = true; m_relatedOpportunityIdentifier.assign(value); }
    inline GetAwsOpportunitySummaryRequest& WithRelatedOpportunityIdentifier(const Aws::String& value) { SetRelatedOpportunityIdentifier(value); return *this;}
    inline GetAwsOpportunitySummaryRequest& WithRelatedOpportunityIdentifier(Aws::String&& value) { SetRelatedOpportunityIdentifier(std::move(value)); return *this;}
    inline GetAwsOpportunitySummaryRequest& WithRelatedOpportunityIdentifier(const char* value) { SetRelatedOpportunityIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_relatedOpportunityIdentifier;
    bool m_relatedOpportunityIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
