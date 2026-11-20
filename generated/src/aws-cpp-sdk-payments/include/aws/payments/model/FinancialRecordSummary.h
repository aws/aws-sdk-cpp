/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/Balances.h>
#include <aws/payments/model/BusinessUnit.h>
#include <aws/payments/model/CurrencyAmount.h>
#include <aws/payments/model/FinancialRecordStatus.h>
#include <aws/payments/model/FinancialRecordType.h>
#include <aws/payments/model/SettlementStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>A financial record as <code>ListFinancialRecords</code> returns it, without
 * the details that are specific to its type. To get the full record, use
 * <code>GetFinancialRecord</code> or
 * <code>BatchGetFinancialRecord</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/FinancialRecordSummary">AWS
 * API Reference</a></p>
 */
class FinancialRecordSummary {
 public:
  AWS_PAYMENTS_API FinancialRecordSummary() = default;
  AWS_PAYMENTS_API FinancialRecordSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API FinancialRecordSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID that Amazon Web Services Payments issued for the record. To retrieve
   * the full record, pass this value to <code>GetFinancialRecord</code> or
   * <code>BatchGetFinancialRecord</code> as <code>identifier</code>.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  FinancialRecordSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the financial record. On the full record, the populated member of
   * <code>details</code> matches this type. The following values are valid:</p> <ul>
   * <li> <p> <code>INVOICE</code> – An invoice: a bill from Amazon Web Services.
   * Payments and credit memos applied to the invoice settle it.</p> </li> <li> <p>
   * <code>CREDIT_MEMO</code> – A credit memo: a credit issued to your account, for
   * example for a billing correction or a service credit. Applying it to one or more
   * invoices settles it.</p> </li> </ul>
   */
  inline FinancialRecordType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(FinancialRecordType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline FinancialRecordSummary& WithType(FinancialRecordType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services business unit that issued the record: its merchant of
   * record and its line of business.</p>
   */
  inline const BusinessUnit& GetBusinessUnit() const { return m_businessUnit; }
  inline bool BusinessUnitHasBeenSet() const { return m_businessUnitHasBeenSet; }
  template <typename BusinessUnitT = BusinessUnit>
  void SetBusinessUnit(BusinessUnitT&& value) {
    m_businessUnitHasBeenSet = true;
    m_businessUnit = std::forward<BusinessUnitT>(value);
  }
  template <typename BusinessUnitT = BusinessUnit>
  FinancialRecordSummary& WithBusinessUnit(BusinessUnitT&& value) {
    SetBusinessUnit(std::forward<BusinessUnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of the financial record, in the currency that the record was
   * issued in. The amount doesn't change as the record is settled.
   * <code>balances</code> shows how much of it is in each settlement state.</p>
   */
  inline const CurrencyAmount& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = CurrencyAmount>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = CurrencyAmount>
  FinancialRecordSummary& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How much of <code>amount</code> is outstanding, processing, settled, and
   * canceled.</p>
   */
  inline const Balances& GetBalances() const { return m_balances; }
  inline bool BalancesHasBeenSet() const { return m_balancesHasBeenSet; }
  template <typename BalancesT = Balances>
  void SetBalances(BalancesT&& value) {
    m_balancesHasBeenSet = true;
    m_balances = std::forward<BalancesT>(value);
  }
  template <typename BalancesT = Balances>
  FinancialRecordSummary& WithBalances(BalancesT&& value) {
    SetBalances(std::forward<BalancesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the record is open or closed. If you receive a <code>status</code>
   * value that you don't recognize, use this member to tell open records from closed
   * ones. The following values are valid:</p> <ul> <li> <p> <code>OPEN</code> – Part
   * of the amount is outstanding or processing. The <code>status</code> is
   * <code>OUTSTANDING</code> or <code>PROCESSING</code>.</p> </li> <li> <p>
   * <code>CLOSED</code> – The whole amount is settled or canceled. The
   * <code>status</code> is <code>SETTLED</code> or <code>CANCELED</code>.</p> </li>
   * </ul> <p>A <code>CLOSED</code> record becomes <code>OPEN</code> again if a
   * payment or credit applied to it is reversed. Its <code>closedAt</code> is then
   * absent until the record closes again.</p>
   */
  inline SettlementStatus GetSettlementStatus() const { return m_settlementStatus; }
  inline bool SettlementStatusHasBeenSet() const { return m_settlementStatusHasBeenSet; }
  inline void SetSettlementStatus(SettlementStatus value) {
    m_settlementStatusHasBeenSet = true;
    m_settlementStatus = value;
  }
  inline FinancialRecordSummary& WithSettlementStatus(SettlementStatus value) {
    SetSettlementStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settlement stage of the record. The following values are valid:</p> <ul>
   * <li> <p> <code>OUTSTANDING</code> – Part of the amount isn't settled, and no
   * settlement is in progress on the record. For an invoice, <code>dueStatus</code>
   * shows whether it's due or past due. The <code>settlementStatus</code> is
   * <code>OPEN</code>.</p> </li> <li> <p> <code>PROCESSING</code> – A settlement of
   * part or all of the amount is in progress, for example a payment that's submitted
   * but not yet confirmed. <code>PROCESSING</code> takes precedence over
   * <code>OUTSTANDING</code>: while any part of the amount is processing, the status
   * is <code>PROCESSING</code>, even if another part is still outstanding. The
   * <code>settlementStatus</code> is <code>OPEN</code>.</p> </li> <li> <p>
   * <code>SETTLED</code> – The whole amount is settled. The
   * <code>settlementStatus</code> is <code>CLOSED</code>.</p> </li> <li> <p>
   * <code>CANCELED</code> – The record is canceled. The part of the amount that
   * wasn't settled isn't collected or applied. The <code>settlementStatus</code> is
   * <code>CLOSED</code>.</p> </li> </ul>
   */
  inline FinancialRecordStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FinancialRecordStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FinancialRecordSummary& WithStatus(FinancialRecordStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when this record was issued.</p>
   */
  inline const Aws::Utils::DateTime& GetIssuedAt() const { return m_issuedAt; }
  inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
  template <typename IssuedAtT = Aws::Utils::DateTime>
  void SetIssuedAt(IssuedAtT&& value) {
    m_issuedAtHasBeenSet = true;
    m_issuedAt = std::forward<IssuedAtT>(value);
  }
  template <typename IssuedAtT = Aws::Utils::DateTime>
  FinancialRecordSummary& WithIssuedAt(IssuedAtT&& value) {
    SetIssuedAt(std::forward<IssuedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when the record was last closed, that is, when its
   * <code>status</code> last became <code>SETTLED</code> or <code>CANCELED</code>.
   * This member is absent while the <code>settlementStatus</code> is
   * <code>OPEN</code>, including after a closed record reopens.</p>
   */
  inline const Aws::Utils::DateTime& GetClosedAt() const { return m_closedAt; }
  inline bool ClosedAtHasBeenSet() const { return m_closedAtHasBeenSet; }
  template <typename ClosedAtT = Aws::Utils::DateTime>
  void SetClosedAt(ClosedAtT&& value) {
    m_closedAtHasBeenSet = true;
    m_closedAt = std::forward<ClosedAtT>(value);
  }
  template <typename ClosedAtT = Aws::Utils::DateTime>
  FinancialRecordSummary& WithClosedAt(ClosedAtT&& value) {
    SetClosedAt(std::forward<ClosedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  FinancialRecordType m_type{FinancialRecordType::NOT_SET};

  BusinessUnit m_businessUnit;

  CurrencyAmount m_amount;

  Balances m_balances;

  SettlementStatus m_settlementStatus{SettlementStatus::NOT_SET};

  FinancialRecordStatus m_status{FinancialRecordStatus::NOT_SET};

  Aws::Utils::DateTime m_issuedAt{};

  Aws::Utils::DateTime m_closedAt{};
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_businessUnitHasBeenSet = false;
  bool m_amountHasBeenSet = false;
  bool m_balancesHasBeenSet = false;
  bool m_settlementStatusHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_issuedAtHasBeenSet = false;
  bool m_closedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
