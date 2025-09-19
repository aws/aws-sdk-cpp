/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/EmbeddingIdentityType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetDashboardEmbedUrlRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API GetDashboardEmbedUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDashboardEmbedUrl"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    GetDashboardEmbedUrlRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    GetDashboardEmbedUrlRequest& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method that the user uses to sign in.</p>
     */
    inline EmbeddingIdentityType GetIdentityType() const { return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(EmbeddingIdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline GetDashboardEmbedUrlRequest& WithIdentityType(EmbeddingIdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many minutes the session is valid. The session lifetime must be 15-600
     * minutes.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const { return m_sessionLifetimeInMinutes; }
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }
    inline GetDashboardEmbedUrlRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Remove the undo/redo button on the embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline bool GetUndoRedoDisabled() const { return m_undoRedoDisabled; }
    inline bool UndoRedoDisabledHasBeenSet() const { return m_undoRedoDisabledHasBeenSet; }
    inline void SetUndoRedoDisabled(bool value) { m_undoRedoDisabledHasBeenSet = true; m_undoRedoDisabled = value; }
    inline GetDashboardEmbedUrlRequest& WithUndoRedoDisabled(bool value) { SetUndoRedoDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Remove the reset button on the embedded dashboard. The default is FALSE,
     * which enables the reset button.</p>
     */
    inline bool GetResetDisabled() const { return m_resetDisabled; }
    inline bool ResetDisabledHasBeenSet() const { return m_resetDisabledHasBeenSet; }
    inline void SetResetDisabled(bool value) { m_resetDisabledHasBeenSet = true; m_resetDisabled = value; }
    inline GetDashboardEmbedUrlRequest& WithResetDisabled(bool value) { SetResetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds persistence of state for the user session in an embedded dashboard.
     * Persistence applies to the sheet and the parameter settings. These are control
     * settings that the dashboard subscriber (QuickSight reader) chooses while viewing
     * the dashboard. If this is set to <code>TRUE</code>, the settings are the same
     * when the subscriber reopens the same dashboard URL. The state is stored in
     * QuickSight, not in a browser cookie. If this is set to FALSE, the state of the
     * user session is not persisted. The default is <code>FALSE</code>.</p>
     */
    inline bool GetStatePersistenceEnabled() const { return m_statePersistenceEnabled; }
    inline bool StatePersistenceEnabledHasBeenSet() const { return m_statePersistenceEnabledHasBeenSet; }
    inline void SetStatePersistenceEnabled(bool value) { m_statePersistenceEnabledHasBeenSet = true; m_statePersistenceEnabled = value; }
    inline GetDashboardEmbedUrlRequest& WithStatePersistenceEnabled(bool value) { SetStatePersistenceEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight user's Amazon Resource Name (ARN), for use with
     * <code>QUICKSIGHT</code> identity type. You can use this for any Amazon
     * QuickSight users in your account (readers, authors, or admins) authenticated as
     * one of the following:</p> <ul> <li> <p>Active Directory (AD) users or group
     * members</p> </li> <li> <p>Invited nonfederated users</p> </li> <li> <p>IAM users
     * and IAM role-based sessions authenticated through Federated Single Sign-On using
     * SAML, OpenID Connect, or IAM federation.</p> </li> </ul> <p>Omit this parameter
     * for users in the third group – IAM users and IAM role-based sessions.</p>
     */
    inline const Aws::String& GetUserArn() const { return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    template<typename UserArnT = Aws::String>
    void SetUserArn(UserArnT&& value) { m_userArnHasBeenSet = true; m_userArn = std::forward<UserArnT>(value); }
    template<typename UserArnT = Aws::String>
    GetDashboardEmbedUrlRequest& WithUserArn(UserArnT&& value) { SetUserArn(std::forward<UserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The QuickSight namespace that contains the dashboard IDs in this request. If
     * you're not using a custom namespace, set <code>Namespace = default</code>.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    GetDashboardEmbedUrlRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * QuickSight or IAM users. For example, if you set "<code>--dashboard-id dash_id1
     * --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the session
     * can access all three dashboards.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalDashboardIds() const { return m_additionalDashboardIds; }
    inline bool AdditionalDashboardIdsHasBeenSet() const { return m_additionalDashboardIdsHasBeenSet; }
    template<typename AdditionalDashboardIdsT = Aws::Vector<Aws::String>>
    void SetAdditionalDashboardIds(AdditionalDashboardIdsT&& value) { m_additionalDashboardIdsHasBeenSet = true; m_additionalDashboardIds = std::forward<AdditionalDashboardIdsT>(value); }
    template<typename AdditionalDashboardIdsT = Aws::Vector<Aws::String>>
    GetDashboardEmbedUrlRequest& WithAdditionalDashboardIds(AdditionalDashboardIdsT&& value) { SetAdditionalDashboardIds(std::forward<AdditionalDashboardIdsT>(value)); return *this;}
    template<typename AdditionalDashboardIdsT = Aws::String>
    GetDashboardEmbedUrlRequest& AddAdditionalDashboardIds(AdditionalDashboardIdsT&& value) { m_additionalDashboardIdsHasBeenSet = true; m_additionalDashboardIds.emplace_back(std::forward<AdditionalDashboardIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    EmbeddingIdentityType m_identityType{EmbeddingIdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    long long m_sessionLifetimeInMinutes{0};
    bool m_sessionLifetimeInMinutesHasBeenSet = false;

    bool m_undoRedoDisabled{false};
    bool m_undoRedoDisabledHasBeenSet = false;

    bool m_resetDisabled{false};
    bool m_resetDisabledHasBeenSet = false;

    bool m_statePersistenceEnabled{false};
    bool m_statePersistenceEnabledHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalDashboardIds;
    bool m_additionalDashboardIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
