/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
   * <p>Returns a list of all broker users. Does not apply to RabbitMQ
   * brokers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UserSummary">AWS API
   * Reference</a></p>
   */
  class UserSummary
  {
  public:
    AWS_MQ_API UserSummary();
    AWS_MQ_API UserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API UserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of change pending for the broker user.</p>
     */
    inline const ChangeType& GetPendingChange() const{ return m_pendingChange; }

    /**
     * <p>The type of change pending for the broker user.</p>
     */
    inline bool PendingChangeHasBeenSet() const { return m_pendingChangeHasBeenSet; }

    /**
     * <p>The type of change pending for the broker user.</p>
     */
    inline void SetPendingChange(const ChangeType& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = value; }

    /**
     * <p>The type of change pending for the broker user.</p>
     */
    inline void SetPendingChange(ChangeType&& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = std::move(value); }

    /**
     * <p>The type of change pending for the broker user.</p>
     */
    inline UserSummary& WithPendingChange(const ChangeType& value) { SetPendingChange(value); return *this;}

    /**
     * <p>The type of change pending for the broker user.</p>
     */
    inline UserSummary& WithPendingChange(ChangeType&& value) { SetPendingChange(std::move(value)); return *this;}


    /**
     * <p>Required. The username of the broker user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>Required. The username of the broker user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>Required. The username of the broker user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>Required. The username of the broker user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>Required. The username of the broker user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>Required. The username of the broker user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline UserSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Required. The username of the broker user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline UserSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Required. The username of the broker user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline UserSummary& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    ChangeType m_pendingChange;
    bool m_pendingChangeHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
