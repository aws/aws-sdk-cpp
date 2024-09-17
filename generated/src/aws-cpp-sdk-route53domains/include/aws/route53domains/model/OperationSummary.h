/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationStatus.h>
#include <aws/route53domains/model/OperationType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/route53domains/model/StatusFlag.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>OperationSummary includes the following elements.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/OperationSummary">AWS
   * API Reference</a></p>
   */
  class OperationSummary
  {
  public:
    AWS_ROUTE53DOMAINS_API OperationSummary();
    AWS_ROUTE53DOMAINS_API OperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API OperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }
    inline OperationSummary& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline OperationSummary& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline OperationSummary& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OperationSummary& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}
    inline OperationSummary& WithStatus(OperationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the action requested.</p>
     */
    inline const OperationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const OperationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(OperationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline OperationSummary& WithType(const OperationType& value) { SetType(value); return *this;}
    inline OperationSummary& WithType(OperationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the request was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedDate() const{ return m_submittedDate; }
    inline bool SubmittedDateHasBeenSet() const { return m_submittedDateHasBeenSet; }
    inline void SetSubmittedDate(const Aws::Utils::DateTime& value) { m_submittedDateHasBeenSet = true; m_submittedDate = value; }
    inline void SetSubmittedDate(Aws::Utils::DateTime&& value) { m_submittedDateHasBeenSet = true; m_submittedDate = std::move(value); }
    inline OperationSummary& WithSubmittedDate(const Aws::Utils::DateTime& value) { SetSubmittedDate(value); return *this;}
    inline OperationSummary& WithSubmittedDate(Aws::Utils::DateTime&& value) { SetSubmittedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline OperationSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline OperationSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline OperationSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Message about the operation. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline OperationSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline OperationSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline OperationSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Automatically checks whether there are no outstanding operations on domains
     * that need customer attention. </p> <p> Valid values are:</p> <ul> <li> <p>
     * <code>PENDING_ACCEPTANCE</code>: The operation is waiting for acceptance from
     * the account that is receiving the domain.</p> </li> <li> <p>
     * <code>PENDING_CUSTOMER_ACTION</code>: The operation is waiting for customer
     * action, for example, returning an email.</p> </li> <li> <p>
     * <code>PENDING_AUTHORIZATION</code>: The operation is waiting for the form of
     * authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ResendOperationAuthorization.html">ResendOperationAuthorization</a>.</p>
     * </li> <li> <p> <code>PENDING_PAYMENT_VERIFICATION</code>: The operation is
     * waiting for the payment method to validate.</p> </li> <li> <p>
     * <code>PENDING_SUPPORT_CASE</code>: The operation includes a support case and is
     * waiting for its resolution.</p> </li> </ul>
     */
    inline const StatusFlag& GetStatusFlag() const{ return m_statusFlag; }
    inline bool StatusFlagHasBeenSet() const { return m_statusFlagHasBeenSet; }
    inline void SetStatusFlag(const StatusFlag& value) { m_statusFlagHasBeenSet = true; m_statusFlag = value; }
    inline void SetStatusFlag(StatusFlag&& value) { m_statusFlagHasBeenSet = true; m_statusFlag = std::move(value); }
    inline OperationSummary& WithStatusFlag(const StatusFlag& value) { SetStatusFlag(value); return *this;}
    inline OperationSummary& WithStatusFlag(StatusFlag&& value) { SetStatusFlag(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the last change was made in Unix time format and Coordinated
     * Universal Time (UTC). </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline OperationSummary& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline OperationSummary& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    OperationStatus m_status;
    bool m_statusHasBeenSet = false;

    OperationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_submittedDate;
    bool m_submittedDateHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    StatusFlag m_statusFlag;
    bool m_statusFlagHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
