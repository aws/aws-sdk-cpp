/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/SamlConfigOptions.h>
#include <aws/opensearchserverless/model/UpdateIamIdentityCenterConfigOptions.h>
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
  class UpdateSecurityConfigRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityConfig"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateSecurityConfigRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the security configuration to be updated. You can find the
     * most recent version of a security configuration using the
     * <code>GetSecurityPolicy</code> command.</p>
     */
    inline const Aws::String& GetConfigVersion() const { return m_configVersion; }
    inline bool ConfigVersionHasBeenSet() const { return m_configVersionHasBeenSet; }
    template<typename ConfigVersionT = Aws::String>
    void SetConfigVersion(ConfigVersionT&& value) { m_configVersionHasBeenSet = true; m_configVersion = std::forward<ConfigVersionT>(value); }
    template<typename ConfigVersionT = Aws::String>
    UpdateSecurityConfigRequest& WithConfigVersion(ConfigVersionT&& value) { SetConfigVersion(std::forward<ConfigVersionT>(value)); return *this;}
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
    UpdateSecurityConfigRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>SAML options in in the form of a key-value map.</p>
     */
    inline const SamlConfigOptions& GetSamlOptions() const { return m_samlOptions; }
    inline bool SamlOptionsHasBeenSet() const { return m_samlOptionsHasBeenSet; }
    template<typename SamlOptionsT = SamlConfigOptions>
    void SetSamlOptions(SamlOptionsT&& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = std::forward<SamlOptionsT>(value); }
    template<typename SamlOptionsT = SamlConfigOptions>
    UpdateSecurityConfigRequest& WithSamlOptions(SamlOptionsT&& value) { SetSamlOptions(std::forward<SamlOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes IAM Identity Center options in the form of a key-value map.</p>
     */
    inline const UpdateIamIdentityCenterConfigOptions& GetIamIdentityCenterOptionsUpdates() const { return m_iamIdentityCenterOptionsUpdates; }
    inline bool IamIdentityCenterOptionsUpdatesHasBeenSet() const { return m_iamIdentityCenterOptionsUpdatesHasBeenSet; }
    template<typename IamIdentityCenterOptionsUpdatesT = UpdateIamIdentityCenterConfigOptions>
    void SetIamIdentityCenterOptionsUpdates(IamIdentityCenterOptionsUpdatesT&& value) { m_iamIdentityCenterOptionsUpdatesHasBeenSet = true; m_iamIdentityCenterOptionsUpdates = std::forward<IamIdentityCenterOptionsUpdatesT>(value); }
    template<typename IamIdentityCenterOptionsUpdatesT = UpdateIamIdentityCenterConfigOptions>
    UpdateSecurityConfigRequest& WithIamIdentityCenterOptionsUpdates(IamIdentityCenterOptionsUpdatesT&& value) { SetIamIdentityCenterOptionsUpdates(std::forward<IamIdentityCenterOptionsUpdatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes IAM federation options in the form of a key-value map for updating
     * an existing security configuration. Use this field to modify IAM federation
     * settings for the security configuration.</p>
     */
    inline const IamFederationConfigOptions& GetIamFederationOptions() const { return m_iamFederationOptions; }
    inline bool IamFederationOptionsHasBeenSet() const { return m_iamFederationOptionsHasBeenSet; }
    template<typename IamFederationOptionsT = IamFederationConfigOptions>
    void SetIamFederationOptions(IamFederationOptionsT&& value) { m_iamFederationOptionsHasBeenSet = true; m_iamFederationOptions = std::forward<IamFederationOptionsT>(value); }
    template<typename IamFederationOptionsT = IamFederationConfigOptions>
    UpdateSecurityConfigRequest& WithIamFederationOptions(IamFederationOptionsT&& value) { SetIamFederationOptions(std::forward<IamFederationOptionsT>(value)); return *this;}
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
    UpdateSecurityConfigRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_configVersion;
    bool m_configVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SamlConfigOptions m_samlOptions;
    bool m_samlOptionsHasBeenSet = false;

    UpdateIamIdentityCenterConfigOptions m_iamIdentityCenterOptionsUpdates;
    bool m_iamIdentityCenterOptionsUpdatesHasBeenSet = false;

    IamFederationConfigOptions m_iamFederationOptions;
    bool m_iamFederationOptionsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
