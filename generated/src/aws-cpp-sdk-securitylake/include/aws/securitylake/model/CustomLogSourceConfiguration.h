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
   * <p>The configuration for the third-party custom source.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CustomLogSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomLogSourceConfiguration
  {
  public:
    AWS_SECURITYLAKE_API CustomLogSourceConfiguration();
    AWS_SECURITYLAKE_API CustomLogSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API CustomLogSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the Glue Crawler for the third-party custom source.</p>
     */
    inline const CustomLogSourceCrawlerConfiguration& GetCrawlerConfiguration() const{ return m_crawlerConfiguration; }

    /**
     * <p>The configuration for the Glue Crawler for the third-party custom source.</p>
     */
    inline bool CrawlerConfigurationHasBeenSet() const { return m_crawlerConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the Glue Crawler for the third-party custom source.</p>
     */
    inline void SetCrawlerConfiguration(const CustomLogSourceCrawlerConfiguration& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = value; }

    /**
     * <p>The configuration for the Glue Crawler for the third-party custom source.</p>
     */
    inline void SetCrawlerConfiguration(CustomLogSourceCrawlerConfiguration&& value) { m_crawlerConfigurationHasBeenSet = true; m_crawlerConfiguration = std::move(value); }

    /**
     * <p>The configuration for the Glue Crawler for the third-party custom source.</p>
     */
    inline CustomLogSourceConfiguration& WithCrawlerConfiguration(const CustomLogSourceCrawlerConfiguration& value) { SetCrawlerConfiguration(value); return *this;}

    /**
     * <p>The configuration for the Glue Crawler for the third-party custom source.</p>
     */
    inline CustomLogSourceConfiguration& WithCrawlerConfiguration(CustomLogSourceCrawlerConfiguration&& value) { SetCrawlerConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identity of the log provider for the third-party custom source.</p>
     */
    inline const AwsIdentity& GetProviderIdentity() const{ return m_providerIdentity; }

    /**
     * <p>The identity of the log provider for the third-party custom source.</p>
     */
    inline bool ProviderIdentityHasBeenSet() const { return m_providerIdentityHasBeenSet; }

    /**
     * <p>The identity of the log provider for the third-party custom source.</p>
     */
    inline void SetProviderIdentity(const AwsIdentity& value) { m_providerIdentityHasBeenSet = true; m_providerIdentity = value; }

    /**
     * <p>The identity of the log provider for the third-party custom source.</p>
     */
    inline void SetProviderIdentity(AwsIdentity&& value) { m_providerIdentityHasBeenSet = true; m_providerIdentity = std::move(value); }

    /**
     * <p>The identity of the log provider for the third-party custom source.</p>
     */
    inline CustomLogSourceConfiguration& WithProviderIdentity(const AwsIdentity& value) { SetProviderIdentity(value); return *this;}

    /**
     * <p>The identity of the log provider for the third-party custom source.</p>
     */
    inline CustomLogSourceConfiguration& WithProviderIdentity(AwsIdentity&& value) { SetProviderIdentity(std::move(value)); return *this;}

  private:

    CustomLogSourceCrawlerConfiguration m_crawlerConfiguration;
    bool m_crawlerConfigurationHasBeenSet = false;

    AwsIdentity m_providerIdentity;
    bool m_providerIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
