/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Provider.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>A reference to an issue created for a finding in a third-party issue
 * tracker.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/LinkedIssue">AWS
 * API Reference</a></p>
 */
class LinkedIssue {
 public:
  AWS_SECURITYAGENT_API LinkedIssue() = default;
  AWS_SECURITYAGENT_API LinkedIssue(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API LinkedIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The issue-tracker provider.</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline LinkedIssue& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The integration identifier for the issue-tracker provider.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  LinkedIssue& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key of the project the issue belongs to.</p>
   */
  inline const Aws::String& GetProjectKey() const { return m_projectKey; }
  inline bool ProjectKeyHasBeenSet() const { return m_projectKeyHasBeenSet; }
  template <typename ProjectKeyT = Aws::String>
  void SetProjectKey(ProjectKeyT&& value) {
    m_projectKeyHasBeenSet = true;
    m_projectKey = std::forward<ProjectKeyT>(value);
  }
  template <typename ProjectKeyT = Aws::String>
  LinkedIssue& WithProjectKey(ProjectKeyT&& value) {
    SetProjectKey(std::forward<ProjectKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issue key.</p>
   */
  inline const Aws::String& GetIssueKey() const { return m_issueKey; }
  inline bool IssueKeyHasBeenSet() const { return m_issueKeyHasBeenSet; }
  template <typename IssueKeyT = Aws::String>
  void SetIssueKey(IssueKeyT&& value) {
    m_issueKeyHasBeenSet = true;
    m_issueKey = std::forward<IssueKeyT>(value);
  }
  template <typename IssueKeyT = Aws::String>
  LinkedIssue& WithIssueKey(IssueKeyT&& value) {
    SetIssueKey(std::forward<IssueKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stable numeric issue identifier.</p>
   */
  inline const Aws::String& GetIssueId() const { return m_issueId; }
  inline bool IssueIdHasBeenSet() const { return m_issueIdHasBeenSet; }
  template <typename IssueIdT = Aws::String>
  void SetIssueId(IssueIdT&& value) {
    m_issueIdHasBeenSet = true;
    m_issueId = std::forward<IssueIdT>(value);
  }
  template <typename IssueIdT = Aws::String>
  LinkedIssue& WithIssueId(IssueIdT&& value) {
    SetIssueId(std::forward<IssueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issue URL.</p>
   */
  inline const Aws::String& GetIssueUrl() const { return m_issueUrl; }
  inline bool IssueUrlHasBeenSet() const { return m_issueUrlHasBeenSet; }
  template <typename IssueUrlT = Aws::String>
  void SetIssueUrl(IssueUrlT&& value) {
    m_issueUrlHasBeenSet = true;
    m_issueUrl = std::forward<IssueUrlT>(value);
  }
  template <typename IssueUrlT = Aws::String>
  LinkedIssue& WithIssueUrl(IssueUrlT&& value) {
    SetIssueUrl(std::forward<IssueUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Atlassian Cloud site URL.</p>
   */
  inline const Aws::String& GetSiteUrl() const { return m_siteUrl; }
  inline bool SiteUrlHasBeenSet() const { return m_siteUrlHasBeenSet; }
  template <typename SiteUrlT = Aws::String>
  void SetSiteUrl(SiteUrlT&& value) {
    m_siteUrlHasBeenSet = true;
    m_siteUrl = std::forward<SiteUrlT>(value);
  }
  template <typename SiteUrlT = Aws::String>
  LinkedIssue& WithSiteUrl(SiteUrlT&& value) {
    SetSiteUrl(std::forward<SiteUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Provider m_provider{Provider::NOT_SET};

  Aws::String m_integrationId;

  Aws::String m_projectKey;

  Aws::String m_issueKey;

  Aws::String m_issueId;

  Aws::String m_issueUrl;

  Aws::String m_siteUrl;
  bool m_providerHasBeenSet = false;
  bool m_integrationIdHasBeenSet = false;
  bool m_projectKeyHasBeenSet = false;
  bool m_issueKeyHasBeenSet = false;
  bool m_issueIdHasBeenSet = false;
  bool m_issueUrlHasBeenSet = false;
  bool m_siteUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
