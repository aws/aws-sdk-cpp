/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ConnectorAuthStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the configuration and status of a Jira Cloud
   * integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/JiraCloudDetail">AWS
   * API Reference</a></p>
   */
  class JiraCloudDetail
  {
  public:
    AWS_SECURITYHUB_API JiraCloudDetail() = default;
    AWS_SECURITYHUB_API JiraCloudDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API JiraCloudDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cloud id of the Jira Cloud.</p>
     */
    inline const Aws::String& GetCloudId() const { return m_cloudId; }
    inline bool CloudIdHasBeenSet() const { return m_cloudIdHasBeenSet; }
    template<typename CloudIdT = Aws::String>
    void SetCloudId(CloudIdT&& value) { m_cloudIdHasBeenSet = true; m_cloudId = std::forward<CloudIdT>(value); }
    template<typename CloudIdT = Aws::String>
    JiraCloudDetail& WithCloudId(CloudIdT&& value) { SetCloudId(std::forward<CloudIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The projectKey of Jira Cloud.</p>
     */
    inline const Aws::String& GetProjectKey() const { return m_projectKey; }
    inline bool ProjectKeyHasBeenSet() const { return m_projectKeyHasBeenSet; }
    template<typename ProjectKeyT = Aws::String>
    void SetProjectKey(ProjectKeyT&& value) { m_projectKeyHasBeenSet = true; m_projectKey = std::forward<ProjectKeyT>(value); }
    template<typename ProjectKeyT = Aws::String>
    JiraCloudDetail& WithProjectKey(ProjectKeyT&& value) { SetProjectKey(std::forward<ProjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL domain of your Jira Cloud instance.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    JiraCloudDetail& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to provide to customers for OAuth auth code flow.</p>
     */
    inline const Aws::String& GetAuthUrl() const { return m_authUrl; }
    inline bool AuthUrlHasBeenSet() const { return m_authUrlHasBeenSet; }
    template<typename AuthUrlT = Aws::String>
    void SetAuthUrl(AuthUrlT&& value) { m_authUrlHasBeenSet = true; m_authUrl = std::forward<AuthUrlT>(value); }
    template<typename AuthUrlT = Aws::String>
    JiraCloudDetail& WithAuthUrl(AuthUrlT&& value) { SetAuthUrl(std::forward<AuthUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the authorization between Jira Cloud and the service.</p>
     */
    inline ConnectorAuthStatus GetAuthStatus() const { return m_authStatus; }
    inline bool AuthStatusHasBeenSet() const { return m_authStatusHasBeenSet; }
    inline void SetAuthStatus(ConnectorAuthStatus value) { m_authStatusHasBeenSet = true; m_authStatus = value; }
    inline JiraCloudDetail& WithAuthStatus(ConnectorAuthStatus value) { SetAuthStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudId;
    bool m_cloudIdHasBeenSet = false;

    Aws::String m_projectKey;
    bool m_projectKeyHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_authUrl;
    bool m_authUrlHasBeenSet = false;

    ConnectorAuthStatus m_authStatus{ConnectorAuthStatus::NOT_SET};
    bool m_authStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
