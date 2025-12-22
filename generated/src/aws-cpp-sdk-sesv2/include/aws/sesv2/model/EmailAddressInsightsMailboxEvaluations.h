/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/EmailAddressInsightsVerdict.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>Contains individual validation checks performed on an email
 * address.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EmailAddressInsightsMailboxEvaluations">AWS
 * API Reference</a></p>
 */
class EmailAddressInsightsMailboxEvaluations {
 public:
  AWS_SESV2_API EmailAddressInsightsMailboxEvaluations() = default;
  AWS_SESV2_API EmailAddressInsightsMailboxEvaluations(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API EmailAddressInsightsMailboxEvaluations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Checks that the email address follows proper RFC standards and contains valid
   * characters in the correct format.</p>
   */
  inline const EmailAddressInsightsVerdict& GetHasValidSyntax() const { return m_hasValidSyntax; }
  inline bool HasValidSyntaxHasBeenSet() const { return m_hasValidSyntaxHasBeenSet; }
  template <typename HasValidSyntaxT = EmailAddressInsightsVerdict>
  void SetHasValidSyntax(HasValidSyntaxT&& value) {
    m_hasValidSyntaxHasBeenSet = true;
    m_hasValidSyntax = std::forward<HasValidSyntaxT>(value);
  }
  template <typename HasValidSyntaxT = EmailAddressInsightsVerdict>
  EmailAddressInsightsMailboxEvaluations& WithHasValidSyntax(HasValidSyntaxT&& value) {
    SetHasValidSyntax(std::forward<HasValidSyntaxT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks that the domain exists, has valid DNS records, and is conﬁgured to
   * receive email.</p>
   */
  inline const EmailAddressInsightsVerdict& GetHasValidDnsRecords() const { return m_hasValidDnsRecords; }
  inline bool HasValidDnsRecordsHasBeenSet() const { return m_hasValidDnsRecordsHasBeenSet; }
  template <typename HasValidDnsRecordsT = EmailAddressInsightsVerdict>
  void SetHasValidDnsRecords(HasValidDnsRecordsT&& value) {
    m_hasValidDnsRecordsHasBeenSet = true;
    m_hasValidDnsRecords = std::forward<HasValidDnsRecordsT>(value);
  }
  template <typename HasValidDnsRecordsT = EmailAddressInsightsVerdict>
  EmailAddressInsightsMailboxEvaluations& WithHasValidDnsRecords(HasValidDnsRecordsT&& value) {
    SetHasValidDnsRecords(std::forward<HasValidDnsRecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks that the mailbox exists and can receive messages without actually
   * sending an email.</p>
   */
  inline const EmailAddressInsightsVerdict& GetMailboxExists() const { return m_mailboxExists; }
  inline bool MailboxExistsHasBeenSet() const { return m_mailboxExistsHasBeenSet; }
  template <typename MailboxExistsT = EmailAddressInsightsVerdict>
  void SetMailboxExists(MailboxExistsT&& value) {
    m_mailboxExistsHasBeenSet = true;
    m_mailboxExists = std::forward<MailboxExistsT>(value);
  }
  template <typename MailboxExistsT = EmailAddressInsightsVerdict>
  EmailAddressInsightsMailboxEvaluations& WithMailboxExists(MailboxExistsT&& value) {
    SetMailboxExists(std::forward<MailboxExistsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identiﬁes role-based addresses (such as admin@, support@, or info@) that may
   * have lower engagement rates.</p>
   */
  inline const EmailAddressInsightsVerdict& GetIsRoleAddress() const { return m_isRoleAddress; }
  inline bool IsRoleAddressHasBeenSet() const { return m_isRoleAddressHasBeenSet; }
  template <typename IsRoleAddressT = EmailAddressInsightsVerdict>
  void SetIsRoleAddress(IsRoleAddressT&& value) {
    m_isRoleAddressHasBeenSet = true;
    m_isRoleAddress = std::forward<IsRoleAddressT>(value);
  }
  template <typename IsRoleAddressT = EmailAddressInsightsVerdict>
  EmailAddressInsightsMailboxEvaluations& WithIsRoleAddress(IsRoleAddressT&& value) {
    SetIsRoleAddress(std::forward<IsRoleAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks disposable or temporary email addresses that could negatively impact
   * your sender reputation.</p>
   */
  inline const EmailAddressInsightsVerdict& GetIsDisposable() const { return m_isDisposable; }
  inline bool IsDisposableHasBeenSet() const { return m_isDisposableHasBeenSet; }
  template <typename IsDisposableT = EmailAddressInsightsVerdict>
  void SetIsDisposable(IsDisposableT&& value) {
    m_isDisposableHasBeenSet = true;
    m_isDisposable = std::forward<IsDisposableT>(value);
  }
  template <typename IsDisposableT = EmailAddressInsightsVerdict>
  EmailAddressInsightsMailboxEvaluations& WithIsDisposable(IsDisposableT&& value) {
    SetIsDisposable(std::forward<IsDisposableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks if the input appears to be random text.</p>
   */
  inline const EmailAddressInsightsVerdict& GetIsRandomInput() const { return m_isRandomInput; }
  inline bool IsRandomInputHasBeenSet() const { return m_isRandomInputHasBeenSet; }
  template <typename IsRandomInputT = EmailAddressInsightsVerdict>
  void SetIsRandomInput(IsRandomInputT&& value) {
    m_isRandomInputHasBeenSet = true;
    m_isRandomInput = std::forward<IsRandomInputT>(value);
  }
  template <typename IsRandomInputT = EmailAddressInsightsVerdict>
  EmailAddressInsightsMailboxEvaluations& WithIsRandomInput(IsRandomInputT&& value) {
    SetIsRandomInput(std::forward<IsRandomInputT>(value));
    return *this;
  }
  ///@}
 private:
  EmailAddressInsightsVerdict m_hasValidSyntax;

  EmailAddressInsightsVerdict m_hasValidDnsRecords;

  EmailAddressInsightsVerdict m_mailboxExists;

  EmailAddressInsightsVerdict m_isRoleAddress;

  EmailAddressInsightsVerdict m_isDisposable;

  EmailAddressInsightsVerdict m_isRandomInput;
  bool m_hasValidSyntaxHasBeenSet = false;
  bool m_hasValidDnsRecordsHasBeenSet = false;
  bool m_mailboxExistsHasBeenSet = false;
  bool m_isRoleAddressHasBeenSet = false;
  bool m_isDisposableHasBeenSet = false;
  bool m_isRandomInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
