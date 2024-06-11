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
    AWS_MQ_API LogsSummary();
    AWS_MQ_API LogsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API LogsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.</p>
     */
    inline bool GetAudit() const{ return m_audit; }
    inline bool AuditHasBeenSet() const { return m_auditHasBeenSet; }
    inline void SetAudit(bool value) { m_auditHasBeenSet = true; m_audit = value; }
    inline LogsSummary& WithAudit(bool value) { SetAudit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the CloudWatch Logs log group where audit logs are sent.</p>
     */
    inline const Aws::String& GetAuditLogGroup() const{ return m_auditLogGroup; }
    inline bool AuditLogGroupHasBeenSet() const { return m_auditLogGroupHasBeenSet; }
    inline void SetAuditLogGroup(const Aws::String& value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup = value; }
    inline void SetAuditLogGroup(Aws::String&& value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup = std::move(value); }
    inline void SetAuditLogGroup(const char* value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup.assign(value); }
    inline LogsSummary& WithAuditLogGroup(const Aws::String& value) { SetAuditLogGroup(value); return *this;}
    inline LogsSummary& WithAuditLogGroup(Aws::String&& value) { SetAuditLogGroup(std::move(value)); return *this;}
    inline LogsSummary& WithAuditLogGroup(const char* value) { SetAuditLogGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables general logging.</p>
     */
    inline bool GetGeneral() const{ return m_general; }
    inline bool GeneralHasBeenSet() const { return m_generalHasBeenSet; }
    inline void SetGeneral(bool value) { m_generalHasBeenSet = true; m_general = value; }
    inline LogsSummary& WithGeneral(bool value) { SetGeneral(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the CloudWatch Logs log group where general logs are
     * sent.</p>
     */
    inline const Aws::String& GetGeneralLogGroup() const{ return m_generalLogGroup; }
    inline bool GeneralLogGroupHasBeenSet() const { return m_generalLogGroupHasBeenSet; }
    inline void SetGeneralLogGroup(const Aws::String& value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup = value; }
    inline void SetGeneralLogGroup(Aws::String&& value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup = std::move(value); }
    inline void SetGeneralLogGroup(const char* value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup.assign(value); }
    inline LogsSummary& WithGeneralLogGroup(const Aws::String& value) { SetGeneralLogGroup(value); return *this;}
    inline LogsSummary& WithGeneralLogGroup(Aws::String&& value) { SetGeneralLogGroup(std::move(value)); return *this;}
    inline LogsSummary& WithGeneralLogGroup(const char* value) { SetGeneralLogGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of information about logs pending to be deployed for the specified
     * broker.</p>
     */
    inline const PendingLogs& GetPending() const{ return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    inline void SetPending(const PendingLogs& value) { m_pendingHasBeenSet = true; m_pending = value; }
    inline void SetPending(PendingLogs&& value) { m_pendingHasBeenSet = true; m_pending = std::move(value); }
    inline LogsSummary& WithPending(const PendingLogs& value) { SetPending(value); return *this;}
    inline LogsSummary& WithPending(PendingLogs&& value) { SetPending(std::move(value)); return *this;}
    ///@}
  private:

    bool m_audit;
    bool m_auditHasBeenSet = false;

    Aws::String m_auditLogGroup;
    bool m_auditLogGroupHasBeenSet = false;

    bool m_general;
    bool m_generalHasBeenSet = false;

    Aws::String m_generalLogGroup;
    bool m_generalLogGroupHasBeenSet = false;

    PendingLogs m_pending;
    bool m_pendingHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
