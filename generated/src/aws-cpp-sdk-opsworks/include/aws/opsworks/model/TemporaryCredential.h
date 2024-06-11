﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Contains the data needed by RDP clients such as the Microsoft Remote Desktop
   * Connection to log in to the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/TemporaryCredential">AWS
   * API Reference</a></p>
   */
  class TemporaryCredential
  {
  public:
    AWS_OPSWORKS_API TemporaryCredential();
    AWS_OPSWORKS_API TemporaryCredential(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API TemporaryCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline TemporaryCredential& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline TemporaryCredential& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline TemporaryCredential& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline TemporaryCredential& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline TemporaryCredential& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline TemporaryCredential& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time (in minutes) that the grant is valid. When the grant
     * expires, at the end of this period, the user will no longer be able to use the
     * credentials to log in. If they are logged in at the time, they are automatically
     * logged out.</p>
     */
    inline int GetValidForInMinutes() const{ return m_validForInMinutes; }
    inline bool ValidForInMinutesHasBeenSet() const { return m_validForInMinutesHasBeenSet; }
    inline void SetValidForInMinutes(int value) { m_validForInMinutesHasBeenSet = true; m_validForInMinutes = value; }
    inline TemporaryCredential& WithValidForInMinutes(int value) { SetValidForInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's OpsWorks Stacks ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline TemporaryCredential& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline TemporaryCredential& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline TemporaryCredential& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_validForInMinutes;
    bool m_validForInMinutesHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
