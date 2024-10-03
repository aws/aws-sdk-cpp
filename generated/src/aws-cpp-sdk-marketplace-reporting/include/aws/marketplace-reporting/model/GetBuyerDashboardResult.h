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
    AWS_MARKETPLACEREPORTING_API GetBuyerDashboardResult();
    AWS_MARKETPLACEREPORTING_API GetBuyerDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEREPORTING_API GetBuyerDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The dashboard's embedding URL.</p>
     */
    inline const Aws::String& GetEmbedUrl() const{ return m_embedUrl; }
    inline void SetEmbedUrl(const Aws::String& value) { m_embedUrl = value; }
    inline void SetEmbedUrl(Aws::String&& value) { m_embedUrl = std::move(value); }
    inline void SetEmbedUrl(const char* value) { m_embedUrl.assign(value); }
    inline GetBuyerDashboardResult& WithEmbedUrl(const Aws::String& value) { SetEmbedUrl(value); return *this;}
    inline GetBuyerDashboardResult& WithEmbedUrl(Aws::String&& value) { SetEmbedUrl(std::move(value)); return *this;}
    inline GetBuyerDashboardResult& WithEmbedUrl(const char* value) { SetEmbedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the returned dashboard.</p>
     */
    inline const Aws::String& GetDashboardIdentifier() const{ return m_dashboardIdentifier; }
    inline void SetDashboardIdentifier(const Aws::String& value) { m_dashboardIdentifier = value; }
    inline void SetDashboardIdentifier(Aws::String&& value) { m_dashboardIdentifier = std::move(value); }
    inline void SetDashboardIdentifier(const char* value) { m_dashboardIdentifier.assign(value); }
    inline GetBuyerDashboardResult& WithDashboardIdentifier(const Aws::String& value) { SetDashboardIdentifier(value); return *this;}
    inline GetBuyerDashboardResult& WithDashboardIdentifier(Aws::String&& value) { SetDashboardIdentifier(std::move(value)); return *this;}
    inline GetBuyerDashboardResult& WithDashboardIdentifier(const char* value) { SetDashboardIdentifier(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetEmbeddingDomains() const{ return m_embeddingDomains; }
    inline void SetEmbeddingDomains(const Aws::Vector<Aws::String>& value) { m_embeddingDomains = value; }
    inline void SetEmbeddingDomains(Aws::Vector<Aws::String>&& value) { m_embeddingDomains = std::move(value); }
    inline GetBuyerDashboardResult& WithEmbeddingDomains(const Aws::Vector<Aws::String>& value) { SetEmbeddingDomains(value); return *this;}
    inline GetBuyerDashboardResult& WithEmbeddingDomains(Aws::Vector<Aws::String>&& value) { SetEmbeddingDomains(std::move(value)); return *this;}
    inline GetBuyerDashboardResult& AddEmbeddingDomains(const Aws::String& value) { m_embeddingDomains.push_back(value); return *this; }
    inline GetBuyerDashboardResult& AddEmbeddingDomains(Aws::String&& value) { m_embeddingDomains.push_back(std::move(value)); return *this; }
    inline GetBuyerDashboardResult& AddEmbeddingDomains(const char* value) { m_embeddingDomains.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBuyerDashboardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBuyerDashboardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBuyerDashboardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_embedUrl;

    Aws::String m_dashboardIdentifier;

    Aws::Vector<Aws::String> m_embeddingDomains;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MarketplaceReporting
} // namespace Aws
