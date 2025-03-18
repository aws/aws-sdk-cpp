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
    AWS_QUICKSIGHT_API OAuthParameters() = default;
    AWS_QUICKSIGHT_API OAuthParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API OAuthParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The token endpoint URL of the identity provider.</p>
     */
    inline const Aws::String& GetTokenProviderUrl() const { return m_tokenProviderUrl; }
    inline bool TokenProviderUrlHasBeenSet() const { return m_tokenProviderUrlHasBeenSet; }
    template<typename TokenProviderUrlT = Aws::String>
    void SetTokenProviderUrl(TokenProviderUrlT&& value) { m_tokenProviderUrlHasBeenSet = true; m_tokenProviderUrl = std::forward<TokenProviderUrlT>(value); }
    template<typename TokenProviderUrlT = Aws::String>
    OAuthParameters& WithTokenProviderUrl(TokenProviderUrlT&& value) { SetTokenProviderUrl(std::forward<TokenProviderUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth scope.</p>
     */
    inline const Aws::String& GetOAuthScope() const { return m_oAuthScope; }
    inline bool OAuthScopeHasBeenSet() const { return m_oAuthScopeHasBeenSet; }
    template<typename OAuthScopeT = Aws::String>
    void SetOAuthScope(OAuthScopeT&& value) { m_oAuthScopeHasBeenSet = true; m_oAuthScope = std::forward<OAuthScopeT>(value); }
    template<typename OAuthScopeT = Aws::String>
    OAuthParameters& WithOAuthScope(OAuthScopeT&& value) { SetOAuthScope(std::forward<OAuthScopeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConnectionProperties& GetIdentityProviderVpcConnectionProperties() const { return m_identityProviderVpcConnectionProperties; }
    inline bool IdentityProviderVpcConnectionPropertiesHasBeenSet() const { return m_identityProviderVpcConnectionPropertiesHasBeenSet; }
    template<typename IdentityProviderVpcConnectionPropertiesT = VpcConnectionProperties>
    void SetIdentityProviderVpcConnectionProperties(IdentityProviderVpcConnectionPropertiesT&& value) { m_identityProviderVpcConnectionPropertiesHasBeenSet = true; m_identityProviderVpcConnectionProperties = std::forward<IdentityProviderVpcConnectionPropertiesT>(value); }
    template<typename IdentityProviderVpcConnectionPropertiesT = VpcConnectionProperties>
    OAuthParameters& WithIdentityProviderVpcConnectionProperties(IdentityProviderVpcConnectionPropertiesT&& value) { SetIdentityProviderVpcConnectionProperties(std::forward<IdentityProviderVpcConnectionPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource uri of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderResourceUri() const { return m_identityProviderResourceUri; }
    inline bool IdentityProviderResourceUriHasBeenSet() const { return m_identityProviderResourceUriHasBeenSet; }
    template<typename IdentityProviderResourceUriT = Aws::String>
    void SetIdentityProviderResourceUri(IdentityProviderResourceUriT&& value) { m_identityProviderResourceUriHasBeenSet = true; m_identityProviderResourceUri = std::forward<IdentityProviderResourceUriT>(value); }
    template<typename IdentityProviderResourceUriT = Aws::String>
    OAuthParameters& WithIdentityProviderResourceUri(IdentityProviderResourceUriT&& value) { SetIdentityProviderResourceUri(std::forward<IdentityProviderResourceUriT>(value)); return *this;}
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
