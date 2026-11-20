/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payments/PaymentsRequest.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/FinancialRecordKey.h>

#include <utility>

namespace Aws {
namespace Payments {
namespace Model {

/**
 */
class BatchGetFinancialRecordRequest : public PaymentsRequest {
 public:
  AWS_PAYMENTS_API BatchGetFinancialRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetFinancialRecord"; }

  AWS_PAYMENTS_API Aws::String SerializePayload() const override;

  AWS_PAYMENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The keys of the financial records to retrieve. Each key is either the
   * record's ID or its invoice ID.</p>
   */
  inline const Aws::Vector<FinancialRecordKey>& GetKeys() const { return m_keys; }
  inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
  template <typename KeysT = Aws::Vector<FinancialRecordKey>>
  void SetKeys(KeysT&& value) {
    m_keysHasBeenSet = true;
    m_keys = std::forward<KeysT>(value);
  }
  template <typename KeysT = Aws::Vector<FinancialRecordKey>>
  BatchGetFinancialRecordRequest& WithKeys(KeysT&& value) {
    SetKeys(std::forward<KeysT>(value));
    return *this;
  }
  template <typename KeysT = FinancialRecordKey>
  BatchGetFinancialRecordRequest& AddKeys(KeysT&& value) {
    m_keysHasBeenSet = true;
    m_keys.emplace_back(std::forward<KeysT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FinancialRecordKey> m_keys;
  bool m_keysHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
