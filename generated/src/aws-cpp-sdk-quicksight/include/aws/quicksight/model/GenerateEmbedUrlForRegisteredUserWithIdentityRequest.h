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
  class GenerateEmbedUrlForRegisteredUserWithIdentityRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserWithIdentityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateEmbedUrlForRegisteredUserWithIdentity"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services registered user.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validity of the session in minutes.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const { return m_sessionLifetimeInMinutes; }
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}
    ///@}

    ///@{
    
    inline const RegisteredUserEmbeddingExperienceConfiguration& GetExperienceConfiguration() const { return m_experienceConfiguration; }
    inline bool ExperienceConfigurationHasBeenSet() const { return m_experienceConfigurationHasBeenSet; }
    template<typename ExperienceConfigurationT = RegisteredUserEmbeddingExperienceConfiguration>
    void SetExperienceConfiguration(ExperienceConfigurationT&& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = std::forward<ExperienceConfigurationT>(value); }
    template<typename ExperienceConfigurationT = RegisteredUserEmbeddingExperienceConfiguration>
    GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithExperienceConfiguration(ExperienceConfigurationT&& value) { SetExperienceConfiguration(std::forward<ExperienceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of domains to be allowed to generate the embed URL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedDomains() const { return m_allowedDomains; }
    inline bool AllowedDomainsHasBeenSet() const { return m_allowedDomainsHasBeenSet; }
    template<typename AllowedDomainsT = Aws::Vector<Aws::String>>
    void SetAllowedDomains(AllowedDomainsT&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains = std::forward<AllowedDomainsT>(value); }
    template<typename AllowedDomainsT = Aws::Vector<Aws::String>>
    GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithAllowedDomains(AllowedDomainsT&& value) { SetAllowedDomains(std::forward<AllowedDomainsT>(value)); return *this;}
    template<typename AllowedDomainsT = Aws::String>
    GenerateEmbedUrlForRegisteredUserWithIdentityRequest& AddAllowedDomains(AllowedDomainsT&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains.emplace_back(std::forward<AllowedDomainsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    long long m_sessionLifetimeInMinutes{0};
    bool m_sessionLifetimeInMinutesHasBeenSet = false;

    RegisteredUserEmbeddingExperienceConfiguration m_experienceConfiguration;
    bool m_experienceConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedDomains;
    bool m_allowedDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
