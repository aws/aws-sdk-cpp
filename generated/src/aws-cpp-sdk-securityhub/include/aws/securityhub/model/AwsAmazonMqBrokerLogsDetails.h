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
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsDetails() = default;
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Activates audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Doesn't apply to RabbitMQ brokers. </p>
     */
    inline bool GetAudit() const { return m_audit; }
    inline bool AuditHasBeenSet() const { return m_auditHasBeenSet; }
    inline void SetAudit(bool value) { m_auditHasBeenSet = true; m_audit = value; }
    inline AwsAmazonMqBrokerLogsDetails& WithAudit(bool value) { SetAudit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Activates general logging. </p>
     */
    inline bool GetGeneral() const { return m_general; }
    inline bool GeneralHasBeenSet() const { return m_generalHasBeenSet; }
    inline void SetGeneral(bool value) { m_generalHasBeenSet = true; m_general = value; }
    inline AwsAmazonMqBrokerLogsDetails& WithGeneral(bool value) { SetGeneral(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location of the CloudWatch Logs log group where audit logs are sent.
     * </p>
     */
    inline const Aws::String& GetAuditLogGroup() const { return m_auditLogGroup; }
    inline bool AuditLogGroupHasBeenSet() const { return m_auditLogGroupHasBeenSet; }
    template<typename AuditLogGroupT = Aws::String>
    void SetAuditLogGroup(AuditLogGroupT&& value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup = std::forward<AuditLogGroupT>(value); }
    template<typename AuditLogGroupT = Aws::String>
    AwsAmazonMqBrokerLogsDetails& WithAuditLogGroup(AuditLogGroupT&& value) { SetAuditLogGroup(std::forward<AuditLogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location of the CloudWatch Logs log group where general logs are sent.
     * </p>
     */
    inline const Aws::String& GetGeneralLogGroup() const { return m_generalLogGroup; }
    inline bool GeneralLogGroupHasBeenSet() const { return m_generalLogGroupHasBeenSet; }
    template<typename GeneralLogGroupT = Aws::String>
    void SetGeneralLogGroup(GeneralLogGroupT&& value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup = std::forward<GeneralLogGroupT>(value); }
    template<typename GeneralLogGroupT = Aws::String>
    AwsAmazonMqBrokerLogsDetails& WithGeneralLogGroup(GeneralLogGroupT&& value) { SetGeneralLogGroup(std::forward<GeneralLogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of information about logs that are to be turned on for the
     * specified broker. </p>
     */
    inline const AwsAmazonMqBrokerLogsPendingDetails& GetPending() const { return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    template<typename PendingT = AwsAmazonMqBrokerLogsPendingDetails>
    void SetPending(PendingT&& value) { m_pendingHasBeenSet = true; m_pending = std::forward<PendingT>(value); }
    template<typename PendingT = AwsAmazonMqBrokerLogsPendingDetails>
    AwsAmazonMqBrokerLogsDetails& WithPending(PendingT&& value) { SetPending(std::forward<PendingT>(value)); return *this;}
    ///@}
  private:

    bool m_audit{false};
    bool m_auditHasBeenSet = false;

    bool m_general{false};
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
