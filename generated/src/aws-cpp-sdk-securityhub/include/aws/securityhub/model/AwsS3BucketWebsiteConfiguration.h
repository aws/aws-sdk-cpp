/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3BucketWebsiteConfigurationRedirectTo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsS3BucketWebsiteConfigurationRoutingRule.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Website parameters for the S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketWebsiteConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketWebsiteConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfiguration() = default;
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the error document for the website.</p>
     */
    inline const Aws::String& GetErrorDocument() const { return m_errorDocument; }
    inline bool ErrorDocumentHasBeenSet() const { return m_errorDocumentHasBeenSet; }
    template<typename ErrorDocumentT = Aws::String>
    void SetErrorDocument(ErrorDocumentT&& value) { m_errorDocumentHasBeenSet = true; m_errorDocument = std::forward<ErrorDocumentT>(value); }
    template<typename ErrorDocumentT = Aws::String>
    AwsS3BucketWebsiteConfiguration& WithErrorDocument(ErrorDocumentT&& value) { SetErrorDocument(std::forward<ErrorDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index document for the website.</p>
     */
    inline const Aws::String& GetIndexDocumentSuffix() const { return m_indexDocumentSuffix; }
    inline bool IndexDocumentSuffixHasBeenSet() const { return m_indexDocumentSuffixHasBeenSet; }
    template<typename IndexDocumentSuffixT = Aws::String>
    void SetIndexDocumentSuffix(IndexDocumentSuffixT&& value) { m_indexDocumentSuffixHasBeenSet = true; m_indexDocumentSuffix = std::forward<IndexDocumentSuffixT>(value); }
    template<typename IndexDocumentSuffixT = Aws::String>
    AwsS3BucketWebsiteConfiguration& WithIndexDocumentSuffix(IndexDocumentSuffixT&& value) { SetIndexDocumentSuffix(std::forward<IndexDocumentSuffixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redirect behavior for requests to the website.</p>
     */
    inline const AwsS3BucketWebsiteConfigurationRedirectTo& GetRedirectAllRequestsTo() const { return m_redirectAllRequestsTo; }
    inline bool RedirectAllRequestsToHasBeenSet() const { return m_redirectAllRequestsToHasBeenSet; }
    template<typename RedirectAllRequestsToT = AwsS3BucketWebsiteConfigurationRedirectTo>
    void SetRedirectAllRequestsTo(RedirectAllRequestsToT&& value) { m_redirectAllRequestsToHasBeenSet = true; m_redirectAllRequestsTo = std::forward<RedirectAllRequestsToT>(value); }
    template<typename RedirectAllRequestsToT = AwsS3BucketWebsiteConfigurationRedirectTo>
    AwsS3BucketWebsiteConfiguration& WithRedirectAllRequestsTo(RedirectAllRequestsToT&& value) { SetRedirectAllRequestsTo(std::forward<RedirectAllRequestsToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline const Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule>& GetRoutingRules() const { return m_routingRules; }
    inline bool RoutingRulesHasBeenSet() const { return m_routingRulesHasBeenSet; }
    template<typename RoutingRulesT = Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule>>
    void SetRoutingRules(RoutingRulesT&& value) { m_routingRulesHasBeenSet = true; m_routingRules = std::forward<RoutingRulesT>(value); }
    template<typename RoutingRulesT = Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule>>
    AwsS3BucketWebsiteConfiguration& WithRoutingRules(RoutingRulesT&& value) { SetRoutingRules(std::forward<RoutingRulesT>(value)); return *this;}
    template<typename RoutingRulesT = AwsS3BucketWebsiteConfigurationRoutingRule>
    AwsS3BucketWebsiteConfiguration& AddRoutingRules(RoutingRulesT&& value) { m_routingRulesHasBeenSet = true; m_routingRules.emplace_back(std::forward<RoutingRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_errorDocument;
    bool m_errorDocumentHasBeenSet = false;

    Aws::String m_indexDocumentSuffix;
    bool m_indexDocumentSuffixHasBeenSet = false;

    AwsS3BucketWebsiteConfigurationRedirectTo m_redirectAllRequestsTo;
    bool m_redirectAllRequestsToHasBeenSet = false;

    Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule> m_routingRules;
    bool m_routingRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
