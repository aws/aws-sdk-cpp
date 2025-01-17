/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/LocaleCode.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Notifications
{
namespace Model
{

  /**
   */
  class ListManagedNotificationChildEventsRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API ListManagedNotificationChildEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListManagedNotificationChildEvents"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;

    AWS_NOTIFICATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationEvent</code>.</p>
     */
    inline const Aws::String& GetAggregateManagedNotificationEventArn() const{ return m_aggregateManagedNotificationEventArn; }
    inline bool AggregateManagedNotificationEventArnHasBeenSet() const { return m_aggregateManagedNotificationEventArnHasBeenSet; }
    inline void SetAggregateManagedNotificationEventArn(const Aws::String& value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn = value; }
    inline void SetAggregateManagedNotificationEventArn(Aws::String&& value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn = std::move(value); }
    inline void SetAggregateManagedNotificationEventArn(const char* value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn.assign(value); }
    inline ListManagedNotificationChildEventsRequest& WithAggregateManagedNotificationEventArn(const Aws::String& value) { SetAggregateManagedNotificationEventArn(value); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithAggregateManagedNotificationEventArn(Aws::String&& value) { SetAggregateManagedNotificationEventArn(std::move(value)); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithAggregateManagedNotificationEventArn(const char* value) { SetAggregateManagedNotificationEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest time of events to return from this call.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListManagedNotificationChildEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Latest time of events to return from this call.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListManagedNotificationChildEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale code of the language used for the retrieved
     * <code>NotificationEvent</code>. The default locale is
     * English.<code>en_US</code>.</p>
     */
    inline const LocaleCode& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const LocaleCode& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(LocaleCode&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline ListManagedNotificationChildEventsRequest& WithLocale(const LocaleCode& value) { SetLocale(value); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithLocale(LocaleCode&& value) { SetLocale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned in this call. Defaults to
     * 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListManagedNotificationChildEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the Managed Notification
     * Child Events.</p>
     */
    inline const Aws::String& GetRelatedAccount() const{ return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    inline void SetRelatedAccount(const Aws::String& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = value; }
    inline void SetRelatedAccount(Aws::String&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::move(value); }
    inline void SetRelatedAccount(const char* value) { m_relatedAccountHasBeenSet = true; m_relatedAccount.assign(value); }
    inline ListManagedNotificationChildEventsRequest& WithRelatedAccount(const Aws::String& value) { SetRelatedAccount(value); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithRelatedAccount(Aws::String&& value) { SetRelatedAccount(std::move(value)); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithRelatedAccount(const char* value) { SetRelatedAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services Organizations organizational unit
     * (OU) associated with the Managed Notification Child Events.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }
    inline ListManagedNotificationChildEventsRequest& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start token for paginated calls. Retrieved from the response of a
     * previous ListManagedNotificationChannelAssociations call. Next token uses Base64
     * encoding.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListManagedNotificationChildEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedNotificationChildEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_aggregateManagedNotificationEventArn;
    bool m_aggregateManagedNotificationEventArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    LocaleCode m_locale;
    bool m_localeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_relatedAccount;
    bool m_relatedAccountHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
