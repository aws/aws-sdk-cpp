/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ProfileNotificationSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{
  class ListProfileNotificationsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListProfileNotificationsResult();
    AWS_WELLARCHITECTED_API ListProfileNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListProfileNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Notification summaries.</p>
     */
    inline const Aws::Vector<ProfileNotificationSummary>& GetNotificationSummaries() const{ return m_notificationSummaries; }

    /**
     * <p>Notification summaries.</p>
     */
    inline void SetNotificationSummaries(const Aws::Vector<ProfileNotificationSummary>& value) { m_notificationSummaries = value; }

    /**
     * <p>Notification summaries.</p>
     */
    inline void SetNotificationSummaries(Aws::Vector<ProfileNotificationSummary>&& value) { m_notificationSummaries = std::move(value); }

    /**
     * <p>Notification summaries.</p>
     */
    inline ListProfileNotificationsResult& WithNotificationSummaries(const Aws::Vector<ProfileNotificationSummary>& value) { SetNotificationSummaries(value); return *this;}

    /**
     * <p>Notification summaries.</p>
     */
    inline ListProfileNotificationsResult& WithNotificationSummaries(Aws::Vector<ProfileNotificationSummary>&& value) { SetNotificationSummaries(std::move(value)); return *this;}

    /**
     * <p>Notification summaries.</p>
     */
    inline ListProfileNotificationsResult& AddNotificationSummaries(const ProfileNotificationSummary& value) { m_notificationSummaries.push_back(value); return *this; }

    /**
     * <p>Notification summaries.</p>
     */
    inline ListProfileNotificationsResult& AddNotificationSummaries(ProfileNotificationSummary&& value) { m_notificationSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListProfileNotificationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProfileNotificationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProfileNotificationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProfileNotificationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProfileNotificationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProfileNotificationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ProfileNotificationSummary> m_notificationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
