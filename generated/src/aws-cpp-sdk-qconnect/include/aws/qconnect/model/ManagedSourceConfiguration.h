/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/WebCrawlerConfiguration.h>
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
   * <p>Source configuration for managed resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ManagedSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class ManagedSourceConfiguration
  {
  public:
    AWS_QCONNECT_API ManagedSourceConfiguration() = default;
    AWS_QCONNECT_API ManagedSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ManagedSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration data for web crawler data source.</p>
     */
    inline const WebCrawlerConfiguration& GetWebCrawlerConfiguration() const { return m_webCrawlerConfiguration; }
    inline bool WebCrawlerConfigurationHasBeenSet() const { return m_webCrawlerConfigurationHasBeenSet; }
    template<typename WebCrawlerConfigurationT = WebCrawlerConfiguration>
    void SetWebCrawlerConfiguration(WebCrawlerConfigurationT&& value) { m_webCrawlerConfigurationHasBeenSet = true; m_webCrawlerConfiguration = std::forward<WebCrawlerConfigurationT>(value); }
    template<typename WebCrawlerConfigurationT = WebCrawlerConfiguration>
    ManagedSourceConfiguration& WithWebCrawlerConfiguration(WebCrawlerConfigurationT&& value) { SetWebCrawlerConfiguration(std::forward<WebCrawlerConfigurationT>(value)); return *this;}
    ///@}
  private:

    WebCrawlerConfiguration m_webCrawlerConfiguration;
    bool m_webCrawlerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
