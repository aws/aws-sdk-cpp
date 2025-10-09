/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ReadAuthorizationCodeGrantCredentialsDetails.h>
#include <aws/quicksight/model/AuthorizationCodeGrantCredentialsSource.h>
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
   * <p>Read-only metadata for OAuth2 authorization code grant authentication
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadAuthorizationCodeGrantMetadata">AWS
   * API Reference</a></p>
   */
  class ReadAuthorizationCodeGrantMetadata
  {
  public:
    AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantMetadata() = default;
    AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base endpoint URL for the OAuth2 authorization code grant flow.</p>
     */
    inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
    inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
    template<typename BaseEndpointT = Aws::String>
    void SetBaseEndpoint(BaseEndpointT&& value) { m_baseEndpointHasBeenSet = true; m_baseEndpoint = std::forward<BaseEndpointT>(value); }
    template<typename BaseEndpointT = Aws::String>
    ReadAuthorizationCodeGrantMetadata& WithBaseEndpoint(BaseEndpointT&& value) { SetBaseEndpoint(std::forward<BaseEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redirect URL where the authorization server will send the user after
     * authorization.</p>
     */
    inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
    inline bool RedirectUrlHasBeenSet() const { return m_redirectUrlHasBeenSet; }
    template<typename RedirectUrlT = Aws::String>
    void SetRedirectUrl(RedirectUrlT&& value) { m_redirectUrlHasBeenSet = true; m_redirectUrl = std::forward<RedirectUrlT>(value); }
    template<typename RedirectUrlT = Aws::String>
    ReadAuthorizationCodeGrantMetadata& WithRedirectUrl(RedirectUrlT&& value) { SetRedirectUrl(std::forward<RedirectUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read-only credentials details for the authorization code grant flow.</p>
     */
    inline const ReadAuthorizationCodeGrantCredentialsDetails& GetReadAuthorizationCodeGrantCredentialsDetails() const { return m_readAuthorizationCodeGrantCredentialsDetails; }
    inline bool ReadAuthorizationCodeGrantCredentialsDetailsHasBeenSet() const { return m_readAuthorizationCodeGrantCredentialsDetailsHasBeenSet; }
    template<typename ReadAuthorizationCodeGrantCredentialsDetailsT = ReadAuthorizationCodeGrantCredentialsDetails>
    void SetReadAuthorizationCodeGrantCredentialsDetails(ReadAuthorizationCodeGrantCredentialsDetailsT&& value) { m_readAuthorizationCodeGrantCredentialsDetailsHasBeenSet = true; m_readAuthorizationCodeGrantCredentialsDetails = std::forward<ReadAuthorizationCodeGrantCredentialsDetailsT>(value); }
    template<typename ReadAuthorizationCodeGrantCredentialsDetailsT = ReadAuthorizationCodeGrantCredentialsDetails>
    ReadAuthorizationCodeGrantMetadata& WithReadAuthorizationCodeGrantCredentialsDetails(ReadAuthorizationCodeGrantCredentialsDetailsT&& value) { SetReadAuthorizationCodeGrantCredentialsDetails(std::forward<ReadAuthorizationCodeGrantCredentialsDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of credentials for the authorization code grant flow.</p>
     */
    inline AuthorizationCodeGrantCredentialsSource GetAuthorizationCodeGrantCredentialsSource() const { return m_authorizationCodeGrantCredentialsSource; }
    inline bool AuthorizationCodeGrantCredentialsSourceHasBeenSet() const { return m_authorizationCodeGrantCredentialsSourceHasBeenSet; }
    inline void SetAuthorizationCodeGrantCredentialsSource(AuthorizationCodeGrantCredentialsSource value) { m_authorizationCodeGrantCredentialsSourceHasBeenSet = true; m_authorizationCodeGrantCredentialsSource = value; }
    inline ReadAuthorizationCodeGrantMetadata& WithAuthorizationCodeGrantCredentialsSource(AuthorizationCodeGrantCredentialsSource value) { SetAuthorizationCodeGrantCredentialsSource(value); return *this;}
    ///@}
  private:

    Aws::String m_baseEndpoint;
    bool m_baseEndpointHasBeenSet = false;

    Aws::String m_redirectUrl;
    bool m_redirectUrlHasBeenSet = false;

    ReadAuthorizationCodeGrantCredentialsDetails m_readAuthorizationCodeGrantCredentialsDetails;
    bool m_readAuthorizationCodeGrantCredentialsDetailsHasBeenSet = false;

    AuthorizationCodeGrantCredentialsSource m_authorizationCodeGrantCredentialsSource{AuthorizationCodeGrantCredentialsSource::NOT_SET};
    bool m_authorizationCodeGrantCredentialsSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
