/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>The configuration for the URL endpoint type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UrlEndpointConfig">AWS
   * API Reference</a></p>
   */
  class UrlEndpointConfig
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointConfig() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline const Aws::String& GetHealthUrl() const { return m_healthUrl; }
    inline bool HealthUrlHasBeenSet() const { return m_healthUrlHasBeenSet; }
    template<typename HealthUrlT = Aws::String>
    void SetHealthUrl(HealthUrlT&& value) { m_healthUrlHasBeenSet = true; m_healthUrl = std::forward<HealthUrlT>(value); }
    template<typename HealthUrlT = Aws::String>
    UrlEndpointConfig& WithHealthUrl(HealthUrlT&& value) { SetHealthUrl(std::forward<HealthUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    UrlEndpointConfig& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_healthUrl;
    bool m_healthUrlHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
