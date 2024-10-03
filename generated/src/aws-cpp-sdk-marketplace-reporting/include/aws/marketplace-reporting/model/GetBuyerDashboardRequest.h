/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-reporting/MarketplaceReporting_EXPORTS.h>
#include <aws/marketplace-reporting/MarketplaceReportingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MarketplaceReporting
{
namespace Model
{

  /**
   */
  class GetBuyerDashboardRequest : public MarketplaceReportingRequest
  {
  public:
    AWS_MARKETPLACEREPORTING_API GetBuyerDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBuyerDashboard"; }

    AWS_MARKETPLACEREPORTING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the requested dashboard.</p>
     */
    inline const Aws::String& GetDashboardIdentifier() const{ return m_dashboardIdentifier; }
    inline bool DashboardIdentifierHasBeenSet() const { return m_dashboardIdentifierHasBeenSet; }
    inline void SetDashboardIdentifier(const Aws::String& value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier = value; }
    inline void SetDashboardIdentifier(Aws::String&& value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier = std::move(value); }
    inline void SetDashboardIdentifier(const char* value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier.assign(value); }
    inline GetBuyerDashboardRequest& WithDashboardIdentifier(const Aws::String& value) { SetDashboardIdentifier(value); return *this;}
    inline GetBuyerDashboardRequest& WithDashboardIdentifier(Aws::String&& value) { SetDashboardIdentifier(std::move(value)); return *this;}
    inline GetBuyerDashboardRequest& WithDashboardIdentifier(const char* value) { SetDashboardIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fully qualified domains that you add to the allow list for access to the
     * generated URL that is then embedded. You can list up to two domains or
     * subdomains in each API call. To include all subdomains under a specific domain,
     * use <code>*</code>. For example, <code>https:// *.amazon.com</code> includes all
     * subdomains under <code>https://aws.amazon.com</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbeddingDomains() const{ return m_embeddingDomains; }
    inline bool EmbeddingDomainsHasBeenSet() const { return m_embeddingDomainsHasBeenSet; }
    inline void SetEmbeddingDomains(const Aws::Vector<Aws::String>& value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains = value; }
    inline void SetEmbeddingDomains(Aws::Vector<Aws::String>&& value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains = std::move(value); }
    inline GetBuyerDashboardRequest& WithEmbeddingDomains(const Aws::Vector<Aws::String>& value) { SetEmbeddingDomains(value); return *this;}
    inline GetBuyerDashboardRequest& WithEmbeddingDomains(Aws::Vector<Aws::String>&& value) { SetEmbeddingDomains(std::move(value)); return *this;}
    inline GetBuyerDashboardRequest& AddEmbeddingDomains(const Aws::String& value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains.push_back(value); return *this; }
    inline GetBuyerDashboardRequest& AddEmbeddingDomains(Aws::String&& value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains.push_back(std::move(value)); return *this; }
    inline GetBuyerDashboardRequest& AddEmbeddingDomains(const char* value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_dashboardIdentifier;
    bool m_dashboardIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_embeddingDomains;
    bool m_embeddingDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceReporting
} // namespace Aws
