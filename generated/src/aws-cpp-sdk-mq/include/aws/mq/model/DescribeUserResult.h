/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/UserPendingChanges.h>
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
namespace MQ
{
namespace Model
{
  class DescribeUserResult
  {
  public:
    AWS_MQ_API DescribeUserResult() = default;
    AWS_MQ_API DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const { return m_brokerId; }
    template<typename BrokerIdT = Aws::String>
    void SetBrokerId(BrokerIdT&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::forward<BrokerIdT>(value); }
    template<typename BrokerIdT = Aws::String>
    DescribeUserResult& WithBrokerId(BrokerIdT&& value) { SetBrokerId(std::forward<BrokerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables access to the the ActiveMQ Web Console for the ActiveMQ user.</p>
     */
    inline bool GetConsoleAccess() const { return m_consoleAccess; }
    inline void SetConsoleAccess(bool value) { m_consoleAccessHasBeenSet = true; m_consoleAccess = value; }
    inline DescribeUserResult& WithConsoleAccess(bool value) { SetConsoleAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    DescribeUserResult& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    DescribeUserResult& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the changes pending for the ActiveMQ user.</p>
     */
    inline const UserPendingChanges& GetPending() const { return m_pending; }
    template<typename PendingT = UserPendingChanges>
    void SetPending(PendingT&& value) { m_pendingHasBeenSet = true; m_pending = std::forward<PendingT>(value); }
    template<typename PendingT = UserPendingChanges>
    DescribeUserResult& WithPending(PendingT&& value) { SetPending(std::forward<PendingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    DescribeUserResult& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether the user is intended for data replication</p>
     */
    inline bool GetReplicationUser() const { return m_replicationUser; }
    inline void SetReplicationUser(bool value) { m_replicationUserHasBeenSet = true; m_replicationUser = value; }
    inline DescribeUserResult& WithReplicationUser(bool value) { SetReplicationUser(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    bool m_consoleAccess{false};
    bool m_consoleAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    UserPendingChanges m_pending;
    bool m_pendingHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    bool m_replicationUser{false};
    bool m_replicationUserHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
