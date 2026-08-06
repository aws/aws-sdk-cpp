/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FreeTrialStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>The free trial status of each Security Hub feature for an
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AccountFreeTrialStatus">AWS
 * API Reference</a></p>
 */
class AccountFreeTrialStatus {
 public:
  AWS_SECURITYHUB_API AccountFreeTrialStatus() = default;
  AWS_SECURITYHUB_API AccountFreeTrialStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API AccountFreeTrialStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account identifier that the free trial statuses apply
   * to.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AccountFreeTrialStatus& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which Security Hub evaluated the free trial statuses for
   * this account. Every status in <code>FreeTrialStatuses</code> reflects this point
   * in time.</p>
   */
  inline const Aws::Utils::DateTime& GetEvaluatedAt() const { return m_evaluatedAt; }
  inline bool EvaluatedAtHasBeenSet() const { return m_evaluatedAtHasBeenSet; }
  template <typename EvaluatedAtT = Aws::Utils::DateTime>
  void SetEvaluatedAt(EvaluatedAtT&& value) {
    m_evaluatedAtHasBeenSet = true;
    m_evaluatedAt = std::forward<EvaluatedAtT>(value);
  }
  template <typename EvaluatedAtT = Aws::Utils::DateTime>
  AccountFreeTrialStatus& WithEvaluatedAt(EvaluatedAtT&& value) {
    SetEvaluatedAt(std::forward<EvaluatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of free trial statuses, one for each feature that has a free trial
   * period for the account. The array is empty if the account has no free trial to
   * report.</p>
   */
  inline const Aws::Vector<FreeTrialStatus>& GetFreeTrialStatuses() const { return m_freeTrialStatuses; }
  inline bool FreeTrialStatusesHasBeenSet() const { return m_freeTrialStatusesHasBeenSet; }
  template <typename FreeTrialStatusesT = Aws::Vector<FreeTrialStatus>>
  void SetFreeTrialStatuses(FreeTrialStatusesT&& value) {
    m_freeTrialStatusesHasBeenSet = true;
    m_freeTrialStatuses = std::forward<FreeTrialStatusesT>(value);
  }
  template <typename FreeTrialStatusesT = Aws::Vector<FreeTrialStatus>>
  AccountFreeTrialStatus& WithFreeTrialStatuses(FreeTrialStatusesT&& value) {
    SetFreeTrialStatuses(std::forward<FreeTrialStatusesT>(value));
    return *this;
  }
  template <typename FreeTrialStatusesT = FreeTrialStatus>
  AccountFreeTrialStatus& AddFreeTrialStatuses(FreeTrialStatusesT&& value) {
    m_freeTrialStatusesHasBeenSet = true;
    m_freeTrialStatuses.emplace_back(std::forward<FreeTrialStatusesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::Utils::DateTime m_evaluatedAt{};

  Aws::Vector<FreeTrialStatus> m_freeTrialStatuses;
  bool m_accountIdHasBeenSet = false;
  bool m_evaluatedAtHasBeenSet = false;
  bool m_freeTrialStatusesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
