﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UrlEndpointInput">AWS
   * API Reference</a></p>
   */
  class UrlEndpointInput
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointInput();
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API UrlEndpointInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The health check URL of the URL endpoint type. If the URL is a public
     * endpoint, the <code>HealthUrl</code> must also be a public endpoint. If the URL
     * is a private endpoint inside a virtual private cloud (VPC), the health URL must
     * also be a private endpoint, and the host must be the same as the URL. </p>
     */
    inline const Aws::String& GetHealthUrl() const{ return m_healthUrl; }
    inline bool HealthUrlHasBeenSet() const { return m_healthUrlHasBeenSet; }
    inline void SetHealthUrl(const Aws::String& value) { m_healthUrlHasBeenSet = true; m_healthUrl = value; }
    inline void SetHealthUrl(Aws::String&& value) { m_healthUrlHasBeenSet = true; m_healthUrl = std::move(value); }
    inline void SetHealthUrl(const char* value) { m_healthUrlHasBeenSet = true; m_healthUrl.assign(value); }
    inline UrlEndpointInput& WithHealthUrl(const Aws::String& value) { SetHealthUrl(value); return *this;}
    inline UrlEndpointInput& WithHealthUrl(Aws::String&& value) { SetHealthUrl(std::move(value)); return *this;}
    inline UrlEndpointInput& WithHealthUrl(const char* value) { SetHealthUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to route traffic to. The URL must be an <a
     * href="https://datatracker.ietf.org/doc/html/rfc3986">rfc3986-formatted URL</a>.
     * If the host is a domain name, the name must be resolvable over the public
     * internet. If the scheme is <code>https</code>, the top level domain of the host
     * must be listed in the <a href="https://www.iana.org/domains/root/db">IANA root
     * zone database</a>. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline UrlEndpointInput& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline UrlEndpointInput& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline UrlEndpointInput& WithUrl(const char* value) { SetUrl(value); return *this;}
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
