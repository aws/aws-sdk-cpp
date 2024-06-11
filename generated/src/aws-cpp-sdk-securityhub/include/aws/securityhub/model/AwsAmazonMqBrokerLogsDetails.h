/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsAmazonMqBrokerLogsPendingDetails.h>
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
   * <p> Provides information about logs to be activated for the specified broker.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAmazonMqBrokerLogsDetails">AWS
   * API Reference</a></p>
   */
  class AwsAmazonMqBrokerLogsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsDetails();
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Activates audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Doesn't apply to RabbitMQ brokers. </p>
     */
    inline bool GetAudit() const{ return m_audit; }
    inline bool AuditHasBeenSet() const { return m_auditHasBeenSet; }
    inline void SetAudit(bool value) { m_auditHasBeenSet = true; m_audit = value; }
    inline AwsAmazonMqBrokerLogsDetails& WithAudit(bool value) { SetAudit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Activates general logging. </p>
     */
    inline bool GetGeneral() const{ return m_general; }
    inline bool GeneralHasBeenSet() const { return m_generalHasBeenSet; }
    inline void SetGeneral(bool value) { m_generalHasBeenSet = true; m_general = value; }
    inline AwsAmazonMqBrokerLogsDetails& WithGeneral(bool value) { SetGeneral(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location of the CloudWatch Logs log group where audit logs are sent.
     * </p>
     */
    inline const Aws::String& GetAuditLogGroup() const{ return m_auditLogGroup; }
    inline bool AuditLogGroupHasBeenSet() const { return m_auditLogGroupHasBeenSet; }
    inline void SetAuditLogGroup(const Aws::String& value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup = value; }
    inline void SetAuditLogGroup(Aws::String&& value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup = std::move(value); }
    inline void SetAuditLogGroup(const char* value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup.assign(value); }
    inline AwsAmazonMqBrokerLogsDetails& WithAuditLogGroup(const Aws::String& value) { SetAuditLogGroup(value); return *this;}
    inline AwsAmazonMqBrokerLogsDetails& WithAuditLogGroup(Aws::String&& value) { SetAuditLogGroup(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerLogsDetails& WithAuditLogGroup(const char* value) { SetAuditLogGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location of the CloudWatch Logs log group where general logs are sent.
     * </p>
     */
    inline const Aws::String& GetGeneralLogGroup() const{ return m_generalLogGroup; }
    inline bool GeneralLogGroupHasBeenSet() const { return m_generalLogGroupHasBeenSet; }
    inline void SetGeneralLogGroup(const Aws::String& value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup = value; }
    inline void SetGeneralLogGroup(Aws::String&& value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup = std::move(value); }
    inline void SetGeneralLogGroup(const char* value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup.assign(value); }
    inline AwsAmazonMqBrokerLogsDetails& WithGeneralLogGroup(const Aws::String& value) { SetGeneralLogGroup(value); return *this;}
    inline AwsAmazonMqBrokerLogsDetails& WithGeneralLogGroup(Aws::String&& value) { SetGeneralLogGroup(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerLogsDetails& WithGeneralLogGroup(const char* value) { SetGeneralLogGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of information about logs that are to be turned on for the
     * specified broker. </p>
     */
    inline const AwsAmazonMqBrokerLogsPendingDetails& GetPending() const{ return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    inline void SetPending(const AwsAmazonMqBrokerLogsPendingDetails& value) { m_pendingHasBeenSet = true; m_pending = value; }
    inline void SetPending(AwsAmazonMqBrokerLogsPendingDetails&& value) { m_pendingHasBeenSet = true; m_pending = std::move(value); }
    inline AwsAmazonMqBrokerLogsDetails& WithPending(const AwsAmazonMqBrokerLogsPendingDetails& value) { SetPending(value); return *this;}
    inline AwsAmazonMqBrokerLogsDetails& WithPending(AwsAmazonMqBrokerLogsPendingDetails&& value) { SetPending(std::move(value)); return *this;}
    ///@}
  private:

    bool m_audit;
    bool m_auditHasBeenSet = false;

    bool m_general;
    bool m_generalHasBeenSet = false;

    Aws::String m_auditLogGroup;
    bool m_auditLogGroupHasBeenSet = false;

    Aws::String m_generalLogGroup;
    bool m_generalLogGroupHasBeenSet = false;

    AwsAmazonMqBrokerLogsPendingDetails m_pending;
    bool m_pendingHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
