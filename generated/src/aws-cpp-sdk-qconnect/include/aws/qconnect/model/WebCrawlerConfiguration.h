/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/WebCrawlerLimits.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/WebScopeType.h>
#include <aws/qconnect/model/UrlConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The configuration details for the web data source.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/WebCrawlerConfiguration">AWS
   * API Reference</a></p>
   */
  class WebCrawlerConfiguration
  {
  public:
    AWS_QCONNECT_API WebCrawlerConfiguration();
    AWS_QCONNECT_API WebCrawlerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API WebCrawlerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of crawl limits for the web URLs.</p>
     */
    inline const WebCrawlerLimits& GetCrawlerLimits() const{ return m_crawlerLimits; }
    inline bool CrawlerLimitsHasBeenSet() const { return m_crawlerLimitsHasBeenSet; }
    inline void SetCrawlerLimits(const WebCrawlerLimits& value) { m_crawlerLimitsHasBeenSet = true; m_crawlerLimits = value; }
    inline void SetCrawlerLimits(WebCrawlerLimits&& value) { m_crawlerLimitsHasBeenSet = true; m_crawlerLimits = std::move(value); }
    inline WebCrawlerConfiguration& WithCrawlerLimits(const WebCrawlerLimits& value) { SetCrawlerLimits(value); return *this;}
    inline WebCrawlerConfiguration& WithCrawlerLimits(WebCrawlerLimits&& value) { SetCrawlerLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more exclusion regular expression patterns to exclude
     * certain URLs. If you specify an inclusion and exclusion filter/pattern and both
     * match a URL, the exclusion filter takes precedence and the web content of the
     * URL isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFilters() const{ return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    inline void SetExclusionFilters(const Aws::Vector<Aws::String>& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = value; }
    inline void SetExclusionFilters(Aws::Vector<Aws::String>&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::move(value); }
    inline WebCrawlerConfiguration& WithExclusionFilters(const Aws::Vector<Aws::String>& value) { SetExclusionFilters(value); return *this;}
    inline WebCrawlerConfiguration& WithExclusionFilters(Aws::Vector<Aws::String>&& value) { SetExclusionFilters(std::move(value)); return *this;}
    inline WebCrawlerConfiguration& AddExclusionFilters(const Aws::String& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(value); return *this; }
    inline WebCrawlerConfiguration& AddExclusionFilters(Aws::String&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(std::move(value)); return *this; }
    inline WebCrawlerConfiguration& AddExclusionFilters(const char* value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more inclusion regular expression patterns to include
     * certain URLs. If you specify an inclusion and exclusion filter/pattern and both
     * match a URL, the exclusion filter takes precedence and the web content of the
     * URL isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFilters() const{ return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    inline void SetInclusionFilters(const Aws::Vector<Aws::String>& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = value; }
    inline void SetInclusionFilters(Aws::Vector<Aws::String>&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::move(value); }
    inline WebCrawlerConfiguration& WithInclusionFilters(const Aws::Vector<Aws::String>& value) { SetInclusionFilters(value); return *this;}
    inline WebCrawlerConfiguration& WithInclusionFilters(Aws::Vector<Aws::String>&& value) { SetInclusionFilters(std::move(value)); return *this;}
    inline WebCrawlerConfiguration& AddInclusionFilters(const Aws::String& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(value); return *this; }
    inline WebCrawlerConfiguration& AddInclusionFilters(Aws::String&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(std::move(value)); return *this; }
    inline WebCrawlerConfiguration& AddInclusionFilters(const char* value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope of what is crawled for your URLs. You can choose to crawl only web
     * pages that belong to the same host or primary domain. For example, only web
     * pages that contain the seed URL
     * <code>https://docs.aws.amazon.com/bedrock/latest/userguide/</code> and no other
     * domains. You can choose to include sub domains in addition to the host or
     * primary domain. For example, web pages that contain <code>aws.amazon.com</code>
     * can also include sub domain <code>docs.aws.amazon.com</code>.</p>
     */
    inline const WebScopeType& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const WebScopeType& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(WebScopeType&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline WebCrawlerConfiguration& WithScope(const WebScopeType& value) { SetScope(value); return *this;}
    inline WebCrawlerConfiguration& WithScope(WebScopeType&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the URL/URLs for the web content that you want to crawl.
     * You should be authorized to crawl the URLs.</p>
     */
    inline const UrlConfiguration& GetUrlConfiguration() const{ return m_urlConfiguration; }
    inline bool UrlConfigurationHasBeenSet() const { return m_urlConfigurationHasBeenSet; }
    inline void SetUrlConfiguration(const UrlConfiguration& value) { m_urlConfigurationHasBeenSet = true; m_urlConfiguration = value; }
    inline void SetUrlConfiguration(UrlConfiguration&& value) { m_urlConfigurationHasBeenSet = true; m_urlConfiguration = std::move(value); }
    inline WebCrawlerConfiguration& WithUrlConfiguration(const UrlConfiguration& value) { SetUrlConfiguration(value); return *this;}
    inline WebCrawlerConfiguration& WithUrlConfiguration(UrlConfiguration&& value) { SetUrlConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    WebCrawlerLimits m_crawlerLimits;
    bool m_crawlerLimitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionFilters;
    bool m_exclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFilters;
    bool m_inclusionFiltersHasBeenSet = false;

    WebScopeType m_scope;
    bool m_scopeHasBeenSet = false;

    UrlConfiguration m_urlConfiguration;
    bool m_urlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
