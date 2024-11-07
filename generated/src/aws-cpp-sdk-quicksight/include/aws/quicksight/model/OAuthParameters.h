/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An object that contains information needed to create a data source connection
   * that uses OAuth client credentials. This option is available for data source
   * connections that are made with Snowflake and Starburst.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/OAuthParameters">AWS
   * API Reference</a></p>
   */
  class OAuthParameters
  {
  public:
    AWS_QUICKSIGHT_API OAuthParameters();
    AWS_QUICKSIGHT_API OAuthParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API OAuthParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The token endpoint URL of the identity provider.</p>
     */
    inline const Aws::String& GetTokenProviderUrl() const{ return m_tokenProviderUrl; }
    inline bool TokenProviderUrlHasBeenSet() const { return m_tokenProviderUrlHasBeenSet; }
    inline void SetTokenProviderUrl(const Aws::String& value) { m_tokenProviderUrlHasBeenSet = true; m_tokenProviderUrl = value; }
    inline void SetTokenProviderUrl(Aws::String&& value) { m_tokenProviderUrlHasBeenSet = true; m_tokenProviderUrl = std::move(value); }
    inline void SetTokenProviderUrl(const char* value) { m_tokenProviderUrlHasBeenSet = true; m_tokenProviderUrl.assign(value); }
    inline OAuthParameters& WithTokenProviderUrl(const Aws::String& value) { SetTokenProviderUrl(value); return *this;}
    inline OAuthParameters& WithTokenProviderUrl(Aws::String&& value) { SetTokenProviderUrl(std::move(value)); return *this;}
    inline OAuthParameters& WithTokenProviderUrl(const char* value) { SetTokenProviderUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth scope.</p>
     */
    inline const Aws::String& GetOAuthScope() const{ return m_oAuthScope; }
    inline bool OAuthScopeHasBeenSet() const { return m_oAuthScopeHasBeenSet; }
    inline void SetOAuthScope(const Aws::String& value) { m_oAuthScopeHasBeenSet = true; m_oAuthScope = value; }
    inline void SetOAuthScope(Aws::String&& value) { m_oAuthScopeHasBeenSet = true; m_oAuthScope = std::move(value); }
    inline void SetOAuthScope(const char* value) { m_oAuthScopeHasBeenSet = true; m_oAuthScope.assign(value); }
    inline OAuthParameters& WithOAuthScope(const Aws::String& value) { SetOAuthScope(value); return *this;}
    inline OAuthParameters& WithOAuthScope(Aws::String&& value) { SetOAuthScope(std::move(value)); return *this;}
    inline OAuthParameters& WithOAuthScope(const char* value) { SetOAuthScope(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcConnectionProperties& GetIdentityProviderVpcConnectionProperties() const{ return m_identityProviderVpcConnectionProperties; }
    inline bool IdentityProviderVpcConnectionPropertiesHasBeenSet() const { return m_identityProviderVpcConnectionPropertiesHasBeenSet; }
    inline void SetIdentityProviderVpcConnectionProperties(const VpcConnectionProperties& value) { m_identityProviderVpcConnectionPropertiesHasBeenSet = true; m_identityProviderVpcConnectionProperties = value; }
    inline void SetIdentityProviderVpcConnectionProperties(VpcConnectionProperties&& value) { m_identityProviderVpcConnectionPropertiesHasBeenSet = true; m_identityProviderVpcConnectionProperties = std::move(value); }
    inline OAuthParameters& WithIdentityProviderVpcConnectionProperties(const VpcConnectionProperties& value) { SetIdentityProviderVpcConnectionProperties(value); return *this;}
    inline OAuthParameters& WithIdentityProviderVpcConnectionProperties(VpcConnectionProperties&& value) { SetIdentityProviderVpcConnectionProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource uri of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderResourceUri() const{ return m_identityProviderResourceUri; }
    inline bool IdentityProviderResourceUriHasBeenSet() const { return m_identityProviderResourceUriHasBeenSet; }
    inline void SetIdentityProviderResourceUri(const Aws::String& value) { m_identityProviderResourceUriHasBeenSet = true; m_identityProviderResourceUri = value; }
    inline void SetIdentityProviderResourceUri(Aws::String&& value) { m_identityProviderResourceUriHasBeenSet = true; m_identityProviderResourceUri = std::move(value); }
    inline void SetIdentityProviderResourceUri(const char* value) { m_identityProviderResourceUriHasBeenSet = true; m_identityProviderResourceUri.assign(value); }
    inline OAuthParameters& WithIdentityProviderResourceUri(const Aws::String& value) { SetIdentityProviderResourceUri(value); return *this;}
    inline OAuthParameters& WithIdentityProviderResourceUri(Aws::String&& value) { SetIdentityProviderResourceUri(std::move(value)); return *this;}
    inline OAuthParameters& WithIdentityProviderResourceUri(const char* value) { SetIdentityProviderResourceUri(value); return *this;}
    ///@}
  private:

    Aws::String m_tokenProviderUrl;
    bool m_tokenProviderUrlHasBeenSet = false;

    Aws::String m_oAuthScope;
    bool m_oAuthScopeHasBeenSet = false;

    VpcConnectionProperties m_identityProviderVpcConnectionProperties;
    bool m_identityProviderVpcConnectionPropertiesHasBeenSet = false;

    Aws::String m_identityProviderResourceUri;
    bool m_identityProviderResourceUriHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
