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
    AWS_NOTIFICATIONS_API ListManagedNotificationChannelAssociationsResult() = default;
    AWS_NOTIFICATIONS_API ListManagedNotificationChannelAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListManagedNotificationChannelAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedNotificationChannelAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains the following information about a channel
     * association.</p>
     */
    inline const Aws::Vector<ManagedNotificationChannelAssociationSummary>& GetChannelAssociations() const { return m_channelAssociations; }
    template<typename ChannelAssociationsT = Aws::Vector<ManagedNotificationChannelAssociationSummary>>
    void SetChannelAssociations(ChannelAssociationsT&& value) { m_channelAssociationsHasBeenSet = true; m_channelAssociations = std::forward<ChannelAssociationsT>(value); }
    template<typename ChannelAssociationsT = Aws::Vector<ManagedNotificationChannelAssociationSummary>>
    ListManagedNotificationChannelAssociationsResult& WithChannelAssociations(ChannelAssociationsT&& value) { SetChannelAssociations(std::forward<ChannelAssociationsT>(value)); return *this;}
    template<typename ChannelAssociationsT = ManagedNotificationChannelAssociationSummary>
    ListManagedNotificationChannelAssociationsResult& AddChannelAssociations(ChannelAssociationsT&& value) { m_channelAssociationsHasBeenSet = true; m_channelAssociations.emplace_back(std::forward<ChannelAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListManagedNotificationChannelAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ManagedNotificationChannelAssociationSummary> m_channelAssociations;
    bool m_channelAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
