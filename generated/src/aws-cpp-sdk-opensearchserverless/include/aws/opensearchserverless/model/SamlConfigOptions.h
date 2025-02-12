/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Describes SAML options for an OpenSearch Serverless security configuration in
   * the form of a key-value map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/SamlConfigOptions">AWS
   * API Reference</a></p>
   */
  class SamlConfigOptions
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API SamlConfigOptions();
    AWS_OPENSEARCHSERVERLESS_API SamlConfigOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API SamlConfigOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline SamlConfigOptions& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline SamlConfigOptions& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline SamlConfigOptions& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline const Aws::String& GetUserAttribute() const{ return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    inline void SetUserAttribute(const Aws::String& value) { m_userAttributeHasBeenSet = true; m_userAttribute = value; }
    inline void SetUserAttribute(Aws::String&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::move(value); }
    inline void SetUserAttribute(const char* value) { m_userAttributeHasBeenSet = true; m_userAttribute.assign(value); }
    inline SamlConfigOptions& WithUserAttribute(const Aws::String& value) { SetUserAttribute(value); return *this;}
    inline SamlConfigOptions& WithUserAttribute(Aws::String&& value) { SetUserAttribute(std::move(value)); return *this;}
    inline SamlConfigOptions& WithUserAttribute(const char* value) { SetUserAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline const Aws::String& GetGroupAttribute() const{ return m_groupAttribute; }
    inline bool GroupAttributeHasBeenSet() const { return m_groupAttributeHasBeenSet; }
    inline void SetGroupAttribute(const Aws::String& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = value; }
    inline void SetGroupAttribute(Aws::String&& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = std::move(value); }
    inline void SetGroupAttribute(const char* value) { m_groupAttributeHasBeenSet = true; m_groupAttribute.assign(value); }
    inline SamlConfigOptions& WithGroupAttribute(const Aws::String& value) { SetGroupAttribute(value); return *this;}
    inline SamlConfigOptions& WithGroupAttribute(Aws::String&& value) { SetGroupAttribute(std::move(value)); return *this;}
    inline SamlConfigOptions& WithGroupAttribute(const char* value) { SetGroupAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom entity id attribute to override default entity id for this saml
     * integration.</p>
     */
    inline const Aws::String& GetOpenSearchServerlessEntityId() const{ return m_openSearchServerlessEntityId; }
    inline bool OpenSearchServerlessEntityIdHasBeenSet() const { return m_openSearchServerlessEntityIdHasBeenSet; }
    inline void SetOpenSearchServerlessEntityId(const Aws::String& value) { m_openSearchServerlessEntityIdHasBeenSet = true; m_openSearchServerlessEntityId = value; }
    inline void SetOpenSearchServerlessEntityId(Aws::String&& value) { m_openSearchServerlessEntityIdHasBeenSet = true; m_openSearchServerlessEntityId = std::move(value); }
    inline void SetOpenSearchServerlessEntityId(const char* value) { m_openSearchServerlessEntityIdHasBeenSet = true; m_openSearchServerlessEntityId.assign(value); }
    inline SamlConfigOptions& WithOpenSearchServerlessEntityId(const Aws::String& value) { SetOpenSearchServerlessEntityId(value); return *this;}
    inline SamlConfigOptions& WithOpenSearchServerlessEntityId(Aws::String&& value) { SetOpenSearchServerlessEntityId(std::move(value)); return *this;}
    inline SamlConfigOptions& WithOpenSearchServerlessEntityId(const char* value) { SetOpenSearchServerlessEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session timeout, in minutes. Default is 60 minutes (12 hours).</p>
     */
    inline int GetSessionTimeout() const{ return m_sessionTimeout; }
    inline bool SessionTimeoutHasBeenSet() const { return m_sessionTimeoutHasBeenSet; }
    inline void SetSessionTimeout(int value) { m_sessionTimeoutHasBeenSet = true; m_sessionTimeout = value; }
    inline SamlConfigOptions& WithSessionTimeout(int value) { SetSessionTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_userAttribute;
    bool m_userAttributeHasBeenSet = false;

    Aws::String m_groupAttribute;
    bool m_groupAttributeHasBeenSet = false;

    Aws::String m_openSearchServerlessEntityId;
    bool m_openSearchServerlessEntityIdHasBeenSet = false;

    int m_sessionTimeout;
    bool m_sessionTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
