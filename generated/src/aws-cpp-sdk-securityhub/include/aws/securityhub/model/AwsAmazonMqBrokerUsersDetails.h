/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about the broker usernames for the specified broker.
   * Doesn't apply to RabbitMQ brokers. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAmazonMqBrokerUsersDetails">AWS
   * API Reference</a></p>
   */
  class AwsAmazonMqBrokerUsersDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAmazonMqBrokerUsersDetails();
    AWS_SECURITYHUB_API AwsAmazonMqBrokerUsersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerUsersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of change pending for the broker user. </p>
     */
    inline const Aws::String& GetPendingChange() const{ return m_pendingChange; }
    inline bool PendingChangeHasBeenSet() const { return m_pendingChangeHasBeenSet; }
    inline void SetPendingChange(const Aws::String& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = value; }
    inline void SetPendingChange(Aws::String&& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = std::move(value); }
    inline void SetPendingChange(const char* value) { m_pendingChangeHasBeenSet = true; m_pendingChange.assign(value); }
    inline AwsAmazonMqBrokerUsersDetails& WithPendingChange(const Aws::String& value) { SetPendingChange(value); return *this;}
    inline AwsAmazonMqBrokerUsersDetails& WithPendingChange(Aws::String&& value) { SetPendingChange(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerUsersDetails& WithPendingChange(const char* value) { SetPendingChange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The username of the broker user. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline AwsAmazonMqBrokerUsersDetails& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline AwsAmazonMqBrokerUsersDetails& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerUsersDetails& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_pendingChange;
    bool m_pendingChangeHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
