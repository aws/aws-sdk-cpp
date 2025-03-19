/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-reporting/MarketplaceReporting_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MarketplaceReporting
{
namespace Model
{
  class GetBuyerDashboardResult
  {
  public:
    AWS_MARKETPLACEREPORTING_API GetBuyerDashboardResult() = default;
    AWS_MARKETPLACEREPORTING_API GetBuyerDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEREPORTING_API GetBuyerDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The dashboard's embedding URL.</p>
     */
    inline const Aws::String& GetEmbedUrl() const { return m_embedUrl; }
    template<typename EmbedUrlT = Aws::String>
    void SetEmbedUrl(EmbedUrlT&& value) { m_embedUrlHasBeenSet = true; m_embedUrl = std::forward<EmbedUrlT>(value); }
    template<typename EmbedUrlT = Aws::String>
    GetBuyerDashboardResult& WithEmbedUrl(EmbedUrlT&& value) { SetEmbedUrl(std::forward<EmbedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the returned dashboard.</p>
     */
    inline const Aws::String& GetDashboardIdentifier() const { return m_dashboardIdentifier; }
    template<typename DashboardIdentifierT = Aws::String>
    void SetDashboardIdentifier(DashboardIdentifierT&& value) { m_dashboardIdentifierHasBeenSet = true; m_dashboardIdentifier = std::forward<DashboardIdentifierT>(value); }
    template<typename DashboardIdentifierT = Aws::String>
    GetBuyerDashboardResult& WithDashboardIdentifier(DashboardIdentifierT&& value) { SetDashboardIdentifier(std::forward<DashboardIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domains specified in the request. The domains enable
     * access to the generated URL that is then embedded. You can list up to two
     * domains or subdomains in each API call. To include all subdomains under a
     * specific domain, use <code>*</code>. For example,
     * <code>https:// *.amazon.com</code> includes all subdomains under
     * <code>https://aws.amazon.com</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbeddingDomains() const { return m_embeddingDomains; }
    template<typename EmbeddingDomainsT = Aws::Vector<Aws::String>>
    void SetEmbeddingDomains(EmbeddingDomainsT&& value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains = std::forward<EmbeddingDomainsT>(value); }
    template<typename EmbeddingDomainsT = Aws::Vector<Aws::String>>
    GetBuyerDashboardResult& WithEmbeddingDomains(EmbeddingDomainsT&& value) { SetEmbeddingDomains(std::forward<EmbeddingDomainsT>(value)); return *this;}
    template<typename EmbeddingDomainsT = Aws::String>
    GetBuyerDashboardResult& AddEmbeddingDomains(EmbeddingDomainsT&& value) { m_embeddingDomainsHasBeenSet = true; m_embeddingDomains.emplace_back(std::forward<EmbeddingDomainsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBuyerDashboardResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_embedUrl;
    bool m_embedUrlHasBeenSet = false;

    Aws::String m_dashboardIdentifier;
    bool m_dashboardIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_embeddingDomains;
    bool m_embeddingDomainsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceReporting
} // namespace Aws
