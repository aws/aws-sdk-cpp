/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/CustomLogSourceCrawlerConfiguration.h>
#include <aws/securitylake/model/AwsIdentity.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The configuration used for the third-party custom source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CustomLogSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomLogSourceConfiguration
  {
  public:
    AWS_SECURITYLAKE_API CustomLogSourceConfiguration() = default;
    AWS_SECURITYLAKE_API CustomLogSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API CustomLogSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration used for the Glue Crawler for a third-party custom
     * source.</p>
     */
    inline const CustomLogSourceCrawlerConfiguration& GetCrawlerConfiguration() const { return m_crawlerConfiguration; }
    inline bool CrawlerConfigurationHasBeenSet() const { return m_crawlerConfigurationHasBeenSet; }
    template<typename CrawlerConfigurationT = CustomLogSourceCrawlerConfiguration>
    void SetCrawlerConfiguration(CrawlerConfigurationT&& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = std::forward<CrawlerConfigurationT>(value); }
    template<typename CrawlerConfigurationT = CustomLogSourceCrawlerConfiguration>
    CustomLogSourceConfiguration& WithCrawlerConfiguration(CrawlerConfigurationT&& value) { SetCrawlerConfiguration(std::forward<CrawlerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity of the log provider for the third-party custom source.</p>
     */
    inline const AwsIdentity& GetProviderIdentity() const { return m_providerIdentity; }
    inline bool ProviderIdentityHasBeenSet() const { return m_providerIdentityHasBeenSet; }
    template<typename ProviderIdentityT = AwsIdentity>
    void SetProviderIdentity(ProviderIdentityT&& value) { m_providerIdentityHasBeenSet = true; m_providerIdentity = std::forward<ProviderIdentityT>(value); }
    template<typename ProviderIdentityT = AwsIdentity>
    CustomLogSourceConfiguration& WithProviderIdentity(ProviderIdentityT&& value) { SetProviderIdentity(std::forward<ProviderIdentityT>(value)); return *this;}
    ///@}
  private:

    CustomLogSourceCrawlerConfiguration m_crawlerConfiguration;
    bool m_crawlerConfigurationHasBeenSet = false;

    AwsIdentity m_providerIdentity;
    bool m_providerIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
