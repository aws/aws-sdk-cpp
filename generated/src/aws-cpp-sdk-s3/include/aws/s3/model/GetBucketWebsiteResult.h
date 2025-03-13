/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/RedirectAllRequestsTo.h>
#include <aws/s3/model/IndexDocument.h>
#include <aws/s3/model/ErrorDocument.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/RoutingRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class GetBucketWebsiteResult
  {
  public:
    AWS_S3_API GetBucketWebsiteResult() = default;
    AWS_S3_API GetBucketWebsiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketWebsiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Specifies the redirect behavior of all requests to a website endpoint of an
     * Amazon S3 bucket.</p>
     */
    inline const RedirectAllRequestsTo& GetRedirectAllRequestsTo() const { return m_redirectAllRequestsTo; }
    template<typename RedirectAllRequestsToT = RedirectAllRequestsTo>
    void SetRedirectAllRequestsTo(RedirectAllRequestsToT&& value) { m_redirectAllRequestsToHasBeenSet = true; m_redirectAllRequestsTo = std::forward<RedirectAllRequestsToT>(value); }
    template<typename RedirectAllRequestsToT = RedirectAllRequestsTo>
    GetBucketWebsiteResult& WithRedirectAllRequestsTo(RedirectAllRequestsToT&& value) { SetRedirectAllRequestsTo(std::forward<RedirectAllRequestsToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index document for the website (for example
     * <code>index.html</code>).</p>
     */
    inline const IndexDocument& GetIndexDocument() const { return m_indexDocument; }
    template<typename IndexDocumentT = IndexDocument>
    void SetIndexDocument(IndexDocumentT&& value) { m_indexDocumentHasBeenSet = true; m_indexDocument = std::forward<IndexDocumentT>(value); }
    template<typename IndexDocumentT = IndexDocument>
    GetBucketWebsiteResult& WithIndexDocument(IndexDocumentT&& value) { SetIndexDocument(std::forward<IndexDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key name of the website error document to use for 4XX class
     * errors.</p>
     */
    inline const ErrorDocument& GetErrorDocument() const { return m_errorDocument; }
    template<typename ErrorDocumentT = ErrorDocument>
    void SetErrorDocument(ErrorDocumentT&& value) { m_errorDocumentHasBeenSet = true; m_errorDocument = std::forward<ErrorDocumentT>(value); }
    template<typename ErrorDocumentT = ErrorDocument>
    GetBucketWebsiteResult& WithErrorDocument(ErrorDocumentT&& value) { SetErrorDocument(std::forward<ErrorDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline const Aws::Vector<RoutingRule>& GetRoutingRules() const { return m_routingRules; }
    template<typename RoutingRulesT = Aws::Vector<RoutingRule>>
    void SetRoutingRules(RoutingRulesT&& value) { m_routingRulesHasBeenSet = true; m_routingRules = std::forward<RoutingRulesT>(value); }
    template<typename RoutingRulesT = Aws::Vector<RoutingRule>>
    GetBucketWebsiteResult& WithRoutingRules(RoutingRulesT&& value) { SetRoutingRules(std::forward<RoutingRulesT>(value)); return *this;}
    template<typename RoutingRulesT = RoutingRule>
    GetBucketWebsiteResult& AddRoutingRules(RoutingRulesT&& value) { m_routingRulesHasBeenSet = true; m_routingRules.emplace_back(std::forward<RoutingRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketWebsiteResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RedirectAllRequestsTo m_redirectAllRequestsTo;
    bool m_redirectAllRequestsToHasBeenSet = false;

    IndexDocument m_indexDocument;
    bool m_indexDocumentHasBeenSet = false;

    ErrorDocument m_errorDocument;
    bool m_errorDocumentHasBeenSet = false;

    Aws::Vector<RoutingRule> m_routingRules;
    bool m_routingRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
