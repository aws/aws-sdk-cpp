/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>An account that was in scope for an Organizational Report but could not be
 * processed, along with the reason for the failure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/FailedAccount">AWS
 * API Reference</a></p>
 */
class FailedAccount {
 public:
  AWS_WELLARCHITECTED_API FailedAccount() = default;
  AWS_WELLARCHITECTED_API FailedAccount(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API FailedAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS account ID that failed.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  FailedAccount& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of why the account could not be processed.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  FailedAccount& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_reason;
  bool m_accountIdHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
