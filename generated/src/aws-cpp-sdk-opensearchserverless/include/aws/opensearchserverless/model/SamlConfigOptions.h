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


    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline const Aws::String& GetGroupAttribute() const{ return m_groupAttribute; }

    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline bool GroupAttributeHasBeenSet() const { return m_groupAttributeHasBeenSet; }

    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline void SetGroupAttribute(const Aws::String& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = value; }

    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline void SetGroupAttribute(Aws::String&& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = std::move(value); }

    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline void SetGroupAttribute(const char* value) { m_groupAttributeHasBeenSet = true; m_groupAttribute.assign(value); }

    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline SamlConfigOptions& WithGroupAttribute(const Aws::String& value) { SetGroupAttribute(value); return *this;}

    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline SamlConfigOptions& WithGroupAttribute(Aws::String&& value) { SetGroupAttribute(std::move(value)); return *this;}

    /**
     * <p>The group attribute for this SAML integration.</p>
     */
    inline SamlConfigOptions& WithGroupAttribute(const char* value) { SetGroupAttribute(value); return *this;}


    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline SamlConfigOptions& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline SamlConfigOptions& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The XML IdP metadata file generated from your identity provider.</p>
     */
    inline SamlConfigOptions& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The session timeout, in minutes. Minimum is 15 minutes and maximum is 1440
     * minutes (24 hours or 1 day). Default is 60 minutes.</p>
     */
    inline int GetSessionTimeout() const{ return m_sessionTimeout; }

    /**
     * <p>The session timeout, in minutes. Minimum is 15 minutes and maximum is 1440
     * minutes (24 hours or 1 day). Default is 60 minutes.</p>
     */
    inline bool SessionTimeoutHasBeenSet() const { return m_sessionTimeoutHasBeenSet; }

    /**
     * <p>The session timeout, in minutes. Minimum is 15 minutes and maximum is 1440
     * minutes (24 hours or 1 day). Default is 60 minutes.</p>
     */
    inline void SetSessionTimeout(int value) { m_sessionTimeoutHasBeenSet = true; m_sessionTimeout = value; }

    /**
     * <p>The session timeout, in minutes. Minimum is 15 minutes and maximum is 1440
     * minutes (24 hours or 1 day). Default is 60 minutes.</p>
     */
    inline SamlConfigOptions& WithSessionTimeout(int value) { SetSessionTimeout(value); return *this;}


    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline const Aws::String& GetUserAttribute() const{ return m_userAttribute; }

    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }

    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline void SetUserAttribute(const Aws::String& value) { m_userAttributeHasBeenSet = true; m_userAttribute = value; }

    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline void SetUserAttribute(Aws::String&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::move(value); }

    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline void SetUserAttribute(const char* value) { m_userAttributeHasBeenSet = true; m_userAttribute.assign(value); }

    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline SamlConfigOptions& WithUserAttribute(const Aws::String& value) { SetUserAttribute(value); return *this;}

    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline SamlConfigOptions& WithUserAttribute(Aws::String&& value) { SetUserAttribute(std::move(value)); return *this;}

    /**
     * <p>A user attribute for this SAML integration.</p>
     */
    inline SamlConfigOptions& WithUserAttribute(const char* value) { SetUserAttribute(value); return *this;}

  private:

    Aws::String m_groupAttribute;
    bool m_groupAttributeHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    int m_sessionTimeout;
    bool m_sessionTimeoutHasBeenSet = false;

    Aws::String m_userAttribute;
    bool m_userAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
