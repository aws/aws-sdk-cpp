/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ErrorDocument.h>
#include <aws/s3/model/IndexDocument.h>
#include <aws/s3/model/RedirectAllRequestsTo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/RoutingRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies website configuration parameters for an Amazon S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/WebsiteConfiguration">AWS
   * API Reference</a></p>
   */
  class WebsiteConfiguration
  {
  public:
    AWS_S3_API WebsiteConfiguration() = default;
    AWS_S3_API WebsiteConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API WebsiteConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the error document for the website.</p>
     */
    inline const ErrorDocument& GetErrorDocument() const { return m_errorDocument; }
    inline bool ErrorDocumentHasBeenSet() const { return m_errorDocumentHasBeenSet; }
    template<typename ErrorDocumentT = ErrorDocument>
    void SetErrorDocument(ErrorDocumentT&& value) { m_errorDocumentHasBeenSet = true; m_errorDocument = std::forward<ErrorDocumentT>(value); }
    template<typename ErrorDocumentT = ErrorDocument>
    WebsiteConfiguration& WithErrorDocument(ErrorDocumentT&& value) { SetErrorDocument(std::forward<ErrorDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index document for the website.</p>
     */
    inline const IndexDocument& GetIndexDocument() const { return m_indexDocument; }
    inline bool IndexDocumentHasBeenSet() const { return m_indexDocumentHasBeenSet; }
    template<typename IndexDocumentT = IndexDocument>
    void SetIndexDocument(IndexDocumentT&& value) { m_indexDocumentHasBeenSet = true; m_indexDocument = std::forward<IndexDocumentT>(value); }
    template<typename IndexDocumentT = IndexDocument>
    WebsiteConfiguration& WithIndexDocument(IndexDocumentT&& value) { SetIndexDocument(std::forward<IndexDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redirect behavior for every request to this bucket's website
     * endpoint.</p>  <p>If you specify this property, you can't specify any
     * other property.</p> 
     */
    inline const RedirectAllRequestsTo& GetRedirectAllRequestsTo() const { return m_redirectAllRequestsTo; }
    inline bool RedirectAllRequestsToHasBeenSet() const { return m_redirectAllRequestsToHasBeenSet; }
    template<typename RedirectAllRequestsToT = RedirectAllRequestsTo>
    void SetRedirectAllRequestsTo(RedirectAllRequestsToT&& value) { m_redirectAllRequestsToHasBeenSet = true; m_redirectAllRequestsTo = std::forward<RedirectAllRequestsToT>(value); }
    template<typename RedirectAllRequestsToT = RedirectAllRequestsTo>
    WebsiteConfiguration& WithRedirectAllRequestsTo(RedirectAllRequestsToT&& value) { SetRedirectAllRequestsTo(std::forward<RedirectAllRequestsToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline const Aws::Vector<RoutingRule>& GetRoutingRules() const { return m_routingRules; }
    inline bool RoutingRulesHasBeenSet() const { return m_routingRulesHasBeenSet; }
    template<typename RoutingRulesT = Aws::Vector<RoutingRule>>
    void SetRoutingRules(RoutingRulesT&& value) { m_routingRulesHasBeenSet = true; m_routingRules = std::forward<RoutingRulesT>(value); }
    template<typename RoutingRulesT = Aws::Vector<RoutingRule>>
    WebsiteConfiguration& WithRoutingRules(RoutingRulesT&& value) { SetRoutingRules(std::forward<RoutingRulesT>(value)); return *this;}
    template<typename RoutingRulesT = RoutingRule>
    WebsiteConfiguration& AddRoutingRules(RoutingRulesT&& value) { m_routingRulesHasBeenSet = true; m_routingRules.emplace_back(std::forward<RoutingRulesT>(value)); return *this; }
    ///@}
  private:

    ErrorDocument m_errorDocument;
    bool m_errorDocumentHasBeenSet = false;

    IndexDocument m_indexDocument;
    bool m_indexDocumentHasBeenSet = false;

    RedirectAllRequestsTo m_redirectAllRequestsTo;
    bool m_redirectAllRequestsToHasBeenSet = false;

    Aws::Vector<RoutingRule> m_routingRules;
    bool m_routingRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
