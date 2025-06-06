﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/SamlStatusEnum.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the enablement status, user access URL, and relay state parameter
   * name that are used for configuring federation with an SAML 2.0 identity
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/SamlProperties">AWS
   * API Reference</a></p>
   */
  class SamlProperties
  {
  public:
    AWS_WORKSPACES_API SamlProperties() = default;
    AWS_WORKSPACES_API SamlProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API SamlProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the status of SAML 2.0 authentication. These statuses include the
     * following.</p> <ul> <li> <p>If the setting is <code>DISABLED</code>, end users
     * will be directed to login with their directory credentials.</p> </li> <li> <p>If
     * the setting is <code>ENABLED</code>, end users will be directed to login via the
     * user access URL. Users attempting to connect to WorkSpaces from a client
     * application that does not support SAML 2.0 authentication will not be able to
     * connect.</p> </li> <li> <p>If the setting is
     * <code>ENABLED_WITH_DIRECTORY_LOGIN_FALLBACK</code>, end users will be directed
     * to login via the user access URL on supported client applications, but will not
     * prevent clients that do not support SAML 2.0 authentication from connecting as
     * if SAML 2.0 authentication was disabled.</p> </li> </ul>
     */
    inline SamlStatusEnum GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SamlStatusEnum value) { m_statusHasBeenSet = true; m_status = value; }
    inline SamlProperties& WithStatus(SamlStatusEnum value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAML 2.0 identity provider (IdP) user access URL is the URL a user would
     * navigate to in their web browser in order to federate from the IdP and directly
     * access the application, without any SAML 2.0 service provider (SP) bindings.</p>
     */
    inline const Aws::String& GetUserAccessUrl() const { return m_userAccessUrl; }
    inline bool UserAccessUrlHasBeenSet() const { return m_userAccessUrlHasBeenSet; }
    template<typename UserAccessUrlT = Aws::String>
    void SetUserAccessUrl(UserAccessUrlT&& value) { m_userAccessUrlHasBeenSet = true; m_userAccessUrl = std::forward<UserAccessUrlT>(value); }
    template<typename UserAccessUrlT = Aws::String>
    SamlProperties& WithUserAccessUrl(UserAccessUrlT&& value) { SetUserAccessUrl(std::forward<UserAccessUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relay state parameter name supported by the SAML 2.0 identity provider
     * (IdP). When the end user is redirected to the user access URL from the
     * WorkSpaces client application, this relay state parameter name is appended as a
     * query parameter to the URL along with the relay state endpoint to return the
     * user to the client application session.</p> <p>To use SAML 2.0 authentication
     * with WorkSpaces, the IdP must support IdP-initiated deep linking for the relay
     * state URL. Consult your IdP documentation for more information.</p>
     */
    inline const Aws::String& GetRelayStateParameterName() const { return m_relayStateParameterName; }
    inline bool RelayStateParameterNameHasBeenSet() const { return m_relayStateParameterNameHasBeenSet; }
    template<typename RelayStateParameterNameT = Aws::String>
    void SetRelayStateParameterName(RelayStateParameterNameT&& value) { m_relayStateParameterNameHasBeenSet = true; m_relayStateParameterName = std::forward<RelayStateParameterNameT>(value); }
    template<typename RelayStateParameterNameT = Aws::String>
    SamlProperties& WithRelayStateParameterName(RelayStateParameterNameT&& value) { SetRelayStateParameterName(std::forward<RelayStateParameterNameT>(value)); return *this;}
    ///@}
  private:

    SamlStatusEnum m_status{SamlStatusEnum::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_userAccessUrl;
    bool m_userAccessUrlHasBeenSet = false;

    Aws::String m_relayStateParameterName;
    bool m_relayStateParameterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
