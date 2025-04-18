/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/UrlConfiguration.h>
#include <aws/qconnect/model/WebCrawlerLimits.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/WebScopeType.h>
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
    AWS_QCONNECT_API WebCrawlerConfiguration() = default;
    AWS_QCONNECT_API WebCrawlerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API WebCrawlerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the URL/URLs for the web content that you want to crawl.
     * You should be authorized to crawl the URLs.</p>
     */
    inline const UrlConfiguration& GetUrlConfiguration() const { return m_urlConfiguration; }
    inline bool UrlConfigurationHasBeenSet() const { return m_urlConfigurationHasBeenSet; }
    template<typename UrlConfigurationT = UrlConfiguration>
    void SetUrlConfiguration(UrlConfigurationT&& value) { m_urlConfigurationHasBeenSet = true; m_urlConfiguration = std::forward<UrlConfigurationT>(value); }
    template<typename UrlConfigurationT = UrlConfiguration>
    WebCrawlerConfiguration& WithUrlConfiguration(UrlConfigurationT&& value) { SetUrlConfiguration(std::forward<UrlConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of crawl limits for the web URLs.</p>
     */
    inline const WebCrawlerLimits& GetCrawlerLimits() const { return m_crawlerLimits; }
    inline bool CrawlerLimitsHasBeenSet() const { return m_crawlerLimitsHasBeenSet; }
    template<typename CrawlerLimitsT = WebCrawlerLimits>
    void SetCrawlerLimits(CrawlerLimitsT&& value) { m_crawlerLimitsHasBeenSet = true; m_crawlerLimits = std::forward<CrawlerLimitsT>(value); }
    template<typename CrawlerLimitsT = WebCrawlerLimits>
    WebCrawlerConfiguration& WithCrawlerLimits(CrawlerLimitsT&& value) { SetCrawlerLimits(std::forward<CrawlerLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more inclusion regular expression patterns to include
     * certain URLs. If you specify an inclusion and exclusion filter/pattern and both
     * match a URL, the exclusion filter takes precedence and the web content of the
     * URL isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionFilters() const { return m_inclusionFilters; }
    inline bool InclusionFiltersHasBeenSet() const { return m_inclusionFiltersHasBeenSet; }
    template<typename InclusionFiltersT = Aws::Vector<Aws::String>>
    void SetInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters = std::forward<InclusionFiltersT>(value); }
    template<typename InclusionFiltersT = Aws::Vector<Aws::String>>
    WebCrawlerConfiguration& WithInclusionFilters(InclusionFiltersT&& value) { SetInclusionFilters(std::forward<InclusionFiltersT>(value)); return *this;}
    template<typename InclusionFiltersT = Aws::String>
    WebCrawlerConfiguration& AddInclusionFilters(InclusionFiltersT&& value) { m_inclusionFiltersHasBeenSet = true; m_inclusionFilters.emplace_back(std::forward<InclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more exclusion regular expression patterns to exclude
     * certain URLs. If you specify an inclusion and exclusion filter/pattern and both
     * match a URL, the exclusion filter takes precedence and the web content of the
     * URL isn’t crawled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionFilters() const { return m_exclusionFilters; }
    inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
    template<typename ExclusionFiltersT = Aws::Vector<Aws::String>>
    void SetExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters = std::forward<ExclusionFiltersT>(value); }
    template<typename ExclusionFiltersT = Aws::Vector<Aws::String>>
    WebCrawlerConfiguration& WithExclusionFilters(ExclusionFiltersT&& value) { SetExclusionFilters(std::forward<ExclusionFiltersT>(value)); return *this;}
    template<typename ExclusionFiltersT = Aws::String>
    WebCrawlerConfiguration& AddExclusionFilters(ExclusionFiltersT&& value) { m_exclusionFiltersHasBeenSet = true; m_exclusionFilters.emplace_back(std::forward<ExclusionFiltersT>(value)); return *this; }
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
    inline WebScopeType GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(WebScopeType value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline WebCrawlerConfiguration& WithScope(WebScopeType value) { SetScope(value); return *this;}
    ///@}
  private:

    UrlConfiguration m_urlConfiguration;
    bool m_urlConfigurationHasBeenSet = false;

    WebCrawlerLimits m_crawlerLimits;
    bool m_crawlerLimitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionFilters;
    bool m_inclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionFilters;
    bool m_exclusionFiltersHasBeenSet = false;

    WebScopeType m_scope{WebScopeType::NOT_SET};
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
