/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/AppIntegrationsConfiguration.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Configuration information about the external data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/SourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SourceConfiguration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API SourceConfiguration() = default;
    AWS_CONNECTWISDOMSERVICE_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration information for Amazon AppIntegrations to automatically ingest
     * content.</p>
     */
    inline const AppIntegrationsConfiguration& GetAppIntegrations() const { return m_appIntegrations; }
    inline bool AppIntegrationsHasBeenSet() const { return m_appIntegrationsHasBeenSet; }
    template<typename AppIntegrationsT = AppIntegrationsConfiguration>
    void SetAppIntegrations(AppIntegrationsT&& value) { m_appIntegrationsHasBeenSet = true; m_appIntegrations = std::forward<AppIntegrationsT>(value); }
    template<typename AppIntegrationsT = AppIntegrationsConfiguration>
    SourceConfiguration& WithAppIntegrations(AppIntegrationsT&& value) { SetAppIntegrations(std::forward<AppIntegrationsT>(value)); return *this;}
    ///@}
  private:

    AppIntegrationsConfiguration m_appIntegrations;
    bool m_appIntegrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
