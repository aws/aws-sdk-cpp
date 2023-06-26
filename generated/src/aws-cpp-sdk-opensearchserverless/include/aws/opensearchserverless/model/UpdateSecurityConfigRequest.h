/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/SamlConfigOptions.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class UpdateSecurityConfigRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityConfig"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline UpdateSecurityConfigRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline UpdateSecurityConfigRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline UpdateSecurityConfigRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline const Aws::String& GetConfigVersion() const{ return m_configVersion; }

    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline bool ConfigVersionHasBeenSet() const { return m_configVersionHasBeenSet; }

    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline void SetConfigVersion(const Aws::String& value) { m_configVersionHasBeenSet = true; m_configVersion = value; }

    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline void SetConfigVersion(Aws::String&& value) { m_configVersionHasBeenSet = true; m_configVersion = std::move(value); }

    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline void SetConfigVersion(const char* value) { m_configVersionHasBeenSet = true; m_configVersion.assign(value); }

    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline UpdateSecurityConfigRequest& WithConfigVersion(const Aws::String& value) { SetConfigVersion(value); return *this;}

    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline UpdateSecurityConfigRequest& WithConfigVersion(Aws::String&& value) { SetConfigVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline UpdateSecurityConfigRequest& WithConfigVersion(const char* value) { SetConfigVersion(value); return *this;}


    /**
     * <p>A description of the security configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the security configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the security configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the security configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the security configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the security configuration.</p>
     */
    inline UpdateSecurityConfigRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the security configuration.</p>
     */
    inline UpdateSecurityConfigRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the security configuration.</p>
     */
    inline UpdateSecurityConfigRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline UpdateSecurityConfigRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline UpdateSecurityConfigRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline UpdateSecurityConfigRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>SAML options in in the form of a key-value map.</p>
     */
    inline const SamlConfigOptions& GetSamlOptions() const{ return m_samlOptions; }

    /**
     * <p>SAML options in in the form of a key-value map.</p>
     */
    inline bool SamlOptionsHasBeenSet() const { return m_samlOptionsHasBeenSet; }

    /**
     * <p>SAML options in in the form of a key-value map.</p>
     */
    inline void SetSamlOptions(const SamlConfigOptions& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = value; }

    /**
     * <p>SAML options in in the form of a key-value map.</p>
     */
    inline void SetSamlOptions(SamlConfigOptions&& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = std::move(value); }

    /**
     * <p>SAML options in in the form of a key-value map.</p>
     */
    inline UpdateSecurityConfigRequest& WithSamlOptions(const SamlConfigOptions& value) { SetSamlOptions(value); return *this;}

    /**
     * <p>SAML options in in the form of a key-value map.</p>
     */
    inline UpdateSecurityConfigRequest& WithSamlOptions(SamlConfigOptions&& value) { SetSamlOptions(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_configVersion;
    bool m_configVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SamlConfigOptions m_samlOptions;
    bool m_samlOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
