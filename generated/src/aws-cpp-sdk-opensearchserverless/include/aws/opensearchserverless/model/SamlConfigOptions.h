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
    AWS_OPENSEARCHSERVERLESS_API SamlConfigOptions() = default;
    AWS_OPENSEARCHSERVERLESS_API SamlConfigOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API SamlConfigOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    SamlConfigOptions& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline const Aws::String& GetUserAttribute() const { return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    template<typename UserAttributeT = Aws::String>
    void SetUserAttribute(UserAttributeT&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::forward<UserAttributeT>(value); }
    template<typename UserAttributeT = Aws::String>
    SamlConfigOptions& WithUserAttribute(UserAttributeT&& value) { SetUserAttribute(std::forward<UserAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline const Aws::String& GetGroupAttribute() const { return m_groupAttribute; }
    inline bool GroupAttributeHasBeenSet() const { return m_groupAttributeHasBeenSet; }
    template<typename GroupAttributeT = Aws::String>
    void SetGroupAttribute(GroupAttributeT&& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = std::forward<GroupAttributeT>(value); }
    template<typename GroupAttributeT = Aws::String>
    SamlConfigOptions& WithGroupAttribute(GroupAttributeT&& value) { SetGroupAttribute(std::forward<GroupAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom entity ID attribute to override the default entity ID for this SAML
     * integration.</p>
     */
    inline const Aws::String& GetOpenSearchServerlessEntityId() const { return m_openSearchServerlessEntityId; }
    inline bool OpenSearchServerlessEntityIdHasBeenSet() const { return m_openSearchServerlessEntityIdHasBeenSet; }
    template<typename OpenSearchServerlessEntityIdT = Aws::String>
    void SetOpenSearchServerlessEntityId(OpenSearchServerlessEntityIdT&& value) { m_openSearchServerlessEntityIdHasBeenSet = true; m_openSearchServerlessEntityId = std::forward<OpenSearchServerlessEntityIdT>(value); }
    template<typename OpenSearchServerlessEntityIdT = Aws::String>
    SamlConfigOptions& WithOpenSearchServerlessEntityId(OpenSearchServerlessEntityIdT&& value) { SetOpenSearchServerlessEntityId(std::forward<OpenSearchServerlessEntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session timeout, in minutes. Default is 60 minutes (12 hours).</p>
     */
    inline int GetSessionTimeout() const { return m_sessionTimeout; }
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

    int m_sessionTimeout{0};
    bool m_sessionTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
