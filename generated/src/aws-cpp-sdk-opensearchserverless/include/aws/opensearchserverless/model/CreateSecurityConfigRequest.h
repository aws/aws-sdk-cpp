/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/SamlConfigOptions.h>
#include <aws/opensearchserverless/model/SecurityConfigType.h>
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
  class CreateSecurityConfigRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateSecurityConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityConfig"; }

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
    inline CreateSecurityConfigRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline CreateSecurityConfigRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline CreateSecurityConfigRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreateSecurityConfigRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the security configuration.</p>
     */
    inline CreateSecurityConfigRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the security configuration.</p>
     */
    inline CreateSecurityConfigRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes SAML options in in the form of a key-value map.</p>
     */
    inline const SamlConfigOptions& GetSamlOptions() const{ return m_samlOptions; }

    /**
     * <p>Describes SAML options in in the form of a key-value map.</p>
     */
    inline bool SamlOptionsHasBeenSet() const { return m_samlOptionsHasBeenSet; }

    /**
     * <p>Describes SAML options in in the form of a key-value map.</p>
     */
    inline void SetSamlOptions(const SamlConfigOptions& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = value; }

    /**
     * <p>Describes SAML options in in the form of a key-value map.</p>
     */
    inline void SetSamlOptions(SamlConfigOptions&& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = std::move(value); }

    /**
     * <p>Describes SAML options in in the form of a key-value map.</p>
     */
    inline CreateSecurityConfigRequest& WithSamlOptions(const SamlConfigOptions& value) { SetSamlOptions(value); return *this;}

    /**
     * <p>Describes SAML options in in the form of a key-value map.</p>
     */
    inline CreateSecurityConfigRequest& WithSamlOptions(SamlConfigOptions&& value) { SetSamlOptions(std::move(value)); return *this;}


    /**
     * <p>The type of security configuration.</p>
     */
    inline const SecurityConfigType& GetType() const{ return m_type; }

    /**
     * <p>The type of security configuration.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of security configuration.</p>
     */
    inline void SetType(const SecurityConfigType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of security configuration.</p>
     */
    inline void SetType(SecurityConfigType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of security configuration.</p>
     */
    inline CreateSecurityConfigRequest& WithType(const SecurityConfigType& value) { SetType(value); return *this;}

    /**
     * <p>The type of security configuration.</p>
     */
    inline CreateSecurityConfigRequest& WithType(SecurityConfigType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SamlConfigOptions m_samlOptions;
    bool m_samlOptionsHasBeenSet = false;

    SecurityConfigType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
