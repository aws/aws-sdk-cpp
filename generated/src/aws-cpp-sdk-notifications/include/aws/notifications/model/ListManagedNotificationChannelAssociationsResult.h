/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/ManagedNotificationChannelAssociationSummary.h>
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
namespace Notifications
{
namespace Model
{
  class ListManagedNotificationChannelAssociationsResult
  {
  public:
    AWS_NOTIFICATIONS_API ListManagedNotificationChannelAssociationsResult();
    AWS_NOTIFICATIONS_API ListManagedNotificationChannelAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListManagedNotificationChannelAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListManagedNotificationChannelAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedNotificationChannelAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedNotificationChannelAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains the following information about a channel
     * association.</p>
     */
    inline const Aws::Vector<ManagedNotificationChannelAssociationSummary>& GetChannelAssociations() const{ return m_channelAssociations; }
    inline void SetChannelAssociations(const Aws::Vector<ManagedNotificationChannelAssociationSummary>& value) { m_channelAssociations = value; }
    inline void SetChannelAssociations(Aws::Vector<ManagedNotificationChannelAssociationSummary>&& value) { m_channelAssociations = std::move(value); }
    inline ListManagedNotificationChannelAssociationsResult& WithChannelAssociations(const Aws::Vector<ManagedNotificationChannelAssociationSummary>& value) { SetChannelAssociations(value); return *this;}
    inline ListManagedNotificationChannelAssociationsResult& WithChannelAssociations(Aws::Vector<ManagedNotificationChannelAssociationSummary>&& value) { SetChannelAssociations(std::move(value)); return *this;}
    inline ListManagedNotificationChannelAssociationsResult& AddChannelAssociations(const ManagedNotificationChannelAssociationSummary& value) { m_channelAssociations.push_back(value); return *this; }
    inline ListManagedNotificationChannelAssociationsResult& AddChannelAssociations(ManagedNotificationChannelAssociationSummary&& value) { m_channelAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListManagedNotificationChannelAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListManagedNotificationChannelAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListManagedNotificationChannelAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ManagedNotificationChannelAssociationSummary> m_channelAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
