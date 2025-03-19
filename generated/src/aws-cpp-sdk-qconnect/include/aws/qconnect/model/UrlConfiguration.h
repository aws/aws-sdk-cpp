/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/SeedUrl.h>
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
   * <p>The configuration of the URL/URLs for the web content that you want to crawl.
   * You should be authorized to crawl the URLs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UrlConfiguration">AWS
   * API Reference</a></p>
   */
  class UrlConfiguration
  {
  public:
    AWS_QCONNECT_API UrlConfiguration() = default;
    AWS_QCONNECT_API UrlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API UrlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of URLs for crawling.</p>
     */
    inline const Aws::Vector<SeedUrl>& GetSeedUrls() const { return m_seedUrls; }
    inline bool SeedUrlsHasBeenSet() const { return m_seedUrlsHasBeenSet; }
    template<typename SeedUrlsT = Aws::Vector<SeedUrl>>
    void SetSeedUrls(SeedUrlsT&& value) { m_seedUrlsHasBeenSet = true; m_seedUrls = std::forward<SeedUrlsT>(value); }
    template<typename SeedUrlsT = Aws::Vector<SeedUrl>>
    UrlConfiguration& WithSeedUrls(SeedUrlsT&& value) { SetSeedUrls(std::forward<SeedUrlsT>(value)); return *this;}
    template<typename SeedUrlsT = SeedUrl>
    UrlConfiguration& AddSeedUrls(SeedUrlsT&& value) { m_seedUrlsHasBeenSet = true; m_seedUrls.emplace_back(std::forward<SeedUrlsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SeedUrl> m_seedUrls;
    bool m_seedUrlsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
