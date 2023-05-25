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
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfiguration();
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the error document for the website.</p>
     */
    inline const Aws::String& GetErrorDocument() const{ return m_errorDocument; }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline bool ErrorDocumentHasBeenSet() const { return m_errorDocumentHasBeenSet; }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline void SetErrorDocument(const Aws::String& value) { m_errorDocumentHasBeenSet = true; m_errorDocument = value; }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline void SetErrorDocument(Aws::String&& value) { m_errorDocumentHasBeenSet = true; m_errorDocument = std::move(value); }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline void SetErrorDocument(const char* value) { m_errorDocumentHasBeenSet = true; m_errorDocument.assign(value); }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithErrorDocument(const Aws::String& value) { SetErrorDocument(value); return *this;}

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithErrorDocument(Aws::String&& value) { SetErrorDocument(std::move(value)); return *this;}

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithErrorDocument(const char* value) { SetErrorDocument(value); return *this;}


    /**
     * <p>The name of the index document for the website.</p>
     */
    inline const Aws::String& GetIndexDocumentSuffix() const{ return m_indexDocumentSuffix; }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline bool IndexDocumentSuffixHasBeenSet() const { return m_indexDocumentSuffixHasBeenSet; }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline void SetIndexDocumentSuffix(const Aws::String& value) { m_indexDocumentSuffixHasBeenSet = true; m_indexDocumentSuffix = value; }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline void SetIndexDocumentSuffix(Aws::String&& value) { m_indexDocumentSuffixHasBeenSet = true; m_indexDocumentSuffix = std::move(value); }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline void SetIndexDocumentSuffix(const char* value) { m_indexDocumentSuffixHasBeenSet = true; m_indexDocumentSuffix.assign(value); }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithIndexDocumentSuffix(const Aws::String& value) { SetIndexDocumentSuffix(value); return *this;}

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithIndexDocumentSuffix(Aws::String&& value) { SetIndexDocumentSuffix(std::move(value)); return *this;}

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithIndexDocumentSuffix(const char* value) { SetIndexDocumentSuffix(value); return *this;}


    /**
     * <p>The redirect behavior for requests to the website.</p>
     */
    inline const AwsS3BucketWebsiteConfigurationRedirectTo& GetRedirectAllRequestsTo() const{ return m_redirectAllRequestsTo; }

    /**
     * <p>The redirect behavior for requests to the website.</p>
     */
    inline bool RedirectAllRequestsToHasBeenSet() const { return m_redirectAllRequestsToHasBeenSet; }

    /**
     * <p>The redirect behavior for requests to the website.</p>
     */
    inline void SetRedirectAllRequestsTo(const AwsS3BucketWebsiteConfigurationRedirectTo& value) { m_redirectAllRequestsToHasBeenSet = true; m_redirectAllRequestsTo = value; }

    /**
     * <p>The redirect behavior for requests to the website.</p>
     */
    inline void SetRedirectAllRequestsTo(AwsS3BucketWebsiteConfigurationRedirectTo&& value) { m_redirectAllRequestsToHasBeenSet = true; m_redirectAllRequestsTo = std::move(value); }

    /**
     * <p>The redirect behavior for requests to the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithRedirectAllRequestsTo(const AwsS3BucketWebsiteConfigurationRedirectTo& value) { SetRedirectAllRequestsTo(value); return *this;}

    /**
     * <p>The redirect behavior for requests to the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithRedirectAllRequestsTo(AwsS3BucketWebsiteConfigurationRedirectTo&& value) { SetRedirectAllRequestsTo(std::move(value)); return *this;}


    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline const Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule>& GetRoutingRules() const{ return m_routingRules; }

    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline bool RoutingRulesHasBeenSet() const { return m_routingRulesHasBeenSet; }

    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline void SetRoutingRules(const Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule>& value) { m_routingRulesHasBeenSet = true; m_routingRules = value; }

    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline void SetRoutingRules(Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule>&& value) { m_routingRulesHasBeenSet = true; m_routingRules = std::move(value); }

    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithRoutingRules(const Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule>& value) { SetRoutingRules(value); return *this;}

    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& WithRoutingRules(Aws::Vector<AwsS3BucketWebsiteConfigurationRoutingRule>&& value) { SetRoutingRules(std::move(value)); return *this;}

    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& AddRoutingRules(const AwsS3BucketWebsiteConfigurationRoutingRule& value) { m_routingRulesHasBeenSet = true; m_routingRules.push_back(value); return *this; }

    /**
     * <p>The rules for applying redirects for requests to the website.</p>
     */
    inline AwsS3BucketWebsiteConfiguration& AddRoutingRules(AwsS3BucketWebsiteConfigurationRoutingRule&& value) { m_routingRulesHasBeenSet = true; m_routingRules.push_back(std::move(value)); return *this; }

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
