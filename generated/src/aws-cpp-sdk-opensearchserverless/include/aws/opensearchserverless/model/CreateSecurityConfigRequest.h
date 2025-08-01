/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/model/SecurityConfigType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/SamlConfigOptions.h>
#include <aws/opensearchserverless/model/CreateIamIdentityCenterConfigOptions.h>
#include <aws/opensearchserverless/model/IamFederationConfigOptions.h>
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
    AWS_OPENSEARCHSERVERLESS_API CreateSecurityConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityConfig"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of security configuration.</p>
     */
    inline SecurityConfigType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SecurityConfigType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateSecurityConfigRequest& WithType(SecurityConfigType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSecurityConfigRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSecurityConfigRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes SAML options in in the form of a key-value map. This field is
     * required if you specify <code>SAML</code> for the <code>type</code>
     * parameter.</p>
     */
    inline const SamlConfigOptions& GetSamlOptions() const { return m_samlOptions; }
    inline bool SamlOptionsHasBeenSet() const { return m_samlOptionsHasBeenSet; }
    template<typename SamlOptionsT = SamlConfigOptions>
    void SetSamlOptions(SamlOptionsT&& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = std::forward<SamlOptionsT>(value); }
    template<typename SamlOptionsT = SamlConfigOptions>
    CreateSecurityConfigRequest& WithSamlOptions(SamlOptionsT&& value) { SetSamlOptions(std::forward<SamlOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes IAM Identity Center options in the form of a key-value map. This
     * field is required if you specify iamidentitycenter for the type parameter.</p>
     */
    inline const CreateIamIdentityCenterConfigOptions& GetIamIdentityCenterOptions() const { return m_iamIdentityCenterOptions; }
    inline bool IamIdentityCenterOptionsHasBeenSet() const { return m_iamIdentityCenterOptionsHasBeenSet; }
    template<typename IamIdentityCenterOptionsT = CreateIamIdentityCenterConfigOptions>
    void SetIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = std::forward<IamIdentityCenterOptionsT>(value); }
    template<typename IamIdentityCenterOptionsT = CreateIamIdentityCenterConfigOptions>
    CreateSecurityConfigRequest& WithIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { SetIamIdentityCenterOptions(std::forward<IamIdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes IAM federation options in the form of a key-value map. This field
     * is required if you specify <code>iamFederation</code> for the <code>type</code>
     * parameter.</p>
     */
    inline const IamFederationConfigOptions& GetIamFederationOptions() const { return m_iamFederationOptions; }
    inline bool IamFederationOptionsHasBeenSet() const { return m_iamFederationOptionsHasBeenSet; }
    template<typename IamFederationOptionsT = IamFederationConfigOptions>
    void SetIamFederationOptions(IamFederationOptionsT&& value) { m_iamFederationOptionsHasBeenSet = true; m_iamFederationOptions = std::forward<IamFederationOptionsT>(value); }
    template<typename IamFederationOptionsT = IamFederationConfigOptions>
    CreateSecurityConfigRequest& WithIamFederationOptions(IamFederationOptionsT&& value) { SetIamFederationOptions(std::forward<IamFederationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSecurityConfigRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    SecurityConfigType m_type{SecurityConfigType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SamlConfigOptions m_samlOptions;
    bool m_samlOptionsHasBeenSet = false;

    CreateIamIdentityCenterConfigOptions m_iamIdentityCenterOptions;
    bool m_iamIdentityCenterOptionsHasBeenSet = false;

    IamFederationConfigOptions m_iamFederationOptions;
    bool m_iamFederationOptionsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
