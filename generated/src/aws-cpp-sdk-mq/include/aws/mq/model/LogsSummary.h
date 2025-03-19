/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/PendingLogs.h>
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
   * <p>The list of information about logs currently enabled and pending to be
   * deployed for the specified broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/LogsSummary">AWS API
   * Reference</a></p>
   */
  class LogsSummary
  {
  public:
    AWS_MQ_API LogsSummary() = default;
    AWS_MQ_API LogsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API LogsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.</p>
     */
    inline bool GetAudit() const { return m_audit; }
    inline bool AuditHasBeenSet() const { return m_auditHasBeenSet; }
    inline void SetAudit(bool value) { m_auditHasBeenSet = true; m_audit = value; }
    inline LogsSummary& WithAudit(bool value) { SetAudit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the CloudWatch Logs log group where audit logs are sent.</p>
     */
    inline const Aws::String& GetAuditLogGroup() const { return m_auditLogGroup; }
    inline bool AuditLogGroupHasBeenSet() const { return m_auditLogGroupHasBeenSet; }
    template<typename AuditLogGroupT = Aws::String>
    void SetAuditLogGroup(AuditLogGroupT&& value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup = std::forward<AuditLogGroupT>(value); }
    template<typename AuditLogGroupT = Aws::String>
    LogsSummary& WithAuditLogGroup(AuditLogGroupT&& value) { SetAuditLogGroup(std::forward<AuditLogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables general logging.</p>
     */
    inline bool GetGeneral() const { return m_general; }
    inline bool GeneralHasBeenSet() const { return m_generalHasBeenSet; }
    inline void SetGeneral(bool value) { m_generalHasBeenSet = true; m_general = value; }
    inline LogsSummary& WithGeneral(bool value) { SetGeneral(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the CloudWatch Logs log group where general logs are
     * sent.</p>
     */
    inline const Aws::String& GetGeneralLogGroup() const { return m_generalLogGroup; }
    inline bool GeneralLogGroupHasBeenSet() const { return m_generalLogGroupHasBeenSet; }
    template<typename GeneralLogGroupT = Aws::String>
    void SetGeneralLogGroup(GeneralLogGroupT&& value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup = std::forward<GeneralLogGroupT>(value); }
    template<typename GeneralLogGroupT = Aws::String>
    LogsSummary& WithGeneralLogGroup(GeneralLogGroupT&& value) { SetGeneralLogGroup(std::forward<GeneralLogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of information about logs pending to be deployed for the specified
     * broker.</p>
     */
    inline const PendingLogs& GetPending() const { return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    template<typename PendingT = PendingLogs>
    void SetPending(PendingT&& value) { m_pendingHasBeenSet = true; m_pending = std::forward<PendingT>(value); }
    template<typename PendingT = PendingLogs>
    LogsSummary& WithPending(PendingT&& value) { SetPending(std::forward<PendingT>(value)); return *this;}
    ///@}
  private:

    bool m_audit{false};
    bool m_auditHasBeenSet = false;

    Aws::String m_auditLogGroup;
    bool m_auditLogGroupHasBeenSet = false;

    bool m_general{false};
    bool m_generalHasBeenSet = false;

    Aws::String m_generalLogGroup;
    bool m_generalLogGroupHasBeenSet = false;

    PendingLogs m_pending;
    bool m_pendingHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
