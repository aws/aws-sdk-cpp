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
    AWS_QUICKSIGHT_API GetDashboardEmbedUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDashboardEmbedUrl"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dashboard, also added to the Identity and Access Management
     * (IAM) policy.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The authentication method that the user uses to sign in.</p>
     */
    inline const EmbeddingIdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The authentication method that the user uses to sign in.</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>The authentication method that the user uses to sign in.</p>
     */
    inline void SetIdentityType(const EmbeddingIdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The authentication method that the user uses to sign in.</p>
     */
    inline void SetIdentityType(EmbeddingIdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>The authentication method that the user uses to sign in.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithIdentityType(const EmbeddingIdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The authentication method that the user uses to sign in.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithIdentityType(EmbeddingIdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>How many minutes the session is valid. The session lifetime must be 15-600
     * minutes.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const{ return m_sessionLifetimeInMinutes; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be 15-600
     * minutes.</p>
     */
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be 15-600
     * minutes.</p>
     */
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be 15-600
     * minutes.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}


    /**
     * <p>Remove the undo/redo button on the embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline bool GetUndoRedoDisabled() const{ return m_undoRedoDisabled; }

    /**
     * <p>Remove the undo/redo button on the embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline bool UndoRedoDisabledHasBeenSet() const { return m_undoRedoDisabledHasBeenSet; }

    /**
     * <p>Remove the undo/redo button on the embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline void SetUndoRedoDisabled(bool value) { m_undoRedoDisabledHasBeenSet = true; m_undoRedoDisabled = value; }

    /**
     * <p>Remove the undo/redo button on the embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithUndoRedoDisabled(bool value) { SetUndoRedoDisabled(value); return *this;}


    /**
     * <p>Remove the reset button on the embedded dashboard. The default is FALSE,
     * which enables the reset button.</p>
     */
    inline bool GetResetDisabled() const{ return m_resetDisabled; }

    /**
     * <p>Remove the reset button on the embedded dashboard. The default is FALSE,
     * which enables the reset button.</p>
     */
    inline bool ResetDisabledHasBeenSet() const { return m_resetDisabledHasBeenSet; }

    /**
     * <p>Remove the reset button on the embedded dashboard. The default is FALSE,
     * which enables the reset button.</p>
     */
    inline void SetResetDisabled(bool value) { m_resetDisabledHasBeenSet = true; m_resetDisabled = value; }

    /**
     * <p>Remove the reset button on the embedded dashboard. The default is FALSE,
     * which enables the reset button.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithResetDisabled(bool value) { SetResetDisabled(value); return *this;}


    /**
     * <p>Adds persistence of state for the user session in an embedded dashboard.
     * Persistence applies to the sheet and the parameter settings. These are control
     * settings that the dashboard subscriber (Amazon QuickSight reader) chooses while
     * viewing the dashboard. If this is set to <code>TRUE</code>, the settings are the
     * same when the subscriber reopens the same dashboard URL. The state is stored in
     * Amazon QuickSight, not in a browser cookie. If this is set to FALSE, the state
     * of the user session is not persisted. The default is <code>FALSE</code>.</p>
     */
    inline bool GetStatePersistenceEnabled() const{ return m_statePersistenceEnabled; }

    /**
     * <p>Adds persistence of state for the user session in an embedded dashboard.
     * Persistence applies to the sheet and the parameter settings. These are control
     * settings that the dashboard subscriber (Amazon QuickSight reader) chooses while
     * viewing the dashboard. If this is set to <code>TRUE</code>, the settings are the
     * same when the subscriber reopens the same dashboard URL. The state is stored in
     * Amazon QuickSight, not in a browser cookie. If this is set to FALSE, the state
     * of the user session is not persisted. The default is <code>FALSE</code>.</p>
     */
    inline bool StatePersistenceEnabledHasBeenSet() const { return m_statePersistenceEnabledHasBeenSet; }

    /**
     * <p>Adds persistence of state for the user session in an embedded dashboard.
     * Persistence applies to the sheet and the parameter settings. These are control
     * settings that the dashboard subscriber (Amazon QuickSight reader) chooses while
     * viewing the dashboard. If this is set to <code>TRUE</code>, the settings are the
     * same when the subscriber reopens the same dashboard URL. The state is stored in
     * Amazon QuickSight, not in a browser cookie. If this is set to FALSE, the state
     * of the user session is not persisted. The default is <code>FALSE</code>.</p>
     */
    inline void SetStatePersistenceEnabled(bool value) { m_statePersistenceEnabledHasBeenSet = true; m_statePersistenceEnabled = value; }

    /**
     * <p>Adds persistence of state for the user session in an embedded dashboard.
     * Persistence applies to the sheet and the parameter settings. These are control
     * settings that the dashboard subscriber (Amazon QuickSight reader) chooses while
     * viewing the dashboard. If this is set to <code>TRUE</code>, the settings are the
     * same when the subscriber reopens the same dashboard URL. The state is stored in
     * Amazon QuickSight, not in a browser cookie. If this is set to FALSE, the state
     * of the user session is not persisted. The default is <code>FALSE</code>.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithStatePersistenceEnabled(bool value) { SetStatePersistenceEnabled(value); return *this;}


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
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

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
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

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
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

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
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

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
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

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
    inline GetDashboardEmbedUrlRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

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
    inline GetDashboardEmbedUrlRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

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
    inline GetDashboardEmbedUrlRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The Amazon QuickSight namespace that contains the dashboard IDs in this
     * request. If you're not using a custom namespace, set <code>Namespace =
     * default</code>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The Amazon QuickSight namespace that contains the dashboard IDs in this
     * request. If you're not using a custom namespace, set <code>Namespace =
     * default</code>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The Amazon QuickSight namespace that contains the dashboard IDs in this
     * request. If you're not using a custom namespace, set <code>Namespace =
     * default</code>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The Amazon QuickSight namespace that contains the dashboard IDs in this
     * request. If you're not using a custom namespace, set <code>Namespace =
     * default</code>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The Amazon QuickSight namespace that contains the dashboard IDs in this
     * request. If you're not using a custom namespace, set <code>Namespace =
     * default</code>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The Amazon QuickSight namespace that contains the dashboard IDs in this
     * request. If you're not using a custom namespace, set <code>Namespace =
     * default</code>.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The Amazon QuickSight namespace that contains the dashboard IDs in this
     * request. If you're not using a custom namespace, set <code>Namespace =
     * default</code>.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight namespace that contains the dashboard IDs in this
     * request. If you're not using a custom namespace, set <code>Namespace =
     * default</code>.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalDashboardIds() const{ return m_additionalDashboardIds; }

    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline bool AdditionalDashboardIdsHasBeenSet() const { return m_additionalDashboardIdsHasBeenSet; }

    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline void SetAdditionalDashboardIds(const Aws::Vector<Aws::String>& value) { m_additionalDashboardIdsHasBeenSet = true; m_additionalDashboardIds = value; }

    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline void SetAdditionalDashboardIds(Aws::Vector<Aws::String>&& value) { m_additionalDashboardIdsHasBeenSet = true; m_additionalDashboardIds = std::move(value); }

    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithAdditionalDashboardIds(const Aws::Vector<Aws::String>& value) { SetAdditionalDashboardIds(value); return *this;}

    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithAdditionalDashboardIds(Aws::Vector<Aws::String>&& value) { SetAdditionalDashboardIds(std::move(value)); return *this;}

    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline GetDashboardEmbedUrlRequest& AddAdditionalDashboardIds(const Aws::String& value) { m_additionalDashboardIdsHasBeenSet = true; m_additionalDashboardIds.push_back(value); return *this; }

    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline GetDashboardEmbedUrlRequest& AddAdditionalDashboardIds(Aws::String&& value) { m_additionalDashboardIdsHasBeenSet = true; m_additionalDashboardIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of one or more dashboard IDs that you want anonymous users to have
     * tempporary access to. Currently, the <code>IdentityType</code> parameter must be
     * set to <code>ANONYMOUS</code> because other identity types authenticate as
     * Amazon QuickSight or IAM users. For example, if you set "<code>--dashboard-id
     * dash_id1 --dashboard-id dash_id2 dash_id3 identity-type ANONYMOUS</code>", the
     * session can access all three dashboards.</p>
     */
    inline GetDashboardEmbedUrlRequest& AddAdditionalDashboardIds(const char* value) { m_additionalDashboardIdsHasBeenSet = true; m_additionalDashboardIds.push_back(value); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    EmbeddingIdentityType m_identityType;
    bool m_identityTypeHasBeenSet = false;

    long long m_sessionLifetimeInMinutes;
    bool m_sessionLifetimeInMinutesHasBeenSet = false;

    bool m_undoRedoDisabled;
    bool m_undoRedoDisabledHasBeenSet = false;

    bool m_resetDisabled;
    bool m_resetDisabledHasBeenSet = false;

    bool m_statePersistenceEnabled;
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
