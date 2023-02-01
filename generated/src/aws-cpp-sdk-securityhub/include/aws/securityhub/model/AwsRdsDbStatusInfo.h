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
   * <p>Information about the status of a read replica.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbStatusInfo">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbStatusInfo
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbStatusInfo();
    AWS_SECURITYHUB_API AwsRdsDbStatusInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbStatusInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of status. For a read replica, the status type is read
     * replication.</p>
     */
    inline const Aws::String& GetStatusType() const{ return m_statusType; }

    /**
     * <p>The type of status. For a read replica, the status type is read
     * replication.</p>
     */
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }

    /**
     * <p>The type of status. For a read replica, the status type is read
     * replication.</p>
     */
    inline void SetStatusType(const Aws::String& value) { m_statusTypeHasBeenSet = true; m_statusType = value; }

    /**
     * <p>The type of status. For a read replica, the status type is read
     * replication.</p>
     */
    inline void SetStatusType(Aws::String&& value) { m_statusTypeHasBeenSet = true; m_statusType = std::move(value); }

    /**
     * <p>The type of status. For a read replica, the status type is read
     * replication.</p>
     */
    inline void SetStatusType(const char* value) { m_statusTypeHasBeenSet = true; m_statusType.assign(value); }

    /**
     * <p>The type of status. For a read replica, the status type is read
     * replication.</p>
     */
    inline AwsRdsDbStatusInfo& WithStatusType(const Aws::String& value) { SetStatusType(value); return *this;}

    /**
     * <p>The type of status. For a read replica, the status type is read
     * replication.</p>
     */
    inline AwsRdsDbStatusInfo& WithStatusType(Aws::String&& value) { SetStatusType(std::move(value)); return *this;}

    /**
     * <p>The type of status. For a read replica, the status type is read
     * replication.</p>
     */
    inline AwsRdsDbStatusInfo& WithStatusType(const char* value) { SetStatusType(value); return *this;}


    /**
     * <p>Whether the read replica instance is operating normally.</p>
     */
    inline bool GetNormal() const{ return m_normal; }

    /**
     * <p>Whether the read replica instance is operating normally.</p>
     */
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }

    /**
     * <p>Whether the read replica instance is operating normally.</p>
     */
    inline void SetNormal(bool value) { m_normalHasBeenSet = true; m_normal = value; }

    /**
     * <p>Whether the read replica instance is operating normally.</p>
     */
    inline AwsRdsDbStatusInfo& WithNormal(bool value) { SetNormal(value); return *this;}


    /**
     * <p>The status of the read replica instance.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the read replica instance.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the read replica instance.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the read replica instance.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the read replica instance.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the read replica instance.</p>
     */
    inline AwsRdsDbStatusInfo& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the read replica instance.</p>
     */
    inline AwsRdsDbStatusInfo& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the read replica instance.</p>
     */
    inline AwsRdsDbStatusInfo& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If the read replica is currently in an error state, provides the error
     * details.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If the read replica is currently in an error state, provides the error
     * details.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>If the read replica is currently in an error state, provides the error
     * details.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>If the read replica is currently in an error state, provides the error
     * details.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>If the read replica is currently in an error state, provides the error
     * details.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>If the read replica is currently in an error state, provides the error
     * details.</p>
     */
    inline AwsRdsDbStatusInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If the read replica is currently in an error state, provides the error
     * details.</p>
     */
    inline AwsRdsDbStatusInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If the read replica is currently in an error state, provides the error
     * details.</p>
     */
    inline AwsRdsDbStatusInfo& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_statusType;
    bool m_statusTypeHasBeenSet = false;

    bool m_normal;
    bool m_normalHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
