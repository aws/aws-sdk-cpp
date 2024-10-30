/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/CreateIamIdentityCenterConfigOptions.h>
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


    ///@{
    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateSecurityConfigRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateSecurityConfigRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateSecurityConfigRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateSecurityConfigRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSecurityConfigRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSecurityConfigRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes IAM Identity Center options in the form of a key-value map. This
     * field is required if you specify iamidentitycenter for the type parameter.</p>
     */
    inline const CreateIamIdentityCenterConfigOptions& GetIamIdentityCenterOptions() const{ return m_iamIdentityCenterOptions; }
    inline bool IamIdentityCenterOptionsHasBeenSet() const { return m_iamIdentityCenterOptionsHasBeenSet; }
    inline void SetIamIdentityCenterOptions(const CreateIamIdentityCenterConfigOptions& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = value; }
    inline void SetIamIdentityCenterOptions(CreateIamIdentityCenterConfigOptions&& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = std::move(value); }
    inline CreateSecurityConfigRequest& WithIamIdentityCenterOptions(const CreateIamIdentityCenterConfigOptions& value) { SetIamIdentityCenterOptions(value); return *this;}
    inline CreateSecurityConfigRequest& WithIamIdentityCenterOptions(CreateIamIdentityCenterConfigOptions&& value) { SetIamIdentityCenterOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateSecurityConfigRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSecurityConfigRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSecurityConfigRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes SAML options in in the form of a key-value map. This field is
     * required if you specify <code>saml</code> for the <code>type</code>
     * parameter.</p>
     */
    inline const SamlConfigOptions& GetSamlOptions() const{ return m_samlOptions; }
    inline bool SamlOptionsHasBeenSet() const { return m_samlOptionsHasBeenSet; }
    inline void SetSamlOptions(const SamlConfigOptions& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = value; }
    inline void SetSamlOptions(SamlConfigOptions&& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = std::move(value); }
    inline CreateSecurityConfigRequest& WithSamlOptions(const SamlConfigOptions& value) { SetSamlOptions(value); return *this;}
    inline CreateSecurityConfigRequest& WithSamlOptions(SamlConfigOptions&& value) { SetSamlOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of security configuration.</p>
     */
    inline const SecurityConfigType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SecurityConfigType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SecurityConfigType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateSecurityConfigRequest& WithType(const SecurityConfigType& value) { SetType(value); return *this;}
    inline CreateSecurityConfigRequest& WithType(SecurityConfigType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CreateIamIdentityCenterConfigOptions m_iamIdentityCenterOptions;
    bool m_iamIdentityCenterOptionsHasBeenSet = false;

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
