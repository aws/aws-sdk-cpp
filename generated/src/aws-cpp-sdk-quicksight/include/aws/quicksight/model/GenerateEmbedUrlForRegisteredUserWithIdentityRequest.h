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
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserWithIdentityRequest();

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
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validity of the session in minutes.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const{ return m_sessionLifetimeInMinutes; }
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}
    ///@}

    ///@{
    
    inline const RegisteredUserEmbeddingExperienceConfiguration& GetExperienceConfiguration() const{ return m_experienceConfiguration; }
    inline bool ExperienceConfigurationHasBeenSet() const { return m_experienceConfigurationHasBeenSet; }
    inline void SetExperienceConfiguration(const RegisteredUserEmbeddingExperienceConfiguration& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = value; }
    inline void SetExperienceConfiguration(RegisteredUserEmbeddingExperienceConfiguration&& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = std::move(value); }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithExperienceConfiguration(const RegisteredUserEmbeddingExperienceConfiguration& value) { SetExperienceConfiguration(value); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithExperienceConfiguration(RegisteredUserEmbeddingExperienceConfiguration&& value) { SetExperienceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of domains to be allowed to generate the embed URL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedDomains() const{ return m_allowedDomains; }
    inline bool AllowedDomainsHasBeenSet() const { return m_allowedDomainsHasBeenSet; }
    inline void SetAllowedDomains(const Aws::Vector<Aws::String>& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains = value; }
    inline void SetAllowedDomains(Aws::Vector<Aws::String>&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains = std::move(value); }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithAllowedDomains(const Aws::Vector<Aws::String>& value) { SetAllowedDomains(value); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& WithAllowedDomains(Aws::Vector<Aws::String>&& value) { SetAllowedDomains(std::move(value)); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& AddAllowedDomains(const Aws::String& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains.push_back(value); return *this; }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& AddAllowedDomains(Aws::String&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains.push_back(std::move(value)); return *this; }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityRequest& AddAllowedDomains(const char* value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    long long m_sessionLifetimeInMinutes;
    bool m_sessionLifetimeInMinutesHasBeenSet = false;

    RegisteredUserEmbeddingExperienceConfiguration m_experienceConfiguration;
    bool m_experienceConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedDomains;
    bool m_allowedDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
