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
    AWS_ROUTE53DOMAINS_API OperationSummary() = default;
    AWS_ROUTE53DOMAINS_API OperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API OperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    OperationSummary& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline OperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OperationSummary& WithStatus(OperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the action requested.</p>
     */
    inline OperationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OperationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline OperationSummary& WithType(OperationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the request was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedDate() const { return m_submittedDate; }
    inline bool SubmittedDateHasBeenSet() const { return m_submittedDateHasBeenSet; }
    template<typename SubmittedDateT = Aws::Utils::DateTime>
    void SetSubmittedDate(SubmittedDateT&& value) { m_submittedDateHasBeenSet = true; m_submittedDate = std::forward<SubmittedDateT>(value); }
    template<typename SubmittedDateT = Aws::Utils::DateTime>
    OperationSummary& WithSubmittedDate(SubmittedDateT&& value) { SetSubmittedDate(std::forward<SubmittedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    OperationSummary& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Message about the operation. </p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    OperationSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
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
    inline StatusFlag GetStatusFlag() const { return m_statusFlag; }
    inline bool StatusFlagHasBeenSet() const { return m_statusFlagHasBeenSet; }
    inline void SetStatusFlag(StatusFlag value) { m_statusFlagHasBeenSet = true; m_statusFlag = value; }
    inline OperationSummary& WithStatusFlag(StatusFlag value) { SetStatusFlag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the last change was made in Unix time format and Coordinated
     * Universal Time (UTC). </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    OperationSummary& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    OperationStatus m_status{OperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    OperationType m_type{OperationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_submittedDate{};
    bool m_submittedDateHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    StatusFlag m_statusFlag{StatusFlag::NOT_SET};
    bool m_statusFlagHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
