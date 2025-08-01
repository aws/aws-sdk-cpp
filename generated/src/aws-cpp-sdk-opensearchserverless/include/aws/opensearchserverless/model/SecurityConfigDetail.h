/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/SecurityConfigType.h>
#include <aws/opensearchserverless/model/SamlConfigOptions.h>
#include <aws/opensearchserverless/model/IamIdentityCenterConfigOptions.h>
#include <aws/opensearchserverless/model/IamFederationConfigOptions.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Details about a security configuration for OpenSearch
   * Serverless.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/SecurityConfigDetail">AWS
   * API Reference</a></p>
   */
  class SecurityConfigDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigDetail() = default;
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SecurityConfigDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of security configuration.</p>
     */
    inline SecurityConfigType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SecurityConfigType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SecurityConfigDetail& WithType(SecurityConfigType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the security configuration.</p>
     */
    inline const Aws::String& GetConfigVersion() const { return m_configVersion; }
    inline bool ConfigVersionHasBeenSet() const { return m_configVersionHasBeenSet; }
    template<typename ConfigVersionT = Aws::String>
    void SetConfigVersion(ConfigVersionT&& value) { m_configVersionHasBeenSet = true; m_configVersion = std::forward<ConfigVersionT>(value); }
    template<typename ConfigVersionT = Aws::String>
    SecurityConfigDetail& WithConfigVersion(ConfigVersionT&& value) { SetConfigVersion(std::forward<ConfigVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the security configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SecurityConfigDetail& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>SAML options for the security configuration in the form of a key-value
     * map.</p>
     */
    inline const SamlConfigOptions& GetSamlOptions() const { return m_samlOptions; }
    inline bool SamlOptionsHasBeenSet() const { return m_samlOptionsHasBeenSet; }
    template<typename SamlOptionsT = SamlConfigOptions>
    void SetSamlOptions(SamlOptionsT&& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = std::forward<SamlOptionsT>(value); }
    template<typename SamlOptionsT = SamlConfigOptions>
    SecurityConfigDetail& WithSamlOptions(SamlOptionsT&& value) { SetSamlOptions(std::forward<SamlOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes IAM Identity Center options in the form of a key-value map.</p>
     */
    inline const IamIdentityCenterConfigOptions& GetIamIdentityCenterOptions() const { return m_iamIdentityCenterOptions; }
    inline bool IamIdentityCenterOptionsHasBeenSet() const { return m_iamIdentityCenterOptionsHasBeenSet; }
    template<typename IamIdentityCenterOptionsT = IamIdentityCenterConfigOptions>
    void SetIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = std::forward<IamIdentityCenterOptionsT>(value); }
    template<typename IamIdentityCenterOptionsT = IamIdentityCenterConfigOptions>
    SecurityConfigDetail& WithIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { SetIamIdentityCenterOptions(std::forward<IamIdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes IAM federation options in the form of a key-value map. Contains
     * configuration details about how OpenSearch Serverless integrates with external
     * identity providers through federation.</p>
     */
    inline const IamFederationConfigOptions& GetIamFederationOptions() const { return m_iamFederationOptions; }
    inline bool IamFederationOptionsHasBeenSet() const { return m_iamFederationOptionsHasBeenSet; }
    template<typename IamFederationOptionsT = IamFederationConfigOptions>
    void SetIamFederationOptions(IamFederationOptionsT&& value) { m_iamFederationOptionsHasBeenSet = true; m_iamFederationOptions = std::forward<IamFederationOptionsT>(value); }
    template<typename IamFederationOptionsT = IamFederationConfigOptions>
    SecurityConfigDetail& WithIamFederationOptions(IamFederationOptionsT&& value) { SetIamFederationOptions(std::forward<IamFederationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the configuration was created.</p>
     */
    inline long long GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline SecurityConfigDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the configuration was last modified.</p>
     */
    inline long long GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline SecurityConfigDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SecurityConfigType m_type{SecurityConfigType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_configVersion;
    bool m_configVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SamlConfigOptions m_samlOptions;
    bool m_samlOptionsHasBeenSet = false;

    IamIdentityCenterConfigOptions m_iamIdentityCenterOptions;
    bool m_iamIdentityCenterOptionsHasBeenSet = false;

    IamFederationConfigOptions m_iamFederationOptions;
    bool m_iamFederationOptionsHasBeenSet = false;

    long long m_createdDate{0};
    bool m_createdDateHasBeenSet = false;

    long long m_lastModifiedDate{0};
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
