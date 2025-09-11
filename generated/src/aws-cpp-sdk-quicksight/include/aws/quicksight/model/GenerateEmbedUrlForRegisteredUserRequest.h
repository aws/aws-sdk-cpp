/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RegisteredUserEmbeddingExperienceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class GenerateEmbedUrlForRegisteredUserRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateEmbedUrlForRegisteredUser"; }

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
    GenerateEmbedUrlForRegisteredUserRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many minutes the session is valid. The session lifetime must be in
     * [15-600] minutes range.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const { return m_sessionLifetimeInMinutes; }
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }
    inline GenerateEmbedUrlForRegisteredUserRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline const Aws::String& GetUserArn() const { return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    template<typename UserArnT = Aws::String>
    void SetUserArn(UserArnT&& value) { m_userArnHasBeenSet = true; m_userArn = std::forward<UserArnT>(value); }
    template<typename UserArnT = Aws::String>
    GenerateEmbedUrlForRegisteredUserRequest& WithUserArn(UserArnT&& value) { SetUserArn(std::forward<UserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experience that you want to embed. For registered users, you can embed
     * QuickSight dashboards, QuickSight visuals, the QuickSight Q search bar, the
     * QuickSight Generative Q&amp;A experience, or the entire QuickSight console.</p>
     */
    inline const RegisteredUserEmbeddingExperienceConfiguration& GetExperienceConfiguration() const { return m_experienceConfiguration; }
    inline bool ExperienceConfigurationHasBeenSet() const { return m_experienceConfigurationHasBeenSet; }
    template<typename ExperienceConfigurationT = RegisteredUserEmbeddingExperienceConfiguration>
    void SetExperienceConfiguration(ExperienceConfigurationT&& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = std::forward<ExperienceConfigurationT>(value); }
    template<typename ExperienceConfigurationT = RegisteredUserEmbeddingExperienceConfiguration>
    GenerateEmbedUrlForRegisteredUserRequest& WithExperienceConfiguration(ExperienceConfigurationT&& value) { SetExperienceConfiguration(std::forward<ExperienceConfigurationT>(value)); return *this;}
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
    GenerateEmbedUrlForRegisteredUserRequest& WithAllowedDomains(AllowedDomainsT&& value) { SetAllowedDomains(std::forward<AllowedDomainsT>(value)); return *this;}
    template<typename AllowedDomainsT = Aws::String>
    GenerateEmbedUrlForRegisteredUserRequest& AddAllowedDomains(AllowedDomainsT&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains.emplace_back(std::forward<AllowedDomainsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    long long m_sessionLifetimeInMinutes{0};
    bool m_sessionLifetimeInMinutesHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    RegisteredUserEmbeddingExperienceConfiguration m_experienceConfiguration;
    bool m_experienceConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedDomains;
    bool m_allowedDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
