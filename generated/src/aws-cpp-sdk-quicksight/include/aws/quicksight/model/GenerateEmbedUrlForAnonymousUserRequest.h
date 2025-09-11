/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AnonymousUserEmbeddingExperienceConfiguration.h>
#include <aws/quicksight/model/SessionTag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class GenerateEmbedUrlForAnonymousUserRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API GenerateEmbedUrlForAnonymousUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateEmbedUrlForAnonymousUser"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    GenerateEmbedUrlForAnonymousUserRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many minutes the session is valid. The session lifetime must be in
     * [15-600] minutes range.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const { return m_sessionLifetimeInMinutes; }
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }
    inline GenerateEmbedUrlForAnonymousUserRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The QuickSight namespace that the anonymous user virtually belongs to. If you
     * are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    GenerateEmbedUrlForAnonymousUserRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<SessionTag>& GetSessionTags() const { return m_sessionTags; }
    inline bool SessionTagsHasBeenSet() const { return m_sessionTagsHasBeenSet; }
    template<typename SessionTagsT = Aws::Vector<SessionTag>>
    void SetSessionTags(SessionTagsT&& value) { m_sessionTagsHasBeenSet = true; m_sessionTags = std::forward<SessionTagsT>(value); }
    template<typename SessionTagsT = Aws::Vector<SessionTag>>
    GenerateEmbedUrlForAnonymousUserRequest& WithSessionTags(SessionTagsT&& value) { SetSessionTags(std::forward<SessionTagsT>(value)); return *this;}
    template<typename SessionTagsT = SessionTag>
    GenerateEmbedUrlForAnonymousUserRequest& AddSessionTags(SessionTagsT&& value) { m_sessionTagsHasBeenSet = true; m_sessionTags.emplace_back(std::forward<SessionTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) for the QuickSight resources that the user
     * is authorized to access during the lifetime of the session.</p> <p>If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p> <p>If you want to
     * make changes to the theme of your embedded content, pass a list of theme ARNs
     * that the anonymous users need access to.</p> <p>Currently, you can pass up to 25
     * theme ARNs in each API call.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedResourceArns() const { return m_authorizedResourceArns; }
    inline bool AuthorizedResourceArnsHasBeenSet() const { return m_authorizedResourceArnsHasBeenSet; }
    template<typename AuthorizedResourceArnsT = Aws::Vector<Aws::String>>
    void SetAuthorizedResourceArns(AuthorizedResourceArnsT&& value) { m_authorizedResourceArnsHasBeenSet = true; m_authorizedResourceArns = std::forward<AuthorizedResourceArnsT>(value); }
    template<typename AuthorizedResourceArnsT = Aws::Vector<Aws::String>>
    GenerateEmbedUrlForAnonymousUserRequest& WithAuthorizedResourceArns(AuthorizedResourceArnsT&& value) { SetAuthorizedResourceArns(std::forward<AuthorizedResourceArnsT>(value)); return *this;}
    template<typename AuthorizedResourceArnsT = Aws::String>
    GenerateEmbedUrlForAnonymousUserRequest& AddAuthorizedResourceArns(AuthorizedResourceArnsT&& value) { m_authorizedResourceArnsHasBeenSet = true; m_authorizedResourceArns.emplace_back(std::forward<AuthorizedResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the experience that you are embedding.</p>
     */
    inline const AnonymousUserEmbeddingExperienceConfiguration& GetExperienceConfiguration() const { return m_experienceConfiguration; }
    inline bool ExperienceConfigurationHasBeenSet() const { return m_experienceConfigurationHasBeenSet; }
    template<typename ExperienceConfigurationT = AnonymousUserEmbeddingExperienceConfiguration>
    void SetExperienceConfiguration(ExperienceConfigurationT&& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = std::forward<ExperienceConfigurationT>(value); }
    template<typename ExperienceConfigurationT = AnonymousUserEmbeddingExperienceConfiguration>
    GenerateEmbedUrlForAnonymousUserRequest& WithExperienceConfiguration(ExperienceConfigurationT&& value) { SetExperienceConfiguration(std::forward<ExperienceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domains that you want to add to the allow list for access to the
     * generated URL that is then embedded. This optional parameter overrides the
     * static domains that are configured in the Manage QuickSight menu in the
     * QuickSight console. Instead, it allows only the domains that you include in this
     * parameter. You can list up to three domains or subdomains in each API call.</p>
     * <p>To include all subdomains under a specific domain to the allow list, use
     * <code>*</code>. For example, <code>https:// *.sapp.amazon.com</code> includes all
     * subdomains under <code>https://sapp.amazon.com</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedDomains() const { return m_allowedDomains; }
    inline bool AllowedDomainsHasBeenSet() const { return m_allowedDomainsHasBeenSet; }
    template<typename AllowedDomainsT = Aws::Vector<Aws::String>>
    void SetAllowedDomains(AllowedDomainsT&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains = std::forward<AllowedDomainsT>(value); }
    template<typename AllowedDomainsT = Aws::Vector<Aws::String>>
    GenerateEmbedUrlForAnonymousUserRequest& WithAllowedDomains(AllowedDomainsT&& value) { SetAllowedDomains(std::forward<AllowedDomainsT>(value)); return *this;}
    template<typename AllowedDomainsT = Aws::String>
    GenerateEmbedUrlForAnonymousUserRequest& AddAllowedDomains(AllowedDomainsT&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains.emplace_back(std::forward<AllowedDomainsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    long long m_sessionLifetimeInMinutes{0};
    bool m_sessionLifetimeInMinutesHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<SessionTag> m_sessionTags;
    bool m_sessionTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedResourceArns;
    bool m_authorizedResourceArnsHasBeenSet = false;

    AnonymousUserEmbeddingExperienceConfiguration m_experienceConfiguration;
    bool m_experienceConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedDomains;
    bool m_allowedDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
