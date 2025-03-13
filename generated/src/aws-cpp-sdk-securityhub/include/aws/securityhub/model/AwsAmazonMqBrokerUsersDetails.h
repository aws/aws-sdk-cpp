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
    AWS_SECURITYHUB_API AwsAmazonMqBrokerUsersDetails() = default;
    AWS_SECURITYHUB_API AwsAmazonMqBrokerUsersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerUsersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of change pending for the broker user. </p>
     */
    inline const Aws::String& GetPendingChange() const { return m_pendingChange; }
    inline bool PendingChangeHasBeenSet() const { return m_pendingChangeHasBeenSet; }
    template<typename PendingChangeT = Aws::String>
    void SetPendingChange(PendingChangeT&& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = std::forward<PendingChangeT>(value); }
    template<typename PendingChangeT = Aws::String>
    AwsAmazonMqBrokerUsersDetails& WithPendingChange(PendingChangeT&& value) { SetPendingChange(std::forward<PendingChangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The username of the broker user. </p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    AwsAmazonMqBrokerUsersDetails& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
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
