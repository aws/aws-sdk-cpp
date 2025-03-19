/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/ChangeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MQ
{
namespace Model
{

  /**
   * <p>Returns information about the status of the changes pending for the ActiveMQ
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UserPendingChanges">AWS
   * API Reference</a></p>
   */
  class UserPendingChanges
  {
  public:
    AWS_MQ_API UserPendingChanges() = default;
    AWS_MQ_API UserPendingChanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API UserPendingChanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables access to the the ActiveMQ Web Console for the ActiveMQ user.</p>
     */
    inline bool GetConsoleAccess() const { return m_consoleAccess; }
    inline bool ConsoleAccessHasBeenSet() const { return m_consoleAccessHasBeenSet; }
    inline void SetConsoleAccess(bool value) { m_consoleAccessHasBeenSet = true; m_consoleAccess = value; }
    inline UserPendingChanges& WithConsoleAccess(bool value) { SetConsoleAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    UserPendingChanges& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    UserPendingChanges& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Required. The type of change pending for the ActiveMQ user.</p>
     */
    inline ChangeType GetPendingChange() const { return m_pendingChange; }
    inline bool PendingChangeHasBeenSet() const { return m_pendingChangeHasBeenSet; }
    inline void SetPendingChange(ChangeType value) { m_pendingChangeHasBeenSet = true; m_pendingChange = value; }
    inline UserPendingChanges& WithPendingChange(ChangeType value) { SetPendingChange(value); return *this;}
    ///@}
  private:

    bool m_consoleAccess{false};
    bool m_consoleAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    ChangeType m_pendingChange{ChangeType::NOT_SET};
    bool m_pendingChangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
