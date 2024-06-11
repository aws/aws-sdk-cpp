/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * <p>Creates a new ActiveMQ user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateUserRequest">AWS
   * API Reference</a></p>
   */
  class CreateUserRequest : public MQRequest
  {
  public:
    AWS_MQ_API CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }
    inline CreateUserRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}
    inline CreateUserRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}
    inline CreateUserRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables access to the ActiveMQ Web Console for the ActiveMQ user.</p>
     */
    inline bool GetConsoleAccess() const{ return m_consoleAccess; }
    inline bool ConsoleAccessHasBeenSet() const { return m_consoleAccessHasBeenSet; }
    inline void SetConsoleAccess(bool value) { m_consoleAccessHasBeenSet = true; m_consoleAccess = value; }
    inline CreateUserRequest& WithConsoleAccess(bool value) { SetConsoleAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline CreateUserRequest& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}
    inline CreateUserRequest& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}
    inline CreateUserRequest& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline CreateUserRequest& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    inline CreateUserRequest& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Required. The password of the user. This value must be at least 12 characters
     * long, must contain at least 4 unique characters, and must not contain commas,
     * colons, or equal signs (,:=).</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline CreateUserRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline CreateUserRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline CreateUserRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the ActiveMQ user. This value can contain only alphanumeric
     * characters, dashes, periods, underscores, and tildes (- . _ ~). This value must
     * be 2-100 characters long.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline CreateUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline CreateUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline CreateUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if this user is intended for CRDR replication purposes.</p>
     */
    inline bool GetReplicationUser() const{ return m_replicationUser; }
    inline bool ReplicationUserHasBeenSet() const { return m_replicationUserHasBeenSet; }
    inline void SetReplicationUser(bool value) { m_replicationUserHasBeenSet = true; m_replicationUser = value; }
    inline CreateUserRequest& WithReplicationUser(bool value) { SetReplicationUser(value); return *this;}
    ///@}
  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    bool m_consoleAccess;
    bool m_consoleAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    bool m_replicationUser;
    bool m_replicationUserHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
