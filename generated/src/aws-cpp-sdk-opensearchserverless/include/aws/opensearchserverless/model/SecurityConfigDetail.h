/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/IamIdentityCenterConfigOptions.h>
#include <aws/opensearchserverless/model/SamlConfigOptions.h>
#include <aws/opensearchserverless/model/SecurityConfigType.h>
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
   * <p>Details about a security configuration for OpenSearch Serverless.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/SecurityConfigDetail">AWS
   * API Reference</a></p>
   */
  class SecurityConfigDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigDetail();
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the security configuration.</p>
     */
    inline const Aws::String& GetConfigVersion() const{ return m_configVersion; }
    inline bool ConfigVersionHasBeenSet() const { return m_configVersionHasBeenSet; }
    inline void SetConfigVersion(const Aws::String& value) { m_configVersionHasBeenSet = true; m_configVersion = value; }
    inline void SetConfigVersion(Aws::String&& value) { m_configVersionHasBeenSet = true; m_configVersion = std::move(value); }
    inline void SetConfigVersion(const char* value) { m_configVersionHasBeenSet = true; m_configVersion.assign(value); }
    inline SecurityConfigDetail& WithConfigVersion(const Aws::String& value) { SetConfigVersion(value); return *this;}
    inline SecurityConfigDetail& WithConfigVersion(Aws::String&& value) { SetConfigVersion(std::move(value)); return *this;}
    inline SecurityConfigDetail& WithConfigVersion(const char* value) { SetConfigVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the configuration was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline SecurityConfigDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the security configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SecurityConfigDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SecurityConfigDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SecurityConfigDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes IAM Identity Center options in the form of a key-value map.</p>
     */
    inline const IamIdentityCenterConfigOptions& GetIamIdentityCenterOptions() const{ return m_iamIdentityCenterOptions; }
    inline bool IamIdentityCenterOptionsHasBeenSet() const { return m_iamIdentityCenterOptionsHasBeenSet; }
    inline void SetIamIdentityCenterOptions(const IamIdentityCenterConfigOptions& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = value; }
    inline void SetIamIdentityCenterOptions(IamIdentityCenterConfigOptions&& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = std::move(value); }
    inline SecurityConfigDetail& WithIamIdentityCenterOptions(const IamIdentityCenterConfigOptions& value) { SetIamIdentityCenterOptions(value); return *this;}
    inline SecurityConfigDetail& WithIamIdentityCenterOptions(IamIdentityCenterConfigOptions&& value) { SetIamIdentityCenterOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the security configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SecurityConfigDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SecurityConfigDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SecurityConfigDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the configuration was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline SecurityConfigDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>SAML options for the security configuration in the form of a key-value
     * map.</p>
     */
    inline const SamlConfigOptions& GetSamlOptions() const{ return m_samlOptions; }
    inline bool SamlOptionsHasBeenSet() const { return m_samlOptionsHasBeenSet; }
    inline void SetSamlOptions(const SamlConfigOptions& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = value; }
    inline void SetSamlOptions(SamlConfigOptions&& value) { m_samlOptionsHasBeenSet = true; m_samlOptions = std::move(value); }
    inline SecurityConfigDetail& WithSamlOptions(const SamlConfigOptions& value) { SetSamlOptions(value); return *this;}
    inline SecurityConfigDetail& WithSamlOptions(SamlConfigOptions&& value) { SetSamlOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of security configuration.</p>
     */
    inline const SecurityConfigType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SecurityConfigType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SecurityConfigType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SecurityConfigDetail& WithType(const SecurityConfigType& value) { SetType(value); return *this;}
    inline SecurityConfigDetail& WithType(SecurityConfigType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_configVersion;
    bool m_configVersionHasBeenSet = false;

    long long m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IamIdentityCenterConfigOptions m_iamIdentityCenterOptions;
    bool m_iamIdentityCenterOptionsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    SamlConfigOptions m_samlOptions;
    bool m_samlOptionsHasBeenSet = false;

    SecurityConfigType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
