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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The GetOperationDetail response includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetOperationDetailResponse">AWS
   * API Reference</a></p>
   */
  class GetOperationDetailResult
  {
  public:
    AWS_ROUTE53DOMAINS_API GetOperationDetailResult() = default;
    AWS_ROUTE53DOMAINS_API GetOperationDetailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API GetOperationDetailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the operation.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    GetOperationDetailResult& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline OperationStatus GetStatus() const { return m_status; }
    inline void SetStatus(OperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetOperationDetailResult& WithStatus(OperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information on the status including possible errors.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetOperationDetailResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetOperationDetailResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation that was requested.</p>
     */
    inline OperationType GetType() const { return m_type; }
    inline void SetType(OperationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetOperationDetailResult& WithType(OperationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the request was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedDate() const { return m_submittedDate; }
    template<typename SubmittedDateT = Aws::Utils::DateTime>
    void SetSubmittedDate(SubmittedDateT&& value) { m_submittedDateHasBeenSet = true; m_submittedDate = std::forward<SubmittedDateT>(value); }
    template<typename SubmittedDateT = Aws::Utils::DateTime>
    GetOperationDetailResult& WithSubmittedDate(SubmittedDateT&& value) { SetSubmittedDate(std::forward<SubmittedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the operation was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    GetOperationDetailResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists any outstanding operations that require customer action. Valid values
     * are:</p> <ul> <li> <p> <code>PENDING_ACCEPTANCE</code>: The operation is waiting
     * for acceptance from the account that is receiving the domain.</p> </li> <li> <p>
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
    inline void SetStatusFlag(StatusFlag value) { m_statusFlagHasBeenSet = true; m_statusFlag = value; }
    inline GetOperationDetailResult& WithStatusFlag(StatusFlag value) { SetStatusFlag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOperationDetailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    OperationStatus m_status{OperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    OperationType m_type{OperationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_submittedDate{};
    bool m_submittedDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    StatusFlag m_statusFlag{StatusFlag::NOT_SET};
    bool m_statusFlagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
