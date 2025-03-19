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
    AWS_MARKETPLACEREPORTING_API GetBuyerDashboardRequest() = default;

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
    inline const Aws::String& GetDashboardIdentifier() const { return m_dashboardIdentifier; }
    inline bool DashboardIdentifierHasBeenSet() const { return m_dashboardIdentifierHasBeenSet; }
    template<typename DashboardIdentifierT = Aws::String>
    void SetDashboardIdentifier(DashboardIdentifierT&& value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier = std::forward<DashboardIdentifierT>(value); }
    template<typename DashboardIdentifierT = Aws::String>
    GetBuyerDashboardRequest& WithDashboardIdentifier(DashboardIdentifierT&& value) { SetDashboardIdentifier(std::forward<DashboardIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fully qualified domains that you add to the allow list for access to the
     * generated URL that is then embedded. You can list up to two domains or
     * subdomains in each API call. To include all subdomains under a specific domain,
     * use <code>*</code>. For example, <code>https:// *.amazon.com</code> includes all
     * subdomains under <code>https://aws.amazon.com</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbeddingDomains() const { return m_embeddingDomains; }
    inline bool EmbeddingDomainsHasBeenSet() const { return m_embeddingDomainsHasBeenSet; }
    template<typename EmbeddingDomainsT = Aws::Vector<Aws::String>>
    void SetEmbeddingDomains(EmbeddingDomainsT&& value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains = std::forward<EmbeddingDomainsT>(value); }
    template<typename EmbeddingDomainsT = Aws::Vector<Aws::String>>
    GetBuyerDashboardRequest& WithEmbeddingDomains(EmbeddingDomainsT&& value) { SetEmbeddingDomains(std::forward<EmbeddingDomainsT>(value)); return *this;}
    template<typename EmbeddingDomainsT = Aws::String>
    GetBuyerDashboardRequest& AddEmbeddingDomains(EmbeddingDomainsT&& value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains.emplace_back(std::forward<EmbeddingDomainsT>(value)); return *this; }
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
