﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A user associated with the broker. For Amazon MQ for RabbitMQ brokers, one
   * and only one administrative user is accepted and created when a broker is first
   * provisioned. All subsequent broker users are created by making RabbitMQ API
   * calls directly to brokers or via the RabbitMQ web console.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_MQ_API User();
    AWS_MQ_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables access to the ActiveMQ Web Console for the ActiveMQ user. Does not
     * apply to RabbitMQ brokers.</p>
     */
    inline bool GetConsoleAccess() const{ return m_consoleAccess; }
    inline bool ConsoleAccessHasBeenSet() const { return m_consoleAccessHasBeenSet; }
    inline void SetConsoleAccess(bool value) { m_consoleAccessHasBeenSet = true; m_consoleAccess = value; }
    inline User& WithConsoleAccess(bool value) { SetConsoleAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long. Does not apply
     * to RabbitMQ brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline User& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}
    inline User& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}
    inline User& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline User& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    inline User& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
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
    inline User& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline User& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline User& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the broker user. The following restrictions apply to broker
     * usernames:</p> <ul><li><p>For Amazon MQ for ActiveMQ brokers, this value can
     * contain only alphanumeric characters, dashes, periods, underscores, and tildes
     * (- . _ ~). This value must be 2-100 characters long.</p></li> <li><p>para>For
     * Amazon MQ for RabbitMQ brokers, this value can contain only alphanumeric
     * characters, dashes, periods, underscores (- . _). This value must not contain a
     * tilde (~) character. Amazon MQ prohibts using guest as a valid usename. This
     * value must be 2-100 characters long.</p></para></li></ul> <p>Do not
     * add personally identifiable information (PII) or other confidential or sensitive
     * information in broker usernames. Broker usernames are accessible to other Amazon
     * Web Services services, including CloudWatch Logs. Broker usernames are not
     * intended to be used for private or sensitive data.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline User& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline User& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline User& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if this user is intended for CRDR replication purposes.</p>
     */
    inline bool GetReplicationUser() const{ return m_replicationUser; }
    inline bool ReplicationUserHasBeenSet() const { return m_replicationUserHasBeenSet; }
    inline void SetReplicationUser(bool value) { m_replicationUserHasBeenSet = true; m_replicationUser = value; }
    inline User& WithReplicationUser(bool value) { SetReplicationUser(value); return *this;}
    ///@}
  private:

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
