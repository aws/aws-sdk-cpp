/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/NotificationSummary.h>
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
  class ListNotificationsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListNotificationsResult();
    AWS_WELLARCHITECTED_API ListNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of lens notification summaries in a workload.</p>
     */
    inline const Aws::Vector<NotificationSummary>& GetNotificationSummaries() const{ return m_notificationSummaries; }

    /**
     * <p>List of lens notification summaries in a workload.</p>
     */
    inline void SetNotificationSummaries(const Aws::Vector<NotificationSummary>& value) { m_notificationSummaries = value; }

    /**
     * <p>List of lens notification summaries in a workload.</p>
     */
    inline void SetNotificationSummaries(Aws::Vector<NotificationSummary>&& value) { m_notificationSummaries = std::move(value); }

    /**
     * <p>List of lens notification summaries in a workload.</p>
     */
    inline ListNotificationsResult& WithNotificationSummaries(const Aws::Vector<NotificationSummary>& value) { SetNotificationSummaries(value); return *this;}

    /**
     * <p>List of lens notification summaries in a workload.</p>
     */
    inline ListNotificationsResult& WithNotificationSummaries(Aws::Vector<NotificationSummary>&& value) { SetNotificationSummaries(std::move(value)); return *this;}

    /**
     * <p>List of lens notification summaries in a workload.</p>
     */
    inline ListNotificationsResult& AddNotificationSummaries(const NotificationSummary& value) { m_notificationSummaries.push_back(value); return *this; }

    /**
     * <p>List of lens notification summaries in a workload.</p>
     */
    inline ListNotificationsResult& AddNotificationSummaries(NotificationSummary&& value) { m_notificationSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListNotificationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListNotificationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListNotificationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<NotificationSummary> m_notificationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
