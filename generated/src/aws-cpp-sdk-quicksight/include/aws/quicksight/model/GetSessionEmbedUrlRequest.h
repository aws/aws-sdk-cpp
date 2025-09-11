/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class GetSessionEmbedUrlRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API GetSessionEmbedUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSessionEmbedUrl"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID for the Amazon Web Services account associated with your QuickSight
     * subscription.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    GetSessionEmbedUrlRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL you use to access the embedded session. The entry point URL is
     * constrained to the following paths:</p> <ul> <li> <p> <code>/start</code> </p>
     * </li> <li> <p> <code>/start/analyses</code> </p> </li> <li> <p>
     * <code>/start/dashboards</code> </p> </li> <li> <p> <code>/start/favorites</code>
     * </p> </li> <li> <p> <code>/dashboards/<i>DashboardId</i> </code> - where
     * <code>DashboardId</code> is the actual ID key from the QuickSight console URL of
     * the dashboard</p> </li> <li> <p> <code>/analyses/<i>AnalysisId</i> </code> -
     * where <code>AnalysisId</code> is the actual ID key from the QuickSight console
     * URL of the analysis</p> </li> </ul>
     */
    inline const Aws::String& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = Aws::String>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = Aws::String>
    GetSessionEmbedUrlRequest& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many minutes the session is valid. The session lifetime must be 15-600
     * minutes.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const { return m_sessionLifetimeInMinutes; }
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }
    inline GetSessionEmbedUrlRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight user's Amazon Resource Name (ARN), for use with
     * <code>QUICKSIGHT</code> identity type. You can use this for any type of Amazon
     * QuickSight users in your account (readers, authors, or admins). They need to be
     * authenticated as one of the following:</p> <ol> <li> <p>Active Directory (AD)
     * users or group members</p> </li> <li> <p>Invited nonfederated users</p> </li>
     * <li> <p>IAM users and IAM role-based sessions authenticated through Federated
     * Single Sign-On using SAML, OpenID Connect, or IAM federation</p> </li> </ol>
     * <p>Omit this parameter for users in the third group, IAM users and IAM
     * role-based sessions.</p>
     */
    inline const Aws::String& GetUserArn() const { return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    template<typename UserArnT = Aws::String>
    void SetUserArn(UserArnT&& value) { m_userArnHasBeenSet = true; m_userArn = std::forward<UserArnT>(value); }
    template<typename UserArnT = Aws::String>
    GetSessionEmbedUrlRequest& WithUserArn(UserArnT&& value) { SetUserArn(std::forward<UserArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    long long m_sessionLifetimeInMinutes{0};
    bool m_sessionLifetimeInMinutesHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
