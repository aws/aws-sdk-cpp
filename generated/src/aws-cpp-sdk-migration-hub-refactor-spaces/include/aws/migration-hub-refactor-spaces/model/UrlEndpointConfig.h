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
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointConfig();
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline const Aws::String& GetHealthUrl() const{ return m_healthUrl; }

    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline bool HealthUrlHasBeenSet() const { return m_healthUrlHasBeenSet; }

    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline void SetHealthUrl(const Aws::String& value) { m_healthUrlHasBeenSet = true; m_healthUrl = value; }

    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline void SetHealthUrl(Aws::String&& value) { m_healthUrlHasBeenSet = true; m_healthUrl = std::move(value); }

    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline void SetHealthUrl(const char* value) { m_healthUrlHasBeenSet = true; m_healthUrl.assign(value); }

    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline UrlEndpointConfig& WithHealthUrl(const Aws::String& value) { SetHealthUrl(value); return *this;}

    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline UrlEndpointConfig& WithHealthUrl(Aws::String&& value) { SetHealthUrl(std::move(value)); return *this;}

    /**
     * <p>The health check URL of the URL endpoint type. </p>
     */
    inline UrlEndpointConfig& WithHealthUrl(const char* value) { SetHealthUrl(value); return *this;}


    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline UrlEndpointConfig& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline UrlEndpointConfig& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The HTTP URL endpoint. </p>
     */
    inline UrlEndpointConfig& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_healthUrl;
    bool m_healthUrlHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
